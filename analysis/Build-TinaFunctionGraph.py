#!/usr/bin/env python3
"""Build a dashboard-compatible call graph from Ghidra per-function C files."""

from __future__ import annotations

import argparse
import csv
import datetime as dt
import json
import math
import os
import re
import sys
import time
from collections import defaultdict
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable
from urllib.parse import quote


CALL_TOKEN_PATTERN = re.compile(r"(?<![A-Za-z0-9_])([A-Za-z_][A-Za-z0-9_]*)\s*\(")
FUN_TOKEN_PATTERN = re.compile(r"^(?:thunk_)?FUN_([0-9A-Fa-f]+)$")
BODY_START_PATTERN = re.compile(r"\r?\n\{\s*\r?\n")
VALID_IDENTIFIER_PATTERN = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
EXTERNAL_SYMBOL_PATTERN = re.compile(r"^(?P<library>[^:]+\.DLL)::(?P<api>.+)$")
VCL_NATIVE_CLASS_PATTERN = re.compile(
    r'\bFUN_00654d20\s*\([^;\r\n]*?L"(?P<window_class>[^"]+)"\s*\)'
)
VCL_NATIVE_CLASS_WRAPPER_ADDRESS = 0x00654D20
DEFAULT_UI_EVIDENCE_PATH = Path(
    "DecompiledSources/Tina16/resources/dfm/ui-evidence.json"
)

HIGH_CONNECTIVITY_FUNCTIONS = {
    0x00414480: {
        "recoveredRole": "Delphi UnicodeString clear and finalization helper",
        "likelyDelphiName": "@UStrClr",
        "apiCategory": "Delphi runtime memory management",
        "behavior": (
            "Clears a Delphi UnicodeString variable, decrements a positive "
            "reference count atomically, and frees the allocation when the "
            "reference count reaches zero."
        ),
        "evidence": (
            "The function nulls the destination, updates the count at string "
            "offset -8 under a lock, and frees the allocation at offset -16."
        ),
        "tags": ["delphi-rtl", "unicode-string", "memory-management"],
    },
    0x00414560: {
        "recoveredRole": "Delphi UnicodeString array finalization helper",
        "likelyDelphiName": "@UStrArrayClr",
        "apiCategory": "Delphi runtime memory management",
        "behavior": (
            "Finalizes a contiguous array of Delphi UnicodeString variables "
            "by clearing each eight-byte string slot."
        ),
        "evidence": (
            "The function loops over the supplied element count, calls "
            "FUN_00414480 for each slot, and advances by eight bytes."
        ),
        "tags": ["delphi-rtl", "unicode-string", "array-finalization"],
    },
    0x00410F20: {
        "recoveredRole": "Nil-safe Delphi object destruction helper",
        "likelyDelphiName": "TObject.Free",
        "apiCategory": "Delphi object lifetime",
        "behavior": (
            "Frees a Delphi object when the object reference is not nil by "
            "dispatching to its virtual destructor with the destroy flag set."
        ),
        "evidence": (
            "The function checks for nil and calls the virtual method at VMT "
            "offset -0x20 with argument 1."
        ),
        "tags": ["delphi-rtl", "object-lifetime", "virtual-destructor"],
    },
    0x00413520: {
        "recoveredRole": "Thread-local Delphi exception and object cleanup helper",
        "apiCategory": "Delphi runtime exception cleanup",
        "behavior": (
            "Adjusts a thread-local cleanup-record chain and frees an object "
            "held by a displaced cleanup record when required."
        ),
        "evidence": (
            "The function reads the thread-local record head at offset 0x208, "
            "pops records, releases record slots, and calls FUN_00410f20 for "
            "a non-nil saved object."
        ),
        "tags": ["delphi-rtl", "exception-cleanup", "object-lifetime"],
    },
    0x00414AD0: {
        "recoveredRole": "Delphi UnicodeString assignment helper",
        "likelyDelphiName": "@UStrAsg",
        "apiCategory": "Delphi runtime memory management",
        "behavior": (
            "Assigns a Delphi UnicodeString to a destination, copying static "
            "strings or incrementing dynamic-string reference counts, then "
            "clears the previous destination value."
        ),
        "evidence": (
            "A negative reference count causes a length-based UTF-16 copy; a "
            "managed string increments its reference count before the old "
            "destination is passed to FUN_00414480."
        ),
        "tags": ["delphi-rtl", "unicode-string", "assignment"],
    },
}

KNOWN_APPLICATION_UI_FUNCTIONS = {
    0x00B8AC60: {
        "recoveredRole": "Delphi form caption and hint localization",
        "uiRole": "ui-localization",
        "apiCategory": "Application UI",
        "behavior": (
            "Builds form and component localization keys and applies localized "
            "captions and hints to Delphi controls."
        ),
        "evidence": (
            "The function builds tina.exe.Forms.T... keys and reads repeated "
            ".Caption and .Hint entries."
        ),
        "tags": ["application-ui", "ui-localization", "caption", "hint"],
    },
    0x010A5240: {
        "recoveredRole": "Add Voltage/Current dialog construction and handling",
        "uiRole": "application-dialog-creation",
        "apiCategory": "Application UI",
        "behavior": (
            "Creates and runs the Add Voltage/Current dialog, adds its prompt "
            "and hint label, and processes an accepted value."
        ),
        "evidence": (
            "The function passes Add Voltage/Current, Voltage/Current:, and "
            "Hint: V(p,n) literals to dialog construction helpers."
        ),
        "tags": ["application-ui", "dialog", "control-creation"],
    },
}

NATIVE_CONTROL_TYPES = {
    "BUTTON": "button-family control",
    "EDIT": "single-line text box",
    "COMBOBOX": "drop-down list",
    "LISTBOX": "list box",
    "SCROLLBAR": "scroll bar",
    "STATIC": "static text or image control",
    "SYSTABCONTROL32": "tab control",
    "MSCTLS_STATUSBAR32": "status bar",
    "SYSHEADER32": "header control",
    "SYSTREEVIEW32": "tree view",
    "MSCTLS_PROGRESS32": "progress bar",
    "RICHEDIT20W": "rich text box",
    "MSCTLS_UPDOWN32": "spin button",
    "MSCTLS_HOTKEY32": "hot-key input",
    "SYSLISTVIEW32": "list view",
    "TOOLBARWINDOW32": "toolbar",
    "SYSPAGER": "pager control",
    "COMBOBOXEX32": "extended drop-down list",
}

WINDOWS_API_CATEGORIES = {
    "ADVAPI32.DLL": "Registry",
    "DWMAPI.DLL": "Window composition",
    "IMM32.DLL": "Text input and IME",
    "KERNEL32.DLL": "System services",
    "MSIMG32.DLL": "Graphics and painting",
    "RPCRT4.DLL": "Identifiers and RPC",
    "SHCORE.DLL": "Display DPI",
    "SHELL32.DLL": "Windows Shell",
    "USER32.DLL": "Windows, input, and dialogs",
    "UXTHEME.DLL": "Window theming and painting",
    "WINDOWSCODECS.DLL": "Image conversion",
    "WTSAPI32.DLL": "Desktop session notifications",
}

WINDOWS_API_PURPOSES = {
    "RegDeleteKeyExW": "Deletes a registry subkey with explicit registry-view access flags.",
    "DwmExtendFrameIntoClientArea": "Extends the desktop composition frame into a window client area.",
    "DwmIsCompositionEnabled": "Checks whether desktop window composition is enabled.",
    "ImmAssociateContextEx": "Associates an input-method context with a window or its child windows.",
    "ImmGetCompositionStringA": "Reads ANSI input-method composition data.",
    "ImmGetCompositionStringW": "Reads Unicode input-method composition data.",
    "ImmGetContext": "Gets the input-method context for a window.",
    "ImmGetConversionStatus": "Reads the current input-method conversion and sentence modes.",
    "ImmIsIME": "Checks whether a keyboard layout is an input method editor.",
    "ImmReleaseContext": "Releases a window input-method context obtained by ImmGetContext.",
    "ImmSetCompositionFontA": "Sets the ANSI composition font for an input-method context.",
    "ImmSetCompositionFontW": "Sets the Unicode composition font for an input-method context.",
    "ImmSetCompositionWindow": "Sets the position or area of the input-method composition window.",
    "ImmSetConversionStatus": "Sets input-method conversion and sentence modes.",
    "ImmSetOpenStatus": "Opens or closes the input method editor.",
    "GetFinalPathNameByHandleW": "Gets the final Unicode path for an open file or directory handle.",
    "GetLogicalProcessorInformation": "Reads processor-core, cache, and NUMA topology information.",
    "GetNativeSystemInfo": "Reads the native operating-system and processor architecture.",
    "GetSystemTimes": "Reads system idle, kernel, and user time counters.",
    "GetTimeZoneInformationForYear": "Gets time-zone rules for a specified year.",
    "IsWow64Process": "Checks whether a process runs under WOW64.",
    "LocaleNameToLCID": "Converts a locale name to a locale identifier.",
    "AlphaBlend": "Blends a source bitmap into a destination device context with alpha transparency.",
    "GradientFill": "Fills rectangles or triangles with smooth color gradients.",
    "TransparentBlt": "Copies a bitmap while treating one color as transparent.",
    "UuidCreate": "Creates a UUID.",
    "GetDpiForMonitor": "Gets the effective, angular, or raw DPI for a monitor.",
    "GetProcessDpiAwareness": "Gets the DPI-awareness mode of a process.",
    "SHCreateItemFromParsingName": "Creates a Windows Shell item from a file-system or Shell parsing path.",
    "AreDpiAwarenessContextsEqual": "Compares two window DPI-awareness contexts.",
    "CloseGestureInfoHandle": "Releases a gesture-information handle received by a window.",
    "GetDpiForWindow": "Gets the DPI associated with a window.",
    "GetGestureInfo": "Reads touch-gesture information delivered to a window.",
    "GetSystemMetricsForDpi": "Gets a system metric scaled for a specified DPI.",
    "GetWindowDpiAwarenessContext": "Gets the DPI-awareness context associated with a window.",
    "MessageBoxA": "Creates and displays a modal ANSI message-box window.",
    "PhysicalToLogicalPoint": "Converts a screen point from physical to logical window coordinates.",
    "SetGestureConfig": "Selects which gestures a window receives.",
    "BeginBufferedAnimation": "Starts a themed buffered animation for a window.",
    "BeginBufferedPaint": "Starts off-screen buffered painting for a window or control.",
    "BufferedPaintInit": "Initializes the buffered-painting API for the process.",
    "BufferedPaintRenderAnimation": "Renders the next frame of a buffered window animation.",
    "BufferedPaintSetAlpha": "Sets alpha values in a buffered-paint surface.",
    "BufferedPaintStopAllAnimations": "Stops all buffered animations for a window.",
    "BufferedPaintUnInit": "Releases process resources used by buffered painting.",
    "DrawThemeTextEx": "Draws text with the current visual style for a window or control.",
    "EndBufferedAnimation": "Finishes a themed buffered animation and presents its output.",
    "EndBufferedPaint": "Finishes buffered painting and optionally copies it to the target window.",
    "OpenThemeDataForDpi": "Opens visual-style data for a window class at a specified DPI.",
    "WICConvertBitmapSource": "Converts a Windows Imaging Component bitmap source to another pixel format.",
    "WTSRegisterSessionNotification": "Registers a window to receive desktop-session change notifications.",
    "WTSUnRegisterSessionNotification": "Stops desktop-session change notifications for a window.",
}


@dataclass(frozen=True)
class FunctionRecord:
    address: int
    address_text: str
    symbol: str
    file_name: str
    relative_path: str

    @property
    def node_id(self) -> str:
        return f"function:{self.address_text}"


def parse_arguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Build a function-call graph from the TINA Ghidra export."
    )
    parser.add_argument(
        "--project-root",
        type=Path,
        default=Path.cwd(),
        help="Repository root. Defaults to the current directory.",
    )
    parser.add_argument(
        "--index",
        type=Path,
        default=Path("DecompiledSources/Tina16/functions/function-index.csv"),
        help="Function index path, relative to the project root by default.",
    )
    parser.add_argument(
        "--output",
        type=Path,
        default=Path(".understand-anything/knowledge-graph.json"),
        help="Graph output path, relative to the project root by default.",
    )
    parser.add_argument(
        "--ui-evidence",
        type=Path,
        default=DEFAULT_UI_EVIDENCE_PATH,
        help="Extracted Delphi DFM UI evidence, relative to the project root.",
    )
    parser.add_argument(
        "--limit",
        type=int,
        help="Process only the first N successful functions for a smoke test.",
    )
    parser.add_argument(
        "--progress-interval",
        type=int,
        default=10_000,
        help="Print progress after this many files.",
    )
    parser.add_argument(
        "--git-commit",
        default="",
        help="Git commit recorded in graph metadata.",
    )
    return parser.parse_args()


def resolve_path(project_root: Path, path: Path) -> Path:
    if path.is_absolute():
        return path.resolve()
    return (project_root / path).resolve()


def normalize_address(value: str) -> tuple[int, str]:
    address = int(value, 16)
    return address, f"{address:08x}"


def load_function_records(
    project_root: Path, index_path: Path, limit: int | None
) -> tuple[list[FunctionRecord], int]:
    records: list[FunctionRecord] = []
    failed_count = 0

    with index_path.open("r", encoding="utf-8-sig", newline="") as stream:
        reader = csv.DictReader(stream)
        required_fields = {"address", "symbol", "file", "status"}
        missing_fields = required_fields.difference(reader.fieldnames or [])
        if missing_fields:
            missing = ", ".join(sorted(missing_fields))
            raise ValueError(f"Function index is missing columns: {missing}")

        for row in reader:
            if row["status"] != "ok" or not row["file"]:
                failed_count += 1
                continue

            address, address_text = normalize_address(row["address"])
            source_path = index_path.parent / row["file"]
            try:
                relative_path = source_path.relative_to(project_root).as_posix()
            except ValueError as error:
                raise ValueError(
                    f"Source file is outside the project root: {source_path}"
                ) from error

            records.append(
                FunctionRecord(
                    address=address,
                    address_text=address_text,
                    symbol=row["symbol"],
                    file_name=row["file"],
                    relative_path=relative_path,
                )
            )

            if limit is not None and len(records) >= limit:
                break

    return records, failed_count


def symbol_aliases(symbol: str) -> Iterable[str]:
    if VALID_IDENTIFIER_PATTERN.fullmatch(symbol):
        yield symbol

    suffix = symbol.rsplit("::", 1)[-1]
    if suffix != symbol and VALID_IDENTIFIER_PATTERN.fullmatch(suffix):
        yield suffix


def build_alias_map(records: list[FunctionRecord]) -> dict[str, tuple[int, ...]]:
    aliases: dict[str, set[int]] = defaultdict(set)
    for record in records:
        for alias in symbol_aliases(record.symbol):
            aliases[alias].add(record.address)
    return {alias: tuple(sorted(addresses)) for alias, addresses in aliases.items()}


def external_function_metadata(record: FunctionRecord) -> dict[str, object]:
    match = EXTERNAL_SYMBOL_PATTERN.fullmatch(record.symbol)
    if match is None:
        return {}

    library = match.group("library").upper()
    api = match.group("api")
    is_windows_api = library in WINDOWS_API_CATEGORIES
    if is_windows_api:
        api_family = "Windows API"
        category = WINDOWS_API_CATEGORIES[library]
        behavior = WINDOWS_API_PURPOSES.get(
            api, f"Calls the {library} Windows API export {api}."
        )
    else:
        api_family = "External DLL"
        category = "Product or third-party library"
        behavior = f"Calls the {library} export {api}."

    return {
        "external": True,
        "library": library,
        "api": api,
        "apiFamily": api_family,
        "apiCategory": category,
        "behavior": behavior,
    }


def native_control_annotation(window_class: str) -> dict[str, object]:
    control_type = NATIVE_CONTROL_TYPES.get(
        window_class.upper(), "native window control"
    )
    return {
        "callType": "delphi-vcl-native-control-params",
        "framework": "Delphi VCL",
        "nativeWindowClass": window_class,
        "uiControlType": control_type,
        "uiRole": "native-control-creation-parameter-builder",
        "apiCategory": "Window and control creation",
        "behavior": (
            f"Prepares native window creation parameters for a {control_type} "
            f"that uses the {window_class} window class through Delphi VCL."
        ),
        "evidence": (
            f'Literal L"{window_class}" is passed to FUN_00654d20 in the '
            "decompiled function body."
        ),
    }


def percentile(values: list[int], fraction: float) -> float:
    if not values:
        return 0.0

    position = (len(values) - 1) * fraction
    lower_index = math.floor(position)
    upper_index = math.ceil(position)
    if lower_index == upper_index:
        return float(values[lower_index])

    lower_value = values[lower_index]
    upper_value = values[upper_index]
    return lower_value + (upper_value - lower_value) * (position - lower_index)


def classify_complexity(
    records: list[FunctionRecord], edges: set[tuple[int, int]]
) -> tuple[dict[int, int], dict[int, str], dict[str, object]]:
    outgoing_counts = {record.address: 0 for record in records}
    for source, target in edges:
        if source != target:
            outgoing_counts[source] += 1

    sorted_counts = sorted(outgoing_counts.values())
    simple_maximum = percentile(sorted_counts, 0.333)
    moderate_maximum = percentile(sorted_counts, 0.666)
    complexity_by_address: dict[int, str] = {}
    distribution = {"simple": 0, "moderate": 0, "complex": 0}

    for address, count in outgoing_counts.items():
        if count <= simple_maximum:
            complexity = "simple"
        elif count <= moderate_maximum:
            complexity = "moderate"
        else:
            complexity = "complex"
        complexity_by_address[address] = complexity
        distribution[complexity] += 1

    analysis = {
        "complexityMetric": "distinct outgoing calls to other functions",
        "lowerPercentile": 33.3,
        "upperPercentile": 66.6,
        "simpleMaximumCalls": simple_maximum,
        "moderateMaximumCalls": moderate_maximum,
        "distribution": distribution,
    }
    return outgoing_counts, complexity_by_address, analysis


def function_body(text: str) -> str:
    match = BODY_START_PATTERN.search(text)
    if match is None:
        return text
    return text[match.end() :]


def resolve_call_token(
    token: str,
    address_map: dict[int, FunctionRecord],
    alias_map: dict[str, tuple[int, ...]],
) -> tuple[int | None, str]:
    fun_match = FUN_TOKEN_PATTERN.fullmatch(token)
    if fun_match is not None:
        address = int(fun_match.group(1), 16)
        if address in address_map:
            return address, "resolved"
        return None, "missing-address"

    candidates = alias_map.get(token, ())
    if len(candidates) == 1:
        return candidates[0], "resolved"
    if len(candidates) > 1:
        return None, "ambiguous-alias"
    return None, "not-indexed"


def extract_edges(
    records: list[FunctionRecord],
    index_path: Path,
    progress_interval: int,
) -> tuple[
    set[tuple[int, int]],
    dict[tuple[int, int], dict[str, object]],
    dict[int, dict[str, object]],
    dict[str, int],
]:
    address_map = {record.address: record for record in records}
    alias_map = build_alias_map(records)
    edges: set[tuple[int, int]] = set()
    edge_annotations: dict[tuple[int, int], dict[str, object]] = {}
    node_annotations: dict[int, dict[str, object]] = {}
    stats = defaultdict(int)

    for address, annotation in HIGH_CONNECTIVITY_FUNCTIONS.items():
        if address in address_map:
            node_annotations[address] = {
                key: list(value) if isinstance(value, list) else value
                for key, value in annotation.items()
            }
            stats["documentedHighConnectivityFunctions"] += 1

    for address, annotation in KNOWN_APPLICATION_UI_FUNCTIONS.items():
        if address in address_map:
            node_annotations[address] = {
                key: list(value) if isinstance(value, list) else value
                for key, value in annotation.items()
            }
            stats["documentedApplicationUiFunctions"] += 1

    if VCL_NATIVE_CLASS_WRAPPER_ADDRESS in address_map:
        node_annotations.setdefault(VCL_NATIVE_CLASS_WRAPPER_ADDRESS, {}).update({
            "framework": "Delphi VCL",
            "apiCategory": "Window and control creation",
            "uiRole": "native-control-creation-parameter-wrapper",
            "behavior": (
                "Applies a native window-class name and control creation flags "
                "to a Delphi/VCL creation-parameter structure."
            ),
            "evidence": (
                "Called with standard Win32 window-class literals by recovered "
                "control-specific parameter builders."
            ),
            "tags": ["delphi-vcl", "native-control", "control-creation"],
        })

    for index, record in enumerate(records, start=1):
        source_path = index_path.parent / record.file_name
        text = source_path.read_text(encoding="utf-8-sig", errors="replace")
        body = function_body(text)

        for token in CALL_TOKEN_PATTERN.findall(body):
            target, resolution = resolve_call_token(token, address_map, alias_map)
            if resolution == "ambiguous-alias":
                stats["ambiguousCallOccurrences"] += 1
                continue
            if resolution == "missing-address":
                stats["callsOutsideExportedRange"] += 1
                continue
            if resolution == "not-indexed":
                continue

            assert target is not None
            if target == record.address and "::" in record.symbol:
                stats["externalImportSelfCallsSkipped"] += 1
                continue
            edges.add((record.address, target))

        for match in VCL_NATIVE_CLASS_PATTERN.finditer(body):
            if VCL_NATIVE_CLASS_WRAPPER_ADDRESS not in address_map:
                break
            window_class = match.group("window_class")
            edge_key = (record.address, VCL_NATIVE_CLASS_WRAPPER_ADDRESS)
            edges.add(edge_key)
            annotation = native_control_annotation(window_class)
            edge_annotations[edge_key] = annotation
            node_annotations.setdefault(record.address, {}).update({
                key: value for key, value in annotation.items() if key != "callType"
            })
            node_annotations[record.address]["tags"] = [
                "delphi-vcl",
                "native-control",
                "control-creation",
            ]
            stats["vclNativeControlParameterEdges"] += 1
            if window_class.upper() == "BUTTON":
                stats["vclButtonParameterEdges"] += 1

        thunk_match = re.fullmatch(r"thunk_FUN_([0-9A-Fa-f]+)", record.symbol)
        if thunk_match is not None:
            target = int(thunk_match.group(1), 16)
            if target in address_map and target != record.address:
                edges.add((record.address, target))
                stats["thunkTargetEdges"] += 1

        if progress_interval > 0 and index % progress_interval == 0:
            print(
                f"Analyzed {index:,}/{len(records):,} functions; "
                f"found {len(edges):,} unique call edges.",
                flush=True,
            )

    for record in records:
        metadata = external_function_metadata(record)
        if not metadata:
            continue
        if metadata["apiFamily"] == "Windows API":
            stats["windowsApiNodes"] += 1
        else:
            stats["otherDllNodes"] += 1

    for source, target in edges:
        metadata = external_function_metadata(address_map[target])
        if not metadata:
            continue
        edge_annotations[(source, target)] = {
            "callType": (
                "windows-api"
                if metadata["apiFamily"] == "Windows API"
                else "external-dll"
            ),
            "library": metadata["library"],
            "api": metadata["api"],
            "apiFamily": metadata["apiFamily"],
            "apiCategory": metadata["apiCategory"],
            "behavior": metadata["behavior"],
            "evidence": "Direct named call resolved to an indexed DLL export stub.",
        }
        if metadata["apiFamily"] == "Windows API":
            stats["windowsApiCallEdges"] += 1
        else:
            stats["otherDllCallEdges"] += 1

    control_creation_targets = {
        address
        for address, annotation in node_annotations.items()
        if str(annotation.get("uiRole", "")).startswith(
            "native-control-creation-parameter"
        )
    }
    creation_path_callers = {
        source
        for source, target in edges
        if target in control_creation_targets and source not in control_creation_targets
    }
    for source in creation_path_callers:
        annotation = node_annotations.setdefault(source, {})
        annotation.setdefault("framework", "Delphi VCL")
        annotation.setdefault("apiCategory", "Window and control creation")
        annotation.setdefault("uiRole", "vcl-control-creation-path-caller")
        annotation.setdefault(
            "behavior",
            "Calls a recovered Delphi VCL native-control creation parameter function.",
        )
        annotation.setdefault(
            "evidence",
            "A direct recovered call targets a native-control parameter builder.",
        )
        append_unique_tags(
            annotation,
            ["delphi-vcl", "native-control", "control-creation"],
        )
    stats["vclControlCreationPathCallers"] = len(creation_path_callers)

    return edges, edge_annotations, node_annotations, dict(stats)


def write_json_string(stream, value: str) -> None:
    json.dump(value, stream, ensure_ascii=False)


def replace_output_file(temporary_path: Path, output_path: Path) -> None:
    attempts = 20
    for attempt in range(1, attempts + 1):
        try:
            os.replace(temporary_path, output_path)
            return
        except PermissionError:
            if attempt == attempts:
                raise
            time.sleep(0.25)


def load_ui_evidence(ui_evidence_path: Path) -> dict[str, object]:
    with ui_evidence_path.open("r", encoding="utf-8-sig") as stream:
        evidence = json.load(stream)

    forms = evidence.get("forms")
    if not isinstance(forms, list):
        raise ValueError("The UI evidence does not contain a forms array.")
    return evidence


def graph_id_part(value: str) -> str:
    return quote(value, safe="._-")


def form_node_id(resource: str) -> str:
    return f"resource:dfm:{graph_id_part(resource)}"


def control_node_id(resource: str, component_path: str) -> str:
    return (
        f"resource:dfm:{graph_id_part(resource)}/"
        f"{graph_id_part(component_path)}"
    )


def handler_concept_node_id(form_class: str, handler_name: str) -> str:
    return (
        f"concept:dfm-handler:{graph_id_part(form_class)}/"
        f"{graph_id_part(handler_name)}"
    )


def classify_ui_component(class_name: str, is_form: bool) -> tuple[str, list[str]]:
    upper_name = class_name.upper()
    if is_form or upper_name.endswith("FORM") or "FORM" in upper_name:
        return "form", ["ui-form"]
    if "MENUITEM" in upper_name:
        return "menu item", ["ui-menu-item"]
    if "MAINMENU" in upper_name or "POPUPMENU" in upper_name:
        return "menu", ["ui-menu"]
    if any(name in upper_name for name in ("BUTTON", "BITBTN", "SPEEDBUTTON")):
        return "button", ["ui-button"]
    if "COMBOBOX" in upper_name or "DROPDOWN" in upper_name:
        return "drop-down list", ["ui-dropdown"]
    if any(name in upper_name for name in ("RICHEDIT", "MASKEDIT", "LABELEDEDIT")):
        return "text box", ["ui-textbox"]
    if upper_name.endswith("EDIT") or upper_name == "TEDIT":
        return "text box", ["ui-textbox"]
    if "MEMO" in upper_name:
        return "multiline text box", ["ui-textbox", "ui-multiline"]
    if any(name in upper_name for name in ("TREE", "LIST", "GRID")):
        return "list, tree, or grid", ["ui-collection"]
    if any(name in upper_name for name in ("CHECKBOX", "RADIOBUTTON")):
        return "selection control", ["ui-selection-control"]
    if any(name in upper_name for name in ("LABEL", "STATICTEXT")):
        return "label", ["ui-label"]
    if any(name in upper_name for name in ("PAGECONTROL", "TABSHEET", "TABCONTROL")):
        return "tab or page", ["ui-tab"]
    if "TOOLBAR" in upper_name or "TOOLBUTTON" in upper_name:
        return "toolbar control", ["ui-toolbar"]
    if "STATUSBAR" in upper_name:
        return "status bar", ["ui-statusbar"]
    if any(name in upper_name for name in ("ACTION", "TIMER", "IMAGELIST", "DIALOG")):
        return "nonvisual component", ["ui-nonvisual"]
    return "UI component", ["ui-component"]


def ui_summary(
    class_name: str,
    component_path: str,
    properties: dict[str, str],
    kind: str,
) -> str:
    parts = [f"{class_name} {kind} at {component_path}."]
    caption = properties.get("Caption", "").strip()
    hint = properties.get("Hint", "").strip()
    if caption:
        parts.append(f'Caption: "{caption}".')
    if hint:
        parts.append(f'Hint: "{hint}".')
    parts.append("Created from a Delphi DFM component stream.")
    return " ".join(parts)


def append_unique_tags(annotation: dict[str, object], tags: list[str]) -> None:
    existing = annotation.setdefault("tags", [])
    assert isinstance(existing, list)
    for tag in tags:
        if tag not in existing:
            existing.append(tag)


def build_ui_graph(
    ui_evidence: dict[str, object],
    records: list[FunctionRecord],
    node_annotations: dict[int, dict[str, object]],
    ui_evidence_path: Path,
    project_root: Path,
) -> tuple[list[dict[str, object]], list[dict[str, object]], dict[str, int]]:
    record_by_address = {record.address: record for record in records}
    relative_evidence_path = ui_evidence_path.relative_to(project_root).as_posix()
    ui_nodes: list[dict[str, object]] = []
    ui_edges: list[dict[str, object]] = []
    unresolved_handlers: dict[str, dict[str, object]] = {}
    handler_bindings: dict[int, list[dict[str, str]]] = defaultdict(list)
    stats = defaultdict(int)

    forms = ui_evidence["forms"]
    assert isinstance(forms, list)
    for form in forms:
        assert isinstance(form, dict)
        resource = str(form["resource"])
        form_class = str(form["className"])
        components = form.get("components", [])
        if not isinstance(components, list) or not components:
            continue

        component_ids: dict[str, str] = {}
        for component_index, component in enumerate(components):
            assert isinstance(component, dict)
            component_path = str(component["path"])
            component_ids[component_path] = (
                form_node_id(resource)
                if component_index == 0
                else control_node_id(resource, component_path)
            )

        root_component = components[0]
        assert isinstance(root_component, dict)
        root_properties = root_component.get("properties", {})
        assert isinstance(root_properties, dict)
        root_path = str(root_component["path"])
        form_kind, form_tags = classify_ui_component(form_class, True)
        ui_nodes.append(
            {
                "id": form_node_id(resource),
                "name": resource,
                "type": "resource",
                "filePath": relative_evidence_path,
                "summary": ui_summary(
                    form_class, root_path, root_properties, form_kind
                ),
                "tags": ["delphi-dfm", *form_tags],
                "complexity": "simple",
                "formResource": resource,
                "formClass": form_class,
                "componentPath": root_path,
                "sourceComponentPath": root_component.get("sourcePath", root_path),
                "controlClass": form_class,
                "uiControlType": form_kind,
                "creationMechanism": "Delphi DFM component stream",
                "uiProperties": root_properties,
                "caption": root_properties.get("Caption", ""),
                "hint": root_properties.get("Hint", ""),
                "uiEvents": root_component.get("events", []),
            }
        )
        stats["formNodeCount"] += 1

        for component_index, component in enumerate(components):
            assert isinstance(component, dict)
            component_path = str(component["path"])
            parent_path = component.get("parentPath")
            class_name = str(component["className"])
            properties = component.get("properties", {})
            events = component.get("events", [])
            assert isinstance(properties, dict)
            assert isinstance(events, list)
            node_id = component_ids[component_path]
            kind, type_tags = classify_ui_component(
                class_name, component_index == 0
            )

            if component_index > 0:
                ui_nodes.append(
                    {
                        "id": node_id,
                        "name": str(component.get("name", component_path)),
                        "type": "resource",
                        "filePath": relative_evidence_path,
                        "summary": ui_summary(
                            class_name, component_path, properties, kind
                        ),
                        "tags": ["delphi-dfm", *type_tags],
                        "complexity": "simple",
                        "formResource": resource,
                        "formClass": form_class,
                        "componentPath": component_path,
                        "sourceComponentPath": component.get(
                            "sourcePath", component_path
                        ),
                        "parentPath": parent_path,
                        "controlClass": class_name,
                        "uiControlType": kind,
                        "creationMechanism": "Delphi DFM component stream",
                        "uiProperties": properties,
                        "caption": properties.get("Caption", ""),
                        "hint": properties.get("Hint", ""),
                        "uiEvents": events,
                    }
                )
                stats["controlNodeCount"] += 1
                if parent_path is not None and str(parent_path) in component_ids:
                    ui_edges.append(
                        {
                            "source": component_ids[str(parent_path)],
                            "target": node_id,
                            "type": "contains",
                            "direction": "forward",
                            "weight": 1.0,
                            "description": (
                                f"{component_path} is a child component of "
                                f"{parent_path} in the {resource} DFM stream."
                            ),
                        }
                    )
                    stats["containsEdgeCount"] += 1

            if str(properties.get("Caption", "")).strip():
                stats["captionCount"] += 1
            if str(properties.get("Hint", "")).strip():
                stats["hintCount"] += 1

            for event in events:
                assert isinstance(event, dict)
                event_name = str(event["name"])
                handler_name = str(event["handler"]).strip()
                if not handler_name:
                    handler_name = f"unresolved-{event_name}-handler"
                code_address = event.get("codeAddress")
                binding = {
                    "formResource": resource,
                    "formClass": form_class,
                    "componentPath": component_path,
                    "sourceComponentPath": str(
                        component.get("sourcePath", component_path)
                    ),
                    "controlClass": class_name,
                    "eventName": event_name,
                    "handlerName": handler_name,
                    "caption": str(properties.get("Caption", "")),
                    "hint": str(properties.get("Hint", "")),
                }
                target_id: str
                address: int | None = None
                if isinstance(code_address, str):
                    try:
                        address = int(code_address, 16)
                    except ValueError:
                        address = None

                if address is not None and address in record_by_address:
                    target_id = record_by_address[address].node_id
                    handler_bindings[address].append(binding)
                    stats["resolvedEventBindingCount"] += 1
                else:
                    target_id = handler_concept_node_id(form_class, handler_name)
                    concept = unresolved_handlers.setdefault(
                        target_id,
                        {
                            "id": target_id,
                            "name": handler_name,
                            "type": "concept",
                            "filePath": relative_evidence_path,
                            "summary": (
                                f"Unresolved Delphi event handler {form_class}."
                                f"{handler_name}."
                            ),
                            "tags": ["delphi-dfm", "unresolved-event-handler"],
                            "complexity": "simple",
                            "formClass": form_class,
                            "handlerName": handler_name,
                            "uiEventBindings": [],
                        },
                    )
                    concept_bindings = concept["uiEventBindings"]
                    assert isinstance(concept_bindings, list)
                    concept_bindings.append(binding)
                    stats["unresolvedEventBindingCount"] += 1

                ui_edges.append(
                    {
                        "source": node_id,
                        "target": target_id,
                        "type": "triggers",
                        "direction": "forward",
                        "weight": 0.6,
                        "eventName": event_name,
                        "handlerName": handler_name,
                        "description": (
                            f"{component_path}.{event_name} invokes "
                            f"{handler_name}."
                        ),
                        "evidence": "Delphi DFM event property and recovered RTTI.",
                    }
                )
                stats["eventEdgeCount"] += 1

    for address, bindings in handler_bindings.items():
        annotation = node_annotations.setdefault(address, {})
        annotation["uiEventBindings"] = bindings
        examples = ", ".join(
            f'{binding["componentPath"]}.{binding["eventName"]}'
            for binding in bindings[:3]
        )
        annotation["uiHandlerSummary"] = (
            f"Handles {len(bindings)} Delphi UI event"
            f'{"s" if len(bindings) != 1 else ""}: {examples}.'
        )
        handler_tags = ["ui-event-handler"]
        if any(binding["eventName"] == "OnClick" for binding in bindings):
            handler_tags.append("click-handler")
        if any(
            binding["eventName"].startswith("OnMouse")
            or binding["eventName"] == "OnDblClick"
            for binding in bindings
        ):
            handler_tags.append("mouse-handler")
        if any(
            binding["componentPath"].split(".")[-1]
            == binding["formResource"]
            and binding["eventName"]
            in {"OnActivate", "OnClose", "OnCreate", "OnDestroy", "OnHide", "OnShow"}
            for binding in bindings
        ):
            handler_tags.append("form-lifecycle-handler")
        append_unique_tags(annotation, handler_tags)

    for concept in unresolved_handlers.values():
        bindings = concept["uiEventBindings"]
        assert isinstance(bindings, list)
        concept["summary"] = (
            f'Unresolved Delphi event handler {concept["formClass"]}.'
            f'{concept["handlerName"]}, referenced by {len(bindings)} UI event'
            f'{"s" if len(bindings) != 1 else ""}.'
        )
        ui_nodes.append(concept)

    for required_count in (
        "captionCount",
        "containsEdgeCount",
        "controlNodeCount",
        "eventEdgeCount",
        "formNodeCount",
        "hintCount",
        "resolvedEventBindingCount",
        "unresolvedEventBindingCount",
    ):
        stats[required_count] += 0
    stats["unresolvedHandlerNodeCount"] = len(unresolved_handlers)
    stats["eventBindingCount"] = stats["eventEdgeCount"]
    stats["formCount"] = stats["formNodeCount"]
    stats["componentCount"] = stats["formNodeCount"] + stats["controlNodeCount"]
    return ui_nodes, ui_edges, dict(stats)


def function_layer_id(annotation: dict[str, object]) -> str:
    tags_value = annotation.get("tags", [])
    tags = set(tags_value) if isinstance(tags_value, list) else set()
    if (
        annotation.get("framework") == "Delphi VCL"
        or "delphi-rtl" in tags
        or "delphi-vcl" in tags
    ):
        return "layer:delphi-vcl"

    ui_role = str(annotation.get("uiRole", ""))
    if (
        "application-ui" in tags
        or "ui-event-handler" in tags
        or ui_role.startswith("application-")
        or ui_role.startswith("ui-")
    ):
        return "layer:ui"
    return "layer:tina.exe"


def build_layers(
    records: list[FunctionRecord],
    ui_nodes: list[dict[str, object]],
    node_annotations: dict[int, dict[str, object]],
) -> tuple[list[dict[str, object]], dict[str, int]]:
    node_ids_by_layer: dict[str, list[str]] = {
        "layer:ui": [],
        "layer:delphi-vcl": [],
        "layer:tina.exe": [],
    }

    for record in records:
        annotation = node_annotations.get(record.address, {})
        layer_id = function_layer_id(annotation)
        node_ids_by_layer[layer_id].append(record.node_id)
        if layer_id == "layer:ui":
            annotation = node_annotations.setdefault(record.address, {})
            annotation["architectureLayer"] = "UI"
            append_unique_tags(annotation, ["application-ui", "ui-layer"])
        elif layer_id == "layer:delphi-vcl":
            annotation = node_annotations.setdefault(record.address, {})
            annotation["architectureLayer"] = "Delphi VCL"
            append_unique_tags(annotation, ["delphi-vcl-layer"])

    node_ids_by_layer["layer:tina.exe"].extend(
        str(node["id"]) for node in ui_nodes
    )
    layers = [
        {
            "id": "layer:ui",
            "name": "UI",
            "description": (
                "Application functions with direct Delphi DFM event, dialog "
                "construction, or control caption and hint evidence."
            ),
            "nodeIds": node_ids_by_layer["layer:ui"],
        },
        {
            "id": "layer:delphi-vcl",
            "name": "Delphi VCL",
            "description": (
                "Recovered Delphi RTL and VCL infrastructure functions, "
                "including native-control creation parameter paths."
            ),
            "nodeIds": node_ids_by_layer["layer:delphi-vcl"],
        },
        {
            "id": "layer:tina.exe",
            "name": "tina.exe",
            "description": (
                "Other recovered functions and Delphi form resources from the "
                "TINA 16 Demo tina.exe binary."
            ),
            "nodeIds": node_ids_by_layer["layer:tina.exe"],
        },
    ]
    layer_counts = {
        str(layer["id"]): len(layer["nodeIds"])
        for layer in layers
    }
    return layers, layer_counts


def write_graph(
    output_path: Path,
    records: list[FunctionRecord],
    edges: set[tuple[int, int]],
    edge_annotations: dict[tuple[int, int], dict[str, object]],
    node_annotations: dict[int, dict[str, object]],
    extraction_stats: dict[str, int],
    outgoing_counts: dict[int, int],
    complexity_by_address: dict[int, str],
    complexity_analysis: dict[str, object],
    ui_nodes: list[dict[str, object]],
    ui_edges: list[dict[str, object]],
    ui_analysis: dict[str, int],
    layers: list[dict[str, object]],
    git_commit: str,
) -> None:
    output_path.parent.mkdir(parents=True, exist_ok=True)
    temporary_path = output_path.with_suffix(output_path.suffix + ".tmp")
    record_by_address = {record.address: record for record in records}
    analyzed_at = dt.datetime.now(dt.timezone.utc).isoformat().replace("+00:00", "Z")
    analysis = dict(complexity_analysis)
    analysis["uiEvidence"] = ui_analysis

    try:
        with temporary_path.open("w", encoding="utf-8", newline="\n") as stream:
            project = {
                "name": "TINA 16 Demo decompiled functions",
                "languages": ["Delphi DFM", "Ghidra C"],
                "frameworks": ["Delphi RTL", "Delphi VCL", "Windows API"],
                "description": (
                    "Recovered function and Delphi DFM UI graph for a Delphi VCL "
                    "application. It includes event handlers, direct Windows API "
                    "and external DLL calls, and native-control creation paths."
                ),
                "analyzedAt": analyzed_at,
                "gitCommitHash": git_commit,
            }
            stream.write('{"version":"1.0.0","project":')
            json.dump(project, stream, ensure_ascii=False, separators=(",", ":"))
            stream.write(',"analysis":')
            json.dump(
                analysis,
                stream,
                ensure_ascii=False,
                separators=(",", ":"),
            )
            stream.write(',"nodes":[')

            for index, record in enumerate(records):
                if index > 0:
                    stream.write(",")
                node = {
                    "id": record.node_id,
                    "name": record.symbol,
                    "type": "function",
                    "filePath": record.relative_path,
                    "address": record.address_text,
                    "summary": record.symbol,
                    "tags": [],
                    "complexity": complexity_by_address[record.address],
                    "outgoingCallCount": outgoing_counts[record.address],
                }
                node.update(external_function_metadata(record))
                node.update(node_annotations.get(record.address, {}))
                if "behavior" in node:
                    node["summary"] = node["behavior"]
                if "uiHandlerSummary" in node:
                    if "behavior" in node:
                        node["summary"] += " " + str(node["uiHandlerSummary"])
                    else:
                        node["summary"] = node["uiHandlerSummary"]
                tags = node.setdefault("tags", [])
                assert isinstance(tags, list)
                if node.get("apiFamily") == "Windows API":
                    append_unique_tags(node, ["external", "windows-api"])
                elif node.get("apiFamily") == "External DLL":
                    append_unique_tags(node, ["external", "external-dll"])
                elif node.get("framework") == "Delphi VCL":
                    append_unique_tags(node, ["delphi-vcl", "native-control"])
                json.dump(node, stream, ensure_ascii=False, separators=(",", ":"))

            for node in ui_nodes:
                stream.write(",")
                json.dump(node, stream, ensure_ascii=False, separators=(",", ":"))

            stream.write('],"edges":[')
            first_edge = True
            for source, target in sorted(edges):
                if not first_edge:
                    stream.write(",")
                first_edge = False
                source_record = record_by_address[source]
                target_record = record_by_address[target]
                edge = {
                    "source": source_record.node_id,
                    "target": target_record.node_id,
                    "type": "calls",
                    "direction": "forward",
                    "weight": 0.8,
                }
                annotation = edge_annotations.get((source, target), {})
                edge.update(annotation)
                if annotation:
                    edge["description"] = (
                        f'{annotation["behavior"]} Evidence: {annotation["evidence"]}'
                    )
                json.dump(edge, stream, ensure_ascii=False, separators=(",", ":"))

            for edge in ui_edges:
                if not first_edge:
                    stream.write(",")
                first_edge = False
                json.dump(edge, stream, ensure_ascii=False, separators=(",", ":"))

            stream.write('],"layers":')
            json.dump(layers, stream, ensure_ascii=False, separators=(",", ":"))
            stream.write(',"tour":[]}\n')

        replace_output_file(temporary_path, output_path)
    finally:
        if temporary_path.exists():
            temporary_path.unlink()


def validate_graph_inputs(
    records: list[FunctionRecord],
    edges: set[tuple[int, int]],
    ui_nodes: list[dict[str, object]],
    ui_edges: list[dict[str, object]],
    layers: list[dict[str, object]],
    index_path: Path,
) -> None:
    node_ids = [record.node_id for record in records]
    node_ids.extend(str(node["id"]) for node in ui_nodes)
    if len(node_ids) != len(set(node_ids)):
        raise ValueError("The graph contains duplicate node IDs.")

    addresses = {record.address for record in records}
    dangling_edges = [
        (source, target)
        for source, target in edges
        if source not in addresses or target not in addresses
    ]
    if dangling_edges:
        raise ValueError(f"The graph contains {len(dangling_edges)} dangling edges.")

    node_id_set = set(node_ids)
    dangling_ui_edges = [
        edge
        for edge in ui_edges
        if edge["source"] not in node_id_set or edge["target"] not in node_id_set
    ]
    if dangling_ui_edges:
        raise ValueError(
            f"The graph contains {len(dangling_ui_edges)} dangling UI edges."
        )

    assigned_node_ids: list[str] = []
    for layer in layers:
        layer_node_ids = layer.get("nodeIds", [])
        if not isinstance(layer_node_ids, list):
            raise ValueError(
                f'Layer {layer.get("id", "<unknown>")} has invalid node IDs.'
            )
        assigned_node_ids.extend(str(node_id) for node_id in layer_node_ids)
    duplicate_layer_assignments = len(assigned_node_ids) - len(set(assigned_node_ids))
    if duplicate_layer_assignments:
        raise ValueError(
            f"The graph contains {duplicate_layer_assignments} duplicate layer assignments."
        )
    dangling_layer_node_ids = set(assigned_node_ids) - node_id_set
    if dangling_layer_node_ids:
        raise ValueError(
            f"The graph contains {len(dangling_layer_node_ids)} dangling layer nodes."
        )
    unassigned_node_ids = node_id_set - set(assigned_node_ids)
    if unassigned_node_ids:
        raise ValueError(
            f"The graph contains {len(unassigned_node_ids)} unassigned nodes."
        )

    missing_sources = [
        record.relative_path
        for record in records
        if not (index_path.parent / record.file_name).is_file()
    ]
    if missing_sources:
        raise ValueError(f"The graph contains {len(missing_sources)} missing source paths.")


def main() -> int:
    arguments = parse_arguments()
    project_root = arguments.project_root.resolve()
    index_path = resolve_path(project_root, arguments.index)
    output_path = resolve_path(project_root, arguments.output)
    ui_evidence_path = resolve_path(project_root, arguments.ui_evidence)

    if not project_root.is_dir():
        raise ValueError(f"Project root does not exist: {project_root}")
    if not index_path.is_file():
        raise ValueError(f"Function index does not exist: {index_path}")
    if not ui_evidence_path.is_file():
        raise ValueError(f"UI evidence does not exist: {ui_evidence_path}")
    if arguments.limit is not None and arguments.limit < 1:
        raise ValueError("--limit must be greater than zero.")

    records, failed_count = load_function_records(
        project_root, index_path, arguments.limit
    )
    print(
        f"Loaded {len(records):,} source-backed functions "
        f"({failed_count:,} failed index rows excluded).",
        flush=True,
    )
    edges, edge_annotations, node_annotations, extraction_stats = extract_edges(
        records, index_path, arguments.progress_interval
    )
    ui_evidence = load_ui_evidence(ui_evidence_path)
    ui_nodes, ui_edges, ui_analysis = build_ui_graph(
        ui_evidence,
        records,
        node_annotations,
        ui_evidence_path,
        project_root,
    )
    outgoing_counts, complexity_by_address, complexity_analysis = classify_complexity(
        records, edges
    )
    layers, layer_counts = build_layers(records, ui_nodes, node_annotations)
    validate_graph_inputs(
        records,
        edges,
        ui_nodes,
        ui_edges,
        layers,
        index_path,
    )
    write_graph(
        output_path,
        records,
        edges,
        edge_annotations,
        node_annotations,
        extraction_stats,
        outgoing_counts,
        complexity_by_address,
        complexity_analysis,
        ui_nodes,
        ui_edges,
        ui_analysis,
        layers,
        arguments.git_commit,
    )

    result = {
        "output": output_path.relative_to(project_root).as_posix(),
        "functionNodes": len(records),
        "uiAndHandlerNodes": len(ui_nodes),
        "nodes": len(records) + len(ui_nodes),
        "functionCallEdges": len(edges),
        "uiEdges": len(ui_edges),
        "edges": len(edges) + len(ui_edges),
        "failedIndexRowsExcluded": failed_count,
        **extraction_stats,
        "uiEvidence": ui_analysis,
        "layers": layer_counts,
        "complexity": complexity_analysis,
        "bytes": output_path.stat().st_size,
    }
    print(json.dumps(result, indent=2), flush=True)
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except Exception as error:
        print(f"Error: {error}", file=sys.stderr)
        sys.exit(1)
