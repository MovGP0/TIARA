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

ONCLICK_CALL_TREE_FUNCTIONS = {
    0x00B971A0: {
        "recoveredRole": "Boolean variable display-name substitution",
        "apiCategory": "Boolean expression formatting",
        "behavior": (
            "Copies a Boolean expression while replacing variable letters A "
            "through H with their configured display names. Other characters "
            "are preserved."
        ),
        "evidence": (
            "The function tests each UTF-16 character for A through H and "
            "appends the corresponding DAT_02019a38 table entry. The prime-"
            "implicant and Karnaugh renderers call it before publishing their "
            "simplified expressions."
        ),
        "tags": ["boolean-expression", "variable-name", "display-formatting"],
    },
    0x004B89E0: {
        "recoveredRole": "Delphi complete stream-write helper",
        "likelyDelphiName": "TStream.WriteBuffer",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi stream I/O",
        "behavior": (
            "Repeats the stream write operation until all requested bytes are "
            "written and raises a write exception on failure or no progress."
        ),
        "evidence": (
            "The helper advances the buffer and remaining count after each "
            "write. It raises the recovered stream-write error when the write "
            "does not complete. Flowchart serialization uses it for headers."
        ),
        "tags": ["delphi-vcl", "stream", "write-buffer", "exception"],
    },
    0x004B9860: {
        "recoveredRole": "Delphi file-stream constructor wrapper",
        "likelyDelphiName": "TFileStream.Create",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi stream I/O",
        "behavior": "Constructs a file-backed stream for the supplied file name and mode.",
        "evidence": (
            "The constructor wrapper forwards to FUN_004b9910. Flowchart Open "
            "and Save use it with read and create modes."
        ),
        "tags": ["delphi-vcl", "file-stream", "constructor"],
    },
    0x004B9910: {
        "recoveredRole": "Delphi file-stream open or create constructor",
        "likelyDelphiName": "TFileStream.Create",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi stream I/O",
        "behavior": (
            "Opens or creates a file for the Delphi stream mode, attaches the "
            "handle, stores the file name, and raises an exception on failure."
        ),
        "evidence": (
            "The function selects the native file operation from the supplied "
            "mode, checks the returned handle, initializes the stream, and "
            "retains the Unicode file name."
        ),
        "tags": ["delphi-vcl", "file-stream", "file-open", "file-create", "constructor"],
    },
    0x0064DE00: {
        "recoveredRole": "VCL control text setter with change suppression",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi VCL control text",
        "behavior": (
            "Reads the current control text and sends the text-change path only "
            "when the requested Unicode string is different."
        ),
        "evidence": (
            "It calls the recovered text reader, compares both Unicode strings, "
            "and then uses the path that sends WM_SETTEXT and the VCL text-"
            "change notification. The Flowchart title updater calls it."
        ),
        "tags": ["delphi-vcl", "control-text", "unicode-string", "windows-message"],
    },
    0x00F835C0: {
        "recoveredRole": "Event-pumping timed wait",
        "apiCategory": "UI scheduling",
        "behavior": (
            "Schedules a completion callback for the supplied interval and "
            "processes application messages until the callback reports that "
            "the wait is complete."
        ),
        "evidence": (
            "The function installs FUN_00f82df0 through FUN_00f833f0, calls "
            "the application message processor while its completion byte is "
            "clear, and frees the wait object. Callers use delay values, and "
            "the Step Analysis loops pass their playback-delay field."
        ),
        "tags": ["application-ui", "timed-wait", "message-pump", "timer-callback"],
    },
    0x00F85F10: {
        "recoveredRole": "Add Watch selected-item transfer handler",
        "likelyDelphiName": "TAddWatch.sbAddClick",
        "uiRole": "ui-list-item-add",
        "apiCategory": "Application UI",
        "behavior": (
            "Reads the selected All Items entry. If Current Items does not "
            "contain the same text, it adds the entry to the private current-"
            "items collection and the visible Current Items list."
        ),
        "evidence": (
            "AddWatch.sbAdd has the hint Add and a two-frame glyph. The handler "
            "rejects a negative selection, reads the selected source string, "
            "uses the target list IndexOf result to reject duplicates, and "
            "adds the string to both target collections."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "watch-list",
            "list-item-transfer",
            "duplicate-prevention",
        ],
    },
    0x010EB6C0: {
        "recoveredRole": "Display right-scroll adapter",
        "apiCategory": "Application UI",
        "behavior": (
            "Gets the nested diagram controller and invokes the shared "
            "horizontal right-scroll operation."
        ),
        "evidence": (
            "Its only operation reads the object at offset 0x50 and passes it "
            "to FUN_01ae2e30. The caller chain begins at right-scroll buttons."
        ),
        "tags": ["application-ui", "display", "scroll-right", "forwarding-wrapper"],
    },
    0x010EB6E0: {
        "recoveredRole": "Display left-scroll adapter",
        "apiCategory": "Application UI",
        "behavior": (
            "Gets the nested diagram controller and invokes the shared "
            "horizontal left-scroll operation."
        ),
        "evidence": (
            "Its only operation reads the object at offset 0x50 and passes it "
            "to FUN_01ae2ab0. The caller chain begins at left-scroll buttons."
        ),
        "tags": ["application-ui", "display", "scroll-left", "forwarding-wrapper"],
    },
    0x015000F0: {
        "recoveredRole": "Step Analysis playback speed-up handler",
        "likelyDelphiName": "TDStepAnalControlPanel.sbSpeedUpClick",
        "uiRole": "ui-analysis-playback-speed-control",
        "apiCategory": "Application UI",
        "behavior": (
            "Speeds automatic Step Analysis playback by halving the 16-bit "
            "inter-step delay when it is greater than one."
        ),
        "evidence": (
            "The button hint is Speed Up and its glyph is a plus sign. The "
            "handler halves field 0x782. Setup initializes it to 0x400, and "
            "both Step Analysis loops pass it to the timed-wait helper."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "step-analysis",
            "playback-speed",
            "delay-control",
        ],
    },
    0x01500110: {
        "recoveredRole": "Step Analysis playback slow-down handler",
        "likelyDelphiName": "TDStepAnalControlPanel.sbSlowDownClick",
        "uiRole": "ui-analysis-playback-speed-control",
        "apiCategory": "Application UI",
        "behavior": (
            "Slows automatic Step Analysis playback by doubling the 16-bit "
            "inter-step delay when it is below 65,534."
        ),
        "evidence": (
            "The button hint is Slow Down and its glyph is a minus sign. The "
            "handler doubles field 0x782. Setup initializes it to 0x400, and "
            "both Step Analysis loops pass it to the timed-wait helper."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "step-analysis",
            "playback-speed",
            "delay-control",
        ],
    },
    0x01506F70: {
        "recoveredRole": "Shared display right-scroll bridge",
        "apiCategory": "Application UI",
        "behavior": (
            "Forwards a right-scroll request from the Logic Analyzer or "
            "Digital Signal Generator to its nested display adapter."
        ),
        "evidence": (
            "Its only callers are the two resolved RightScrollBtnClick "
            "handlers. It reads the nested object at offset 0x9b0 and passes "
            "it to FUN_010eb6c0."
        ),
        "tags": ["application-ui", "display", "scroll-right", "forwarding-wrapper"],
    },
    0x01506F90: {
        "recoveredRole": "Shared display left-scroll bridge",
        "apiCategory": "Application UI",
        "behavior": (
            "Forwards a left-scroll request from the Logic Analyzer or "
            "Digital Signal Generator to its nested display adapter."
        ),
        "evidence": (
            "Its callers are resolved LeftScrollBtnClick handlers. It reads "
            "the nested object at offset 0x9b0 and passes it to FUN_010eb6e0."
        ),
        "tags": ["application-ui", "display", "scroll-left", "forwarding-wrapper"],
    },
    0x015202C0: {
        "recoveredRole": "Logic Analyzer right-scroll button handler",
        "likelyDelphiName": "TLogicAnalyzerWin.RightScrollBtnClick",
        "uiRole": "ui-display-scroll",
        "apiCategory": "Application UI",
        "behavior": (
            "Starts the shared Logic Analyzer display right-scroll path when "
            "the required form object is present."
        ),
        "evidence": (
            "FRightScrollBtn has the hint Scroll right and a 9 by 9 right-"
            "arrow glyph. The handler checks form offset 0x880 before it calls "
            "FUN_01506f70."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "logic-analyzer", "scroll-right"],
    },
    0x015202E0: {
        "recoveredRole": "Logic Analyzer left-scroll button handler",
        "likelyDelphiName": "TLogicAnalyzerWin.LeftScrollBtnClick",
        "uiRole": "ui-display-scroll",
        "apiCategory": "Application UI",
        "behavior": (
            "Starts the shared Logic Analyzer display left-scroll path when "
            "the required form object is present."
        ),
        "evidence": (
            "FLeftScrollBtn has the hint Scroll left and a 9 by 9 left-arrow "
            "glyph. The handler checks form offset 0x880 before it calls "
            "FUN_01506f90."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "logic-analyzer", "scroll-left"],
    },
    0x01AE2AB0: {
        "recoveredRole": "Shared diagram and display left-scroll operation",
        "apiCategory": "Application UI",
        "behavior": (
            "Applies a left-scroll update, queues affected diagram elements "
            "for refresh, and configures a 500 ms deferred refresh callback."
        ),
        "evidence": (
            "Logic Analyzer, Digital Signal Generator, and diagram left-scroll "
            "buttons reach this function through parallel call paths. It "
            "installs FUN_01ae5d60 as the deferred callback."
        ),
        "tags": ["application-ui", "diagram", "display", "scroll-left", "deferred-refresh"],
    },
    0x01AE2E30: {
        "recoveredRole": "Shared diagram and display right-scroll operation",
        "apiCategory": "Application UI",
        "behavior": (
            "Applies a right-scroll update, queues affected diagram elements "
            "for refresh, and configures a 500 ms deferred refresh callback."
        ),
        "evidence": (
            "Logic Analyzer, Digital Signal Generator, and diagram right-"
            "scroll buttons reach this function through parallel call paths. "
            "It installs FUN_01ae5d60 as the deferred callback."
        ),
        "tags": ["application-ui", "diagram", "display", "scroll-right", "deferred-refresh"],
    },
    0x01AE5650: {
        "recoveredRole": "Deferred diagram-element refresh processor",
        "apiCategory": "Application UI",
        "behavior": (
            "Processes diagram elements queued after scrolling, performs type-"
            "specific recalculation or drawing, invalidates the owner when "
            "needed, and clears the queue."
        ),
        "evidence": (
            "The function iterates the collection at offset 0xe8, dispatches "
            "by recovered object type, uses geometry and drawing paths, and "
            "clears the collection at the end."
        ),
        "tags": ["application-ui", "diagram", "display", "deferred-refresh"],
    },
    0x01AE5D60: {
        "recoveredRole": "Deferred post-scroll callback",
        "apiCategory": "Application UI",
        "behavior": (
            "Disables the scroll-delay timer and starts processing the queued "
            "diagram or display refresh work."
        ),
        "evidence": (
            "Both horizontal scroll functions install it as their 500 ms "
            "callback. It disables the same object and calls FUN_01ae5650."
        ),
        "tags": ["application-ui", "timer-callback", "scroll", "deferred-refresh"],
    },
    0x01C1F390: {
        "recoveredRole": "Browser content-transfer coordinator",
        "apiCategory": "Application UI",
        "behavior": (
            "Creates and runs a browser content-transfer operation, registers "
            "its progress and cancellation callback, and permits the transfer "
            "before it starts."
        ),
        "evidence": (
            "The function creates a transfer object, stores FUN_01c20ac0 in "
            "its callback slot, sets the transfer-permitted byte, and invokes "
            "the object. Browser content-opening paths call it."
        ),
        "tags": ["application-ui", "browser", "content-transfer", "progress-callback"],
    },
    0x01C20200: {
        "recoveredRole": "Browser pending-cancellation button handler",
        "likelyDelphiName": "TBrowserFrm.StopBtnClick",
        "uiRole": "ui-browser-cancel",
        "apiCategory": "Application UI",
        "behavior": (
            "Sets a pending cancellation flag. Browser navigation and content-"
            "transfer callbacks consume and clear it, so this handler does not "
            "stop the browser synchronously."
        ),
        "evidence": (
            "StopBtn has the hint Stop and a red-circle, white-X glyph. The "
            "handler only sets form byte 0x719. FUN_01c20280 and FUN_01c20ac0 "
            "test that byte, set their cancellation outputs, and clear it."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "browser", "cancel-request"],
    },
    0x01C20280: {
        "recoveredRole": "Browser before-navigation handler",
        "likelyDelphiName": "TBrowserFrm.MainBrowserBeforeNavigate2",
        "uiRole": "ui-browser-navigation",
        "apiCategory": "Application UI",
        "behavior": (
            "Shows a Downloading status, performs application content handling, "
            "and cancels navigation when the application handled the target or "
            "a pending Stop request exists."
        ),
        "evidence": (
            "MainBrowser.OnBeforeNavigate2 resolves here. The function builds "
            "Downloading text, writes the WordBool cancellation output, and "
            "consumes the same form byte that StopBtnClick sets."
        ),
        "tags": ["application-ui", "ui-event-handler", "browser", "navigation", "cancel-request"],
    },
    0x01C20AC0: {
        "recoveredRole": "Browser content-transfer progress and cancellation callback",
        "uiRole": "ui-browser-transfer-progress",
        "apiCategory": "Application UI",
        "behavior": (
            "Updates the browser form progress bar and status text. It cancels "
            "the transfer when it is no longer permitted or the Stop button "
            "requested cancellation."
        ),
        "evidence": (
            "FUN_01c1f390 registers this callback. It updates the progress "
            "maximum and position, writes status text, and consumes the same "
            "pending-cancellation byte set by StopBtnClick."
        ),
        "tags": ["application-ui", "browser", "content-transfer", "progress", "cancel-request"],
    },
    0x01C77390: {
        "recoveredRole": "Schematic Editor no-op Save command handler",
        "likelyDelphiName": "TSchematicEditor.SaveClick",
        "uiRole": "ui-save-command",
        "apiCategory": "Application UI",
        "behavior": (
            "Handles File > Save and the toolbar Save button. In this TINA 16 "
            "Demo build, it returns immediately and performs no save work."
        ),
        "evidence": (
            "The menu has caption Save and Ctrl+S. The toolbar has a Save hint "
            "and a two-frame floppy-disk glyph. The function is one RET "
            "instruction and has no outgoing calls."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "save-command", "no-op-handler"],
    },
    0x00F62990: {
        "recoveredRole": "Flowchart model modified-state setter",
        "apiCategory": "Flowchart model",
        "behavior": "Sets the flowchart model's modified-state byte.",
        "evidence": (
            "The function writes byte 0x18. Edit paths set it to true, while "
            "save and reset paths set it to false."
        ),
        "tags": ["flowchart", "model", "modified-state", "property-setter"],
    },
    0x00F629A0: {
        "recoveredRole": "Flowchart model modified-state getter",
        "apiCategory": "Flowchart model",
        "behavior": "Returns the flowchart model's modified-state byte.",
        "evidence": (
            "The function reads byte 0x18. The new-document and close guards "
            "test it before they show the unsaved-change prompt."
        ),
        "tags": ["flowchart", "model", "modified-state", "property-getter"],
    },
    0x00F629D0: {
        "recoveredRole": "Flowchart document-model reset",
        "apiCategory": "Flowchart model",
        "behavior": (
            "Destroys and clears the owned flowchart items, clears modified "
            "state, resets the next item ID, and resets a secondary state byte."
        ),
        "evidence": (
            "New Flowchart and file loading call it before creating or loading "
            "content. It clears the item list, sets modified state to false, "
            "and writes zero to the next-ID field."
        ),
        "tags": ["flowchart", "model", "document-reset", "collection-clear"],
    },
    0x00F63B50: {
        "recoveredRole": "Flowchart editor layout and redraw rebuild",
        "uiRole": "ui-flowchart-redraw",
        "apiCategory": "Application UI",
        "behavior": (
            "Resets view scale to 1.0, applies drawing dimensions, refreshes "
            "each flowchart item's geometry or state, and completes the layout "
            "and redraw pass."
        ),
        "evidence": (
            "FUN_010508e0 calls it after new, open, and model changes. The "
            "function stores 1.0, iterates the item list, and completes through "
            "the recovered layout and rendering path."
        ),
        "tags": ["application-ui", "flowchart", "layout", "redraw", "canvas"],
    },
    0x00F6F3C0: {
        "recoveredRole": "Flowchart object pin-resolution check",
        "apiCategory": "Flowchart validation",
        "behavior": (
            "Returns false when any pin entry for a flowchart object has a "
            "negative connection index."
        ),
        "evidence": (
            "The connection validator calls it for every object. It scans the "
            "pin array at offset 0x98 for the pin count at offset 0xe8."
        ),
        "tags": ["flowchart", "validation", "pin", "connection"],
    },
    0x00F753D0: {
        "recoveredRole": "Flowchart process-entry finder",
        "apiCategory": "Flowchart validation",
        "behavior": (
            "Finds a type-8 process marker whose normal or interrupt selector "
            "matches the requested value."
        ),
        "evidence": (
            "The function scans flowchart objects for type 8 and compares its "
            "selector. The validator requests selector 0, while interrupt code "
            "requests selector 1 and reports No Interrupt process on failure."
        ),
        "tags": ["flowchart", "process-entry", "validation", "object-search"],
    },
    0x00F76080: {
        "recoveredRole": "FlowChart Check close-button handler",
        "uiRole": "ui-validation-dialog-close",
        "apiCategory": "Application UI",
        "behavior": "Clears the validation result list and hides the FlowChart Check form.",
        "evidence": (
            "The DFM binds the Close button to this function. It clears the "
            "list and calls the VCL visibility setter with false."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "validation-dialog"],
    },
    0x00F760D0: {
        "recoveredRole": "FlowChart Check message-list population",
        "uiRole": "ui-validation-results",
        "apiCategory": "Application UI",
        "behavior": (
            "Converts validation records to category-and-message strings and "
            "adds them to the FlowChart Check list box."
        ),
        "evidence": (
            "The function iterates the bound validation records, resolves "
            "category and message text, concatenates them, and invokes the "
            "list-box item-add operation."
        ),
        "tags": ["application-ui", "flowchart", "validation-dialog", "message-list"],
    },
    0x00F76290: {
        "recoveredRole": "Flowchart validation-message selection handler",
        "uiRole": "ui-validation-result-selection",
        "apiCategory": "Application UI",
        "behavior": (
            "For connection issue records, clears old highlights, finds the "
            "referenced flowchart object, sets its highlight flag, and redraws "
            "the flowchart."
        ),
        "evidence": (
            "formFlowChartCheck.lbMessages.OnClick resolves here. DFM text "
            "instructs the user to click an issue to highlight its connection "
            "or component, and the function implements that record-to-object path."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "validation", "highlight"],
    },
    0x00F766D0: {
        "recoveredRole": "Object-linked flowchart validation-message appender",
        "apiCategory": "Flowchart validation",
        "behavior": (
            "Creates a validation record with a message code and affected "
            "object index, then appends it to the validation-result list."
        ),
        "evidence": (
            "It constructs a record, stores the supplied object index, and "
            "adds the record to the validator list."
        ),
        "tags": ["flowchart", "validation", "message", "object-index"],
    },
    0x00F76700: {
        "recoveredRole": "Flowchart connection validator",
        "apiCategory": "Flowchart validation",
        "behavior": (
            "Builds the connection graph, checks every object for unresolved "
            "pin references, records an issue for affected objects, and returns "
            "false if it finds a problem."
        ),
        "evidence": (
            "The function calls FUN_00f773c0, tests each object through "
            "FUN_00f6f3c0, and passes failed objects to FUN_00f766d0."
        ),
        "tags": ["flowchart", "validation", "connection", "pin"],
    },
    0x00F773C0: {
        "recoveredRole": "Flowchart connectivity graph builder",
        "apiCategory": "Flowchart validation",
        "behavior": (
            "Clears per-object connection state and builds the object and pin "
            "connectivity graph in two passes."
        ),
        "evidence": (
            "Recovered literals include Building graph, Pass1, After Pass1, "
            "and Pass2. Validation and page-change paths call it before using "
            "connection data."
        ),
        "tags": ["flowchart", "connectivity-graph", "validation", "two-pass"],
    },
    0x00F77D30: {
        "recoveredRole": "Top-level flowchart validity check",
        "apiCategory": "Flowchart validation",
        "behavior": (
            "Checks for the normal process entry, validates flowchart "
            "connections, records a result message, and returns the combined "
            "validity result."
        ),
        "evidence": (
            "It searches through FUN_00f753d0 with selector 0, records a "
            "missing-entry result, calls FUN_00f76700, and records success only "
            "when both checks pass."
        ),
        "tags": ["flowchart", "validation", "process-entry", "connection"],
    },
    0x0104F100: {
        "recoveredRole": "New Flowchart toolbar forwarding handler",
        "likelyDelphiName": "TFlowChartMainForm.sbNewClick",
        "uiRole": "ui-new-document-command",
        "apiCategory": "Application UI",
        "behavior": "Forwards the New Flowchart toolbar click to the shared command.",
        "evidence": (
            "The speed button has the hint New Flowchart and a two-frame new-"
            "document glyph. The function contains only a call to FUN_0104f160."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "new-document", "forwarding-wrapper"],
    },
    0x0104F110: {
        "recoveredRole": "Open Flowchart toolbar forwarding handler",
        "likelyDelphiName": "TFlowChartMainForm.sbOpenClick",
        "uiRole": "ui-open-document-command",
        "apiCategory": "Application UI",
        "behavior": "Forwards the Open Flowchart toolbar click to the shared command.",
        "evidence": (
            "The speed button has the hint Open Flowchart and a two-frame open-"
            "folder glyph. The function contains only a call to FUN_0104f1e0."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "file-open", "forwarding-wrapper"],
    },
    0x0104F120: {
        "recoveredRole": "Save Flowchart toolbar forwarding handler",
        "likelyDelphiName": "TFlowChartMainForm.sbSaveClick",
        "uiRole": "ui-save-document-command",
        "apiCategory": "Application UI",
        "behavior": "Forwards the Save Flowchart toolbar click to the shared save command.",
        "evidence": (
            "The speed button has the hint Save Flowchart and a two-frame "
            "floppy-disk glyph. The function contains only a call to FUN_0104f270."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "file-save", "forwarding-wrapper"],
    },
    0x0104F150: {
        "recoveredRole": "Flowchart check button handler",
        "likelyDelphiName": "TFlowChartMainForm.sbCheckFlowChartClick",
        "uiRole": "ui-flowchart-validation-command",
        "apiCategory": "Application UI",
        "behavior": "Starts a forced flowchart validation and result display.",
        "evidence": (
            "The button hint is Check Flowchart and its two-frame glyph shows "
            "check marks. The function contains only a call to FUN_0104f590."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "validation"],
    },
    0x0104F160: {
        "recoveredRole": "New flowchart command coordinator",
        "uiRole": "ui-new-document-command",
        "apiCategory": "Application UI",
        "behavior": (
            "After the unsaved-change guard permits it, creates a blank "
            "flowchart named noname, clears its file path and model, rebuilds "
            "the editor view, and updates the window title."
        ),
        "evidence": (
            "The main-menu New Flowchart item binds here. The function calls "
            "FUN_01053000, assigns noname, clears the saved path, resets the "
            "model, rebuilds the view, and updates the title."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "new-document"],
    },
    0x0104F1E0: {
        "recoveredRole": "Open Flowchart command handler",
        "uiRole": "ui-open-document-command",
        "apiCategory": "Application UI",
        "behavior": (
            "Shows the Flowchart file-open dialog and passes the selected path "
            "to the flowchart file loader."
        ),
        "evidence": (
            "The menu caption is Open Flowchart. Form setup configures a TFC "
            "file filter. The handler checks dialog acceptance, reads the "
            "selected path, and calls FUN_01050790."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "file-open", "tfc-file"],
    },
    0x0104F270: {
        "recoveredRole": "Current flowchart save coordinator",
        "uiRole": "ui-save-document-command",
        "apiCategory": "Application UI",
        "behavior": (
            "Runs Save As when no path exists. Otherwise, creates or replaces "
            "the assigned file, serializes the flowchart, and clears its "
            "modified state."
        ),
        "evidence": (
            "The Save Flowchart menu binds here. It tests the saved-path field, "
            "calls Save As when empty, otherwise creates a file stream, calls "
            "FUN_01050620, frees the stream, and clears modified state."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "file-save", "serialization"],
    },
    0x0104F2E0: {
        "recoveredRole": "Flowchart Save As handler",
        "uiRole": "ui-save-as-command",
        "apiCategory": "Application UI",
        "behavior": (
            "Shows the save dialog and, on acceptance, stores the selected path "
            "and display name, writes the flowchart, clears modified state, and "
            "updates the window title."
        ),
        "evidence": (
            "Save Flowchart As binds here. The function executes the save "
            "dialog, reads its file name, updates both name fields, uses the "
            "shared serializer, and calls the title updater."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "save-as", "file-dialog", "serialization"],
    },
    0x0104F590: {
        "recoveredRole": "Forced flowchart validation wrapper",
        "uiRole": "ui-flowchart-validation-command",
        "apiCategory": "Application UI",
        "behavior": "Calls the validation coordinator with forced display enabled.",
        "evidence": (
            "Its only operation is FUN_01050af0 with argument 1. Other callers "
            "use 0 when validation is only a prerequisite."
        ),
        "tags": ["application-ui", "flowchart", "validation", "forwarding-wrapper"],
    },
    0x01050620: {
        "recoveredRole": "Flowchart stream serializer",
        "apiCategory": "Flowchart persistence",
        "behavior": (
            "Writes two four-byte flowchart header values and asks the contained "
            "flowchart object to serialize its remaining state to the stream."
        ),
        "evidence": (
            "The function makes two four-byte complete-write calls, then invokes "
            "the contained object's stream-write method. FUN_01050690 performs "
            "the inverse reads and load dispatch."
        ),
        "tags": ["flowchart", "serialization", "binary-format", "stream-write"],
    },
    0x01050690: {
        "recoveredRole": "Flowchart stream deserializer",
        "apiCategory": "Flowchart persistence",
        "behavior": (
            "Reads two four-byte flowchart header values, applies the document "
            "format state, and dispatches the rest of the stream to the "
            "flowchart item loader."
        ),
        "evidence": (
            "The file loader calls it with the input stream. Its reads and "
            "virtual load call are the inverse of FUN_01050620."
        ),
        "tags": ["flowchart", "deserialization", "binary-format", "stream-read"],
    },
    0x01050790: {
        "recoveredRole": "Flowchart file-loading coordinator",
        "apiCategory": "Flowchart persistence",
        "behavior": (
            "Resets the current document, opens and deserializes the selected "
            "TFC file, stores its path and display name, updates the window "
            "title, and rebuilds the editor view."
        ),
        "evidence": (
            "The Open command is its only caller. It resets the model, creates "
            "a read-mode file stream, calls FUN_01050690, stores the selected "
            "path and derived name, then updates the caption and view."
        ),
        "tags": ["flowchart", "file-loading", "deserialization", "document-lifecycle", "tfc-file"],
    },
    0x010508E0: {
        "recoveredRole": "Flowchart editor rebuild wrapper",
        "uiRole": "ui-flowchart-redraw",
        "apiCategory": "Application UI",
        "behavior": "Rebuilds the Flowchart editor view from the current model.",
        "evidence": (
            "It forwards the editor model to FUN_00f63b50. New, Open, model "
            "changes, paint, select-all, and redraw paths call this wrapper."
        ),
        "tags": ["application-ui", "flowchart", "view-refresh", "redraw", "forwarding-wrapper"],
    },
    0x01050AF0: {
        "recoveredRole": "Flowchart validation and result-dialog coordinator",
        "uiRole": "ui-flowchart-validation",
        "apiCategory": "Application UI",
        "behavior": (
            "Clears old validation records, runs the validator, creates the "
            "FlowChart Check form when needed, fills its message list, and "
            "shows it when validation fails or display is forced."
        ),
        "evidence": (
            "The function clears the results, calls FUN_00f77d30, creates the "
            "class next to the TformFlowChartCheck handlers, binds the current "
            "flowchart, and calls FUN_00f760d0."
        ),
        "tags": ["application-ui", "flowchart", "validation", "result-dialog"],
    },
    0x01051360: {
        "recoveredRole": "Flowchart editor window-title updater",
        "uiRole": "ui-window-caption",
        "apiCategory": "Application UI",
        "behavior": (
            "Formats the localized Flowchart editor caption with the active "
            "document name and MCU family, then applies it to the form."
        ),
        "evidence": (
            "New, Open, Save As, initialization, and Set Device paths call it. "
            "It selects the current display name, maps the MCU type, formats "
            "the caption template, and uses the recovered control-text setter."
        ),
        "tags": ["application-ui", "flowchart", "window-caption", "document-name", "target-mcu"],
    },
    0x01053000: {
        "recoveredRole": "Modified-flowchart save, discard, or cancel guard",
        "uiRole": "ui-unsaved-change-guard",
        "apiCategory": "Application UI",
        "behavior": (
            "Permits replacing or closing the active flowchart when it is not "
            "modified. Otherwise, it shows a Yes, No, or Cancel prompt, runs "
            "the applicable save route for Yes, and rejects Cancel."
        ),
        "evidence": (
            "New Flowchart and FormCloseQuery call it. It reads the modified "
            "flag, loads the FC IsModified message, branches on modal results, "
            "and calls a save path for the Yes result."
        ),
        "tags": ["application-ui", "flowchart", "modified-state", "save-prompt", "close-guard"],
    },
    0x01053E80: {
        "recoveredRole": "Flowchart modified-state synchronizer",
        "apiCategory": "Flowchart model",
        "behavior": (
            "Sets the flowchart model's modified state and mirrors the same "
            "value to an optional secondary editor or view."
        ),
        "evidence": (
            "It calls FUN_00f62990 and, when the secondary object exists, "
            "passes the same value to its paired state setter. Save paths call "
            "it with false."
        ),
        "tags": ["flowchart", "modified-state", "state-synchronization"],
    },
    0x01600370: {
        "recoveredRole": "MCU family display-name mapper",
        "apiCategory": "Application UI",
        "behavior": "Maps an MCU type code to the display name used in the Flowchart title.",
        "evidence": (
            "The function branches to names including 8051, PIC18, PIC24, "
            "PIC32, HCS08, and Undefined. The Flowchart caption updater uses it."
        ),
        "tags": ["application-ui", "flowchart", "target-mcu", "display-name"],
    },
    0x01B202F0: {
        "recoveredRole": "Owned-object list destroy-and-clear helper",
        "apiCategory": "Object lifetime",
        "behavior": "Destroys every object in a list and then clears the list.",
        "evidence": (
            "The function iterates indexed items, invokes each object's "
            "destructor, and then calls the list clear method. The Flowchart "
            "model reset uses it for its owned item list."
        ),
        "tags": ["object-lifetime", "owned-list", "collection-clear"],
    },
    0x004B3CF0: {
        "recoveredRole": "Delphi string-list name getter",
        "likelyDelphiName": "TStrings.GetName",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi string lists",
        "behavior": "Returns the name before the configured name-value separator.",
        "evidence": (
            "It reads the indexed string and truncates it before the separator. "
            "The footprint filter uses the result as the visible footprint name."
        ),
        "tags": ["delphi-vcl", "string-list", "name-value"],
    },
    0x004B4B10: {
        "recoveredRole": "Delphi comma-text list parser",
        "likelyDelphiName": "TStrings.SetCommaText",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi string lists",
        "behavior": "Replaces a string list with values parsed from comma-separated text.",
        "evidence": (
            "It temporarily selects comma and double quote as the delimiter and "
            "quote, calls the delimited-text parser, and restores both settings."
        ),
        "tags": ["delphi-vcl", "string-list", "comma-text", "parser"],
    },
    0x004B50B0: {
        "recoveredRole": "Delphi delimited-text list parser",
        "likelyDelphiName": "TStrings.SetDelimitedText",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi string lists",
        "behavior": (
            "Clears a string list, parses text with the configured delimiter "
            "and quote character, and adds each parsed value."
        ),
        "evidence": (
            "The function starts an update, clears the list, handles quoted "
            "values and delimiters, adds each token, and ends the update."
        ),
        "tags": ["delphi-vcl", "string-list", "delimited-text", "parser"],
    },
    0x004B5390: {
        "recoveredRole": "Delphi string-list value getter",
        "likelyDelphiName": "TStrings.GetValueFromIndex",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi string lists",
        "behavior": "Returns the value after the configured name-value separator.",
        "evidence": (
            "It reads the indexed string and removes the prefix through the "
            "separator. The footprint filter uses it for category data."
        ),
        "tags": ["delphi-vcl", "string-list", "name-value"],
    },
    0x0064DC90: {
        "recoveredRole": "VCL control text-length query",
        "likelyDelphiName": "TControl.GetTextLen",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi VCL control text",
        "behavior": "Gets the current text length from a VCL control.",
        "evidence": "It sends WM_GETTEXTLENGTH through the VCL control message path.",
        "tags": ["delphi-vcl", "control-text", "windows-message"],
    },
    0x0064DCB0: {
        "recoveredRole": "VCL control text-buffer reader",
        "likelyDelphiName": "TControl.GetTextBuf",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi VCL control text",
        "behavior": "Copies a VCL control's text into a supplied character buffer.",
        "evidence": "It sends WM_GETTEXT with the buffer size and destination buffer.",
        "tags": ["delphi-vcl", "control-text", "windows-message"],
    },
    0x0064DD90: {
        "recoveredRole": "VCL control Unicode text reader",
        "likelyDelphiName": "TControl.GetText",
        "framework": "Delphi VCL",
        "apiCategory": "Delphi VCL control text",
        "behavior": "Reads a control's current text into a Delphi UnicodeString.",
        "evidence": (
            "It gets the text length, allocates the UnicodeString, reads the "
            "text, and shortens the string when fewer characters are returned."
        ),
        "tags": ["delphi-vcl", "control-text", "unicode-string", "windows-message"],
    },
    0x00C689F0: {
        "recoveredRole": "PlacesBar auto-caption checkbox handler",
        "likelyDelphiName": "TApAddPlaceFrm.chkAutoCapClick",
        "uiRole": "ui-caption-mode-toggle",
        "apiCategory": "Application UI",
        "behavior": (
            "Reads the Auto caption checkbox. It disables the manual caption "
            "edit when checked and enables it when cleared."
        ),
        "evidence": (
            "ApAddPlaceFrm.chkAutoCap.OnClick resolves here. The handler reads "
            "form field 0x750 and changes the enabled state of edit field 0x6d0."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "places-bar", "auto-caption", "checkbox"],
    },
    0x00C6FA30: {
        "recoveredRole": "PlacesBar displayed-caption resolver",
        "apiCategory": "Application UI",
        "behavior": (
            "Returns the stored manual caption when automatic captions are off. "
            "Otherwise, it derives a caption from the path or known Shell target."
        ),
        "evidence": (
            "It branches on item flag 0x50, reads manual caption field 0x38, "
            "and resolves captions for known Shell targets when the flag is set."
        ),
        "tags": ["application-ui", "places-bar", "caption", "windows-shell"],
    },
    0x00C6FC40: {
        "recoveredRole": "PlacesBar automatic-caption flag setter",
        "apiCategory": "Application UI",
        "behavior": "Stores the automatic-caption Boolean in a PlacesBar item.",
        "evidence": (
            "The function writes item byte 0x50. The dialog OK handler supplies "
            "chkAutoCap.Checked, and the caption resolver reads the same byte."
        ),
        "tags": ["application-ui", "places-bar", "auto-caption", "property-setter"],
    },
    0x00C6FCB0: {
        "recoveredRole": "PlacesBar manual-caption setter",
        "apiCategory": "Application UI",
        "behavior": "Copies a supplied Unicode string into the item's manual-caption field.",
        "evidence": (
            "The OK handler passes eShort.Text. The caption resolver reads the "
            "same item field 0x38 when automatic captions are off."
        ),
        "tags": ["application-ui", "places-bar", "caption", "property-setter"],
    },
    0x00D309D0: {
        "recoveredRole": "Delimited text-line splitter",
        "apiCategory": "Text parsing",
        "behavior": (
            "Clears a destination string list, splits input text at each "
            "delimiter, and appends every resulting field."
        ),
        "evidence": (
            "It repeatedly finds the delimiter, adds the prefix, removes the "
            "consumed text, and adds the final remainder."
        ),
        "tags": ["text-parser", "delimiter", "string-list", "import-curve"],
    },
    0x00EB9B70: {
        "recoveredRole": "Filtered footprint-name list population",
        "apiCategory": "Footprint library",
        "behavior": (
            "Clears a destination list and adds footprint names that match the "
            "selected category and optional minimum pad count."
        ),
        "evidence": (
            "It parses each footprint's comma-separated category value, tests "
            "exact membership, tests the pad count, and adds accepted names."
        ),
        "tags": ["footprint-library", "list-population", "category-filter", "pad-count-filter"],
    },
    0x00EBC110: {
        "recoveredRole": "New Footprint filtered-list refresh",
        "likelyDelphiName": "TNewModuleForm.cbxCategoryFilterChange",
        "uiRole": "ui-footprint-list-filter",
        "apiCategory": "Application UI",
        "behavior": (
            "Rebuilds the Footprints list from the selected library, category, "
            "pad-count filter state, and threshold. It selects the first result."
        ),
        "evidence": (
            "The category change and pad-count click paths call this function. "
            "It passes the control values to FUN_00eb9b70 and selects index zero."
        ),
        "tags": ["application-ui", "footprint-library", "category-filter", "pad-count-filter", "list-refresh"],
    },
    0x00EBC6F0: {
        "recoveredRole": "New Footprint pad-count filter click handler",
        "likelyDelphiName": "TNewModuleForm.cbxPadCountFilterClick",
        "uiRole": "ui-footprint-filter",
        "apiCategory": "Application UI",
        "behavior": "Rebuilds the Footprints list after the pad-count filter changes.",
        "evidence": (
            "cbxPadCountFilter has caption Enable pad count filter and resolves "
            "here. The function only calls the shared list refresh."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "footprint-library", "pad-count-filter", "checkbox"],
    },
    0x00F09DA0: {
        "recoveredRole": "Import curve dB display-mode selector",
        "likelyDelphiName": "TImportCurveDialog.dBRBClick",
        "uiRole": "ui-import-preview-mode",
        "apiCategory": "Application UI",
        "behavior": "Handles the dB radio-button click and rebuilds the import preview.",
        "evidence": (
            "The dB radio button resolves here. The function only calls the "
            "shared preview rebuild, which selects the voltage-in-dB heading."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "import-curve", "radio-button", "decibel"],
    },
    0x00F09F30: {
        "recoveredRole": "Import curve preview parser and grid rebuilder",
        "uiRole": "ui-import-preview",
        "apiCategory": "Application UI",
        "behavior": (
            "Selects the field separator, clamps the skipped-row value, parses "
            "source rows, configures the grid, writes localized headings, and "
            "fills a bounded preview. It selects voltage or voltage-in-dB headings."
        ),
        "evidence": (
            "Separator, skipped-row, display-format, Volts, dB, and form-show "
            "paths call it. It splits rows and writes the recovered import headings."
        ),
        "tags": ["application-ui", "import-curve", "preview-grid", "delimiter-parser"],
    },
    0x00F0B4E0: {
        "recoveredRole": "Import curve volts display-mode selector",
        "likelyDelphiName": "TImportCurveDialog.VoltsRBClick",
        "uiRole": "ui-import-preview-mode",
        "apiCategory": "Application UI",
        "behavior": "Handles the Volts radio-button click and rebuilds the import preview.",
        "evidence": (
            "The Volts radio button resolves here. The function only calls the "
            "shared preview rebuild, which reads the selected voltage mode."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "import-curve", "radio-button", "voltage"],
    },
    0x00F91E80: {
        "recoveredRole": "Flowchart color-dialog execution helper",
        "uiRole": "ui-color-dialog",
        "apiCategory": "Application UI",
        "behavior": "Sets the initial TColorDialog color and executes the dialog.",
        "evidence": (
            "It writes the supplied color to the owned TColorDialog field and "
            "returns the Boolean result of the common-dialog Execute operation."
        ),
        "tags": ["application-ui", "flowchart", "color-dialog", "dialog-execute"],
    },
    0x00F91EB0: {
        "recoveredRole": "Flowchart body-color preview click handler",
        "likelyDelphiName": "TdlgFlowChartOptions.lSetBodyColorClick",
        "uiRole": "ui-color-selection",
        "apiCategory": "Application UI",
        "behavior": (
            "Opens the form's color dialog with the current flowchart body color. "
            "When accepted, it applies the selected color to the Color label preview."
        ),
        "evidence": (
            "The clickable Color label has hint Click here to set the color and "
            "is next to Body. This handler uses global body-color offset 4 and "
            "updates the preview only; the dialog OK handler commits it."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "color-dialog", "body-color", "preview"],
    },
    0x00F91F00: {
        "recoveredRole": "Flowchart color-options preview initializer",
        "uiRole": "ui-color-preview",
        "apiCategory": "Application UI",
        "behavior": "Initializes the body-color label preview from the global setting.",
        "evidence": (
            "The form creation path reads global flowchart setting offset 4 and "
            "applies it to the same label that the body-color click handler updates."
        ),
        "tags": ["application-ui", "flowchart", "body-color", "preview", "form-initialization"],
    },
    0x00F91F40: {
        "recoveredRole": "Flowchart color-options commit handler",
        "uiRole": "ui-settings-commit",
        "apiCategory": "Application UI",
        "behavior": "Commits the preview label's body color to the global flowchart setting.",
        "evidence": (
            "The dialog OK-button path reads the same preview label color and "
            "writes it to global flowchart setting offset 4."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart", "body-color", "settings-commit"],
    },
    0x00F8D150: {
        "recoveredRole": "Flowchart simulator animation-mode getter",
        "apiCategory": "Flowchart simulation",
        "behavior": "Returns the simulator animation-enabled state.",
        "evidence": (
            "It reads simulator byte 0x3472. The animation setter writes the "
            "same byte, and simulation paths test it before animation updates."
        ),
        "tags": ["flowchart-simulator", "animation-state", "state-getter"],
    },
    0x00F8D160: {
        "recoveredRole": "Flowchart simulator animation-mode setter",
        "apiCategory": "Flowchart simulation",
        "behavior": (
            "Stores the requested animation state and tells the VHDL MCU "
            "implementation that the state changed."
        ),
        "evidence": (
            "It writes simulator byte 0x3472 and calls VHDL_DLL2._MCU_SetAnimate "
            "with the MCU handle at simulator offset 0x60."
        ),
        "tags": ["flowchart-simulator", "animation-state", "simulation-control", "vhdl-dll"],
    },
    0x01053D10: {
        "recoveredRole": "Flowchart debugger animation checkbox handler",
        "likelyDelphiName": "TFlowChartMainForm.cbAnimateClick",
        "uiRole": "ui-debugger-animation-toggle",
        "apiCategory": "Application UI",
        "behavior": (
            "When the simulator exists, it reads the Animate checkbox, caches "
            "the state in the form, and applies it to the simulator."
        ),
        "evidence": (
            "cbAnimate has caption Animate and resolves here. The handler reads "
            "form control 0x858, stores form byte 0x940, and calls FUN_00f8d160."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "flowchart-debugger", "animation", "checkbox"],
    },
    0x010717A0: {
        "recoveredRole": "C Compiler Settings form initializer",
        "likelyDelphiName": "TCCompilerSettings.FormShow",
        "uiRole": "ui-settings-initialization",
        "apiCategory": "Application UI",
        "behavior": "Loads the persisted Arduino CLI option and sets its checkbox.",
        "evidence": (
            "CCompilerSettings.OnShow resolves here. It calls FUN_01071c20 and "
            "sets cbUseArduinoCLI.Checked from form field 0x760."
        ),
        "tags": ["application-ui", "ui-event-handler", "form-show", "arduino-cli", "settings-load"],
    },
    0x01071890: {
        "recoveredRole": "C Compiler Settings acceptance handler",
        "likelyDelphiName": "TCCompilerSettings.bOkClick",
        "uiRole": "ui-settings-commit",
        "apiCategory": "Application UI",
        "behavior": "Validates and accepts the compiler settings and persists the Arduino CLI option.",
        "evidence": (
            "The bkOK button resolves here. After its validation path, it calls "
            "FUN_01071e10 before it copies the other option states."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "compiler-settings", "arduino-cli", "settings-save"],
    },
    0x01071C20: {
        "recoveredRole": "Arduino CLI preference loader",
        "apiCategory": "Registry settings",
        "behavior": (
            "Loads the current-user UseArduinoCLI integer into compiler-settings "
            "field 0x760. It uses zero when the value is absent."
        ),
        "evidence": (
            "It opens HKCU SOFTWARE\\DesignSoft\\<product>, tests UseArduinoCLI, "
            "reads the integer when present, and writes form field 0x760."
        ),
        "tags": ["compiler-settings", "arduino-cli", "registry", "settings-load"],
    },
    0x01071E10: {
        "recoveredRole": "Arduino CLI preference saver",
        "apiCategory": "Registry settings",
        "behavior": "Writes compiler-settings field 0x760 to the current-user UseArduinoCLI value.",
        "evidence": (
            "It opens the HKCU DesignSoft product key and writes the integer "
            "value named UseArduinoCLI."
        ),
        "tags": ["compiler-settings", "arduino-cli", "registry", "settings-save"],
    },
    0x01071FC0: {
        "recoveredRole": "Arduino CLI option checkbox change handler",
        "likelyDelphiName": "TCCompilerSettings.cbUseArduinoCLIClick",
        "uiRole": "ui-compiler-option-toggle",
        "apiCategory": "Application UI",
        "behavior": (
            "When the update guard is enabled, it copies the Use Arduino CLI "
            "checkbox state into compiler-settings field 0x760."
        ),
        "evidence": (
            "The checkbox caption is Use Arduino CLI and resolves here. The "
            "handler reads its checked state and writes exactly zero or one."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "compiler-settings", "arduino-cli", "checkbox"],
    },
    0x0109D7C0: {
        "recoveredRole": "HDL debugger watch tree reload",
        "uiRole": "ui-debugger-watch-refresh",
        "apiCategory": "Debugger UI",
        "behavior": "Loads watch data from VHDL_DLL2 and rebuilds the watch tree.",
        "evidence": (
            "It sends watch items, calls _Dbg_LoadWatch, and rebuilds the tree. "
            "The debug-subpage dispatcher selects it for Watches."
        ),
        "tags": ["application-ui", "hdl-debugger", "watch", "tree-data", "debugger-refresh"],
    },
    0x0109D930: {
        "recoveredRole": "HDL debugger locals tree reload",
        "uiRole": "ui-debugger-locals-refresh",
        "apiCategory": "Debugger UI",
        "behavior": (
            "Sends the current local-object category mask to VHDL_DLL2, loads "
            "local data, decodes it, and rebuilds the Locals tree."
        ),
        "evidence": (
            "It calls _Dbg_SetDebugLocals and _Dbg_Load. The debug-subpage "
            "dispatcher selects it for Locals."
        ),
        "tags": ["application-ui", "hdl-debugger", "local-variables", "tree-data", "debugger-refresh"],
    },
    0x0109DAB0: {
        "recoveredRole": "Recursive debugger tree-item decoder",
        "apiCategory": "Debugger UI data",
        "behavior": (
            "Reads one result item, creates or updates its tree node, and "
            "recursively decodes its child items."
        ),
        "evidence": (
            "It reads node text, state, and child count from the stream and "
            "calls itself once for each child."
        ),
        "tags": ["hdl-debugger", "recursive-decoder", "stream-decoder", "tree-data"],
    },
    0x0109DCF0: {
        "recoveredRole": "Debugger result-tree stream decoder",
        "apiCategory": "Debugger UI data",
        "behavior": "Decodes all top-level debugger result items and rewinds the stream.",
        "evidence": (
            "It reads the top-level item count, calls the recursive decoder for "
            "each item, and resets the stream position. Locals and Watches use it."
        ),
        "tags": ["hdl-debugger", "stream-decoder", "tree-data"],
    },
    0x0109DD80: {
        "recoveredRole": "HDL debugger subpage refresh dispatcher",
        "uiRole": "ui-debugger-page-refresh",
        "apiCategory": "Application UI",
        "behavior": "Reloads Breakpoints, Locals, or Watches for subpage index 0, 1, or 2.",
        "evidence": (
            "The three branches call the breakpoint, locals, and watch loaders. "
            "This order matches the recovered DFM subpage order."
        ),
        "tags": ["application-ui", "hdl-debugger", "subpage-dispatch", "debugger-refresh"],
    },
    0x0109DDD0: {
        "recoveredRole": "HDL debugger page refresh dispatcher",
        "uiRole": "ui-debugger-page-refresh",
        "apiCategory": "Application UI",
        "behavior": "Delegates refresh work to the active debug subpage when the Debug page is selected.",
        "evidence": (
            "The outer and inner page-change handlers reach it. For outer page "
            "index 1, which is Debug after Messages, it calls FUN_0109dd80."
        ),
        "tags": ["application-ui", "hdl-debugger", "page-dispatch", "debugger-refresh"],
    },
    0x0109DFB0: {
        "recoveredRole": "HDL debugger local-object category filter updater",
        "apiCategory": "Debugger state",
        "behavior": (
            "Sets or clears one category bit, sends the full mask to VHDL_DLL2, "
            "marks debugger data for reload, and requests a page refresh."
        ),
        "evidence": (
            "The four checkbox handlers pass bits 1, 2, 4, and 8. The function "
            "updates field 0xa0c and calls _Dbg_SetDebugLocals and _Dbg_SetFirstTime."
        ),
        "tags": ["application-ui", "hdl-debugger", "locals-filter", "bit-mask", "debugger-refresh"],
    },
    0x0109E020: {
        "recoveredRole": "HDL debugger entity-object filter checkbox handler",
        "likelyDelphiName": "THDLDebugger.cbEntityObjectsClick",
        "uiRole": "ui-debug-locals-category-filter",
        "apiCategory": "Application UI",
        "behavior": "Applies the Entity objects checkbox state with filter mask bit 0x01.",
        "evidence": (
            "The Entity objects checkbox resolves here. It reads its checked "
            "state and calls the shared updater with bit 1."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "hdl-debugger", "locals-filter", "entity-object", "checkbox"],
    },
    0x0109E060: {
        "recoveredRole": "HDL debugger architecture-object filter checkbox handler",
        "likelyDelphiName": "THDLDebugger.cbArchitectureObjectsClick",
        "uiRole": "ui-debug-locals-category-filter",
        "apiCategory": "Application UI",
        "behavior": "Applies the Arch. objects checkbox state with filter mask bit 0x02.",
        "evidence": (
            "The Arch. objects checkbox resolves here. It reads its checked "
            "state and calls the shared updater with bit 2."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "hdl-debugger", "locals-filter", "architecture-object", "checkbox"],
    },
    0x0109E0A0: {
        "recoveredRole": "HDL debugger process-object filter checkbox handler",
        "likelyDelphiName": "THDLDebugger.cbProcessObjectsClick",
        "uiRole": "ui-debug-locals-category-filter",
        "apiCategory": "Application UI",
        "behavior": "Applies the Process objects checkbox state with filter mask bit 0x04.",
        "evidence": (
            "The Process objects checkbox resolves here. It reads its checked "
            "state and calls the shared updater with bit 4."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "hdl-debugger", "locals-filter", "process-object", "checkbox"],
    },
    0x0109E0E0: {
        "recoveredRole": "HDL debugger subprogram-object filter checkbox handler",
        "likelyDelphiName": "THDLDebugger.cbSubpObjectsClick",
        "uiRole": "ui-debug-locals-category-filter",
        "apiCategory": "Application UI",
        "behavior": "Applies the Subp. objects checkbox state with filter mask bit 0x08.",
        "evidence": (
            "The Subp. objects checkbox resolves here. It reads its checked "
            "state and calls the shared updater with bit 8."
        ),
        "tags": ["application-ui", "ui-event-handler", "click-handler", "hdl-debugger", "locals-filter", "subprogram-object", "checkbox"],
    },
    0x0109E470: {
        "recoveredRole": "HDL debugger breakpoint tree reload",
        "uiRole": "ui-debugger-breakpoint-refresh",
        "apiCategory": "Debugger UI",
        "behavior": "Loads breakpoint data from VHDL_DLL2 and rebuilds the breakpoint tree.",
        "evidence": (
            "It calls _Dbg_GetBreakPoints and creates breakpoint tree entries. "
            "The debug-subpage dispatcher selects it for BreakPoints."
        ),
        "tags": ["application-ui", "hdl-debugger", "breakpoint", "tree-data", "debugger-refresh"],
    },
    0x011A5050: {
        "recoveredRole": "Quine-McCluskey form help-context selection handler",
        "uiRole": "ui-help-context-selection",
        "apiCategory": "Application UI",
        "behavior": (
            "Restores help-context ID 4000 when the Quine-McCluskey form surface "
            "is clicked. It prepares the form help topic without opening help "
            "or changing minimization data."
        ),
        "evidence": (
            "QM_form.OnClick binds FormClick to this single-store function. "
            "QM_form activation also stores 4000, and its OnHelp handler passes "
            "the shared value with logiconv.chm to the help service."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "help-context",
            "quine-mccluskey",
        ],
    },
    0x011A5CA0: {
        "recoveredRole": "Prime-implicant chart pen-color setter",
        "uiRole": "ui-canvas-formatting",
        "apiCategory": "Application UI",
        "behavior": (
            "Sets the cached chart canvas pen color when the Boolean variable "
            "count is below seven."
        ),
        "evidence": (
            "FUN_011a6000 calls this wrapper before it draws grid lines and "
            "colored cell outlines. The wrapper passes the canvas pen member "
            "and requested color to the recovered color setter."
        ),
        "tags": ["application-ui", "canvas", "pen-color", "prime-implicant-table"],
    },
    0x011A5CE0: {
        "recoveredRole": "Prime-implicant chart font-color setter",
        "uiRole": "ui-canvas-formatting",
        "apiCategory": "Application UI",
        "behavior": (
            "Sets the cached chart canvas font color when the Boolean variable "
            "count is below seven."
        ),
        "evidence": (
            "FUN_011a6000 calls this wrapper immediately before it draws chart "
            "column and row text. The wrapper passes the canvas font member to "
            "a change-notifying color setter."
        ),
        "tags": ["application-ui", "canvas", "font-color", "prime-implicant-table"],
    },
    0x011A5D20: {
        "recoveredRole": "Prime-implicant chart brush-color setter",
        "uiRole": "ui-canvas-formatting",
        "apiCategory": "Application UI",
        "behavior": (
            "Sets the cached chart canvas brush color when the Boolean variable "
            "count is below seven."
        ),
        "evidence": (
            "FUN_011a6000 selects background and highlight colors through this "
            "wrapper before it fills chart rectangles. The wrapper passes the "
            "canvas brush member to the recovered brush-color setter."
        ),
        "tags": ["application-ui", "canvas", "brush-color", "prime-implicant-table"],
    },
    0x011A5D60: {
        "recoveredRole": "Prime-implicant chart line drawing helper",
        "uiRole": "ui-canvas-drawing",
        "apiCategory": "Application UI",
        "behavior": (
            "Moves the cached chart canvas to the first coordinate and draws a "
            "line to the second coordinate when the variable count is below "
            "seven."
        ),
        "evidence": (
            "The wrapper dispatches two canvas operations in sequence. "
            "FUN_011a6000 uses it for chart borders, term separators, and "
            "implicant rows."
        ),
        "tags": ["application-ui", "canvas", "line-drawing", "prime-implicant-table"],
    },
    0x011A5DD0: {
        "recoveredRole": "Prime-implicant chart text drawing helper",
        "uiRole": "ui-canvas-drawing",
        "apiCategory": "Application UI",
        "behavior": (
            "Draws a managed Unicode string at supplied chart coordinates and "
            "preserves its reference while the canvas call runs."
        ),
        "evidence": (
            "The wrapper retains the string, invokes the canvas text operation, "
            "and releases the temporary reference. FUN_011a6000 uses it for "
            "term numbers, variable labels, operators, and coverage marks."
        ),
        "tags": ["application-ui", "canvas", "text-output", "prime-implicant-table"],
    },
    0x011A5E60: {
        "recoveredRole": "Prime-implicant chart cell-highlight helper",
        "uiRole": "ui-canvas-drawing",
        "apiCategory": "Application UI",
        "behavior": (
            "Draws a bounded outline around a selected prime-implicant chart "
            "cell when the variable count is below seven."
        ),
        "evidence": (
            "FUN_011a6000 is the only caller. It invokes this helper with one "
            "cell's bounds after drawing an incidence mark and selecting the "
            "highlight pen color."
        ),
        "tags": ["application-ui", "canvas", "cell-highlight", "prime-implicant-table"],
    },
    0x011A5FF0: {
        "recoveredRole": "Prime-implicant table redraw forwarding wrapper",
        "uiRole": "ui-redraw",
        "apiCategory": "Application UI",
        "behavior": (
            "Delegates a prime-implicant table redraw to FUN_011a6000. It is the "
            "shared redraw entry used by the form's OnShow and OnClick handlers."
        ),
        "evidence": (
            "The function body contains only the call to FUN_011a6000. Its "
            "recovered callers are the Prime Implicant Table FormShow and "
            "FormClick handlers."
        ),
        "tags": ["application-ui", "prime-implicant-table", "redraw", "forwarding-wrapper"],
    },
    0x011A6000: {
        "recoveredRole": "Prime-implicant chart renderer and Boolean cover selector",
        "uiRole": "ui-rendering-and-boolean-minimization",
        "apiCategory": "Application UI",
        "behavior": (
            "Builds and draws the prime-implicant coverage chart, selects "
            "essential prime implicants, then selects rows that cover the most "
            "remaining terms. It composes and publishes the resulting "
            "simplified Boolean expression and updates variable-use counts."
        ),
        "evidence": (
            "The function copies the implicant-versus-term matrix, draws row "
            "and column labels and coverage marks, detects uniquely covered "
            "columns, runs a maximum-remaining-coverage loop, normalizes the "
            "expression, and writes it to the simplified-function control."
        ),
        "tags": [
            "application-ui",
            "boolean-minimization",
            "prime-implicant-chart",
            "essential-prime-implicant",
            "cover-selection",
            "canvas-rendering",
            "expression-generation",
        ],
    },
    0x011A97B0: {
        "recoveredRole": "Prime-implicant table click redraw handler",
        "uiRole": "ui-redraw-handler",
        "apiCategory": "Application UI",
        "behavior": (
            "Resets the Prime Implicant Table drawing origin to (10, 10), then "
            "rebuilds the chart, selects a Boolean cover, and updates the "
            "displayed simplified expression."
        ),
        "evidence": (
            "implikanst_form.OnClick binds FormClick to this function. It writes "
            "10 to both drawing-origin globals and calls FUN_011a5ff0. The "
            "form's OnShow handler performs the same reset and redraw."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "prime-implicant-table",
            "boolean-minimization",
            "redraw",
        ],
    },
    0x011AD4A0: {
        "recoveredRole": "Truth-table form help-context selection handler",
        "uiRole": "ui-help-context-selection",
        "apiCategory": "Application UI",
        "behavior": (
            "Restores help-context ID 2000 when the Truth Table form surface is "
            "clicked. It prepares the form help topic without opening help or "
            "changing the truth table."
        ),
        "evidence": (
            "tables_form.OnClick binds FormClick to this single-store function. "
            "Form creation and activation also store 2000, and the OnHelp "
            "handler passes the shared value with logiconv.chm to the help "
            "service."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "help-context",
            "truth-table",
        ],
    },
    0x011AE560: {
        "recoveredRole": "Dual minterm and maxterm Karnaugh-view refresh coordinator",
        "uiRole": "ui-dual-view-refresh",
        "apiCategory": "Application UI",
        "behavior": (
            "Refreshes both Karnaugh-map modes by flipping the minterm or "
            "maxterm mode, rendering that view, restoring the original mode, "
            "and rendering the original view. The final mode is unchanged."
        ),
        "evidence": (
            "The function complements DAT_01f2a8d4 before each of two calls to "
            "FUN_011ae5b0. The DFM identifies the paired Minterm and Maxterm "
            "views, and the renderer selects different origins for each mode."
        ),
        "tags": [
            "application-ui",
            "karnaugh-map",
            "minterm",
            "maxterm",
            "dual-view-refresh",
        ],
    },
    0x011AE5B0: {
        "recoveredRole": "Karnaugh-map renderer and simplified-expression generator",
        "uiRole": "ui-rendering-and-boolean-minimization",
        "apiCategory": "Application UI",
        "behavior": (
            "Builds one minterm or maxterm Karnaugh view from the stored truth "
            "function, draws its grid, values, and implicant outlines, generates "
            "the corresponding simplified Boolean expression, publishes the "
            "result, and rebuilds variable-use counts."
        ),
        "evidence": (
            "The function selects mode-specific term arrays and drawing origins, "
            "uses canvas text and shape operations, appends sum-of-products or "
            "product-of-sums terms, writes the finished expression to form and "
            "shared state, and parses it to count positive and complemented "
            "variables."
        ),
        "tags": [
            "application-ui",
            "karnaugh-map",
            "boolean-minimization",
            "minterm",
            "maxterm",
            "sum-of-products",
            "product-of-sums",
            "canvas-rendering",
            "expression-generation",
        ],
    },
    0x011D28D0: {
        "recoveredRole": "Karnaugh form click refresh and help-context handler",
        "uiRole": "ui-redraw-and-help-context-handler",
        "apiCategory": "Application UI",
        "behavior": (
            "Restores help-context ID 3000 when the Karnaugh form surface is "
            "clicked, then recalculates and repaints both minterm and maxterm "
            "Karnaugh views."
        ),
        "evidence": (
            "VK_form.OnClick binds FormClick to this function. It stores 3000 "
            "and calls FUN_011ae560. Form creation and activation use the same "
            "context, and the OnHelp handler passes it with logiconv.chm to the "
            "help service."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "help-context",
            "karnaugh-map",
            "dual-view-refresh",
        ],
    },
    0x01221720: {
        "recoveredRole": "Schematic-diagram form help-context selection handler",
        "uiRole": "ui-help-context-selection",
        "apiCategory": "Application UI",
        "behavior": (
            "Restores help-context ID 5000 when the Schematic Diagram form "
            "surface is clicked. It prepares the form help topic without "
            "opening help or changing the schematic."
        ),
        "evidence": (
            "Func_diagram_form.OnClick binds FormClick to this single-store "
            "function. Form creation and activation also store 5000, and the "
            "OnHelp handler passes the shared value with logiconv.chm to the "
            "help service."
        ),
        "tags": [
            "application-ui",
            "ui-event-handler",
            "click-handler",
            "help-context",
            "schematic-diagram",
        ],
    },
}

FUNCTION_ANNOTATION_DIRECTORY = Path("analysis/function-annotations")
FUNCTION_ANNOTATION_FIELDS = {
    "recoveredRole",
    "likelyDelphiName",
    "framework",
    "apiCategory",
    "uiRole",
    "behavior",
    "evidence",
    "tags",
}


def merge_function_annotation(
    address: int,
    incoming: dict[str, object],
    source_path: Path,
) -> None:
    target = ONCLICK_CALL_TREE_FUNCTIONS.setdefault(address, {})
    for key, value in incoming.items():
        if key == "address":
            continue
        if key not in FUNCTION_ANNOTATION_FIELDS:
            raise ValueError(
                f"Unsupported function annotation field {key!r} in {source_path}."
            )
        if key == "tags":
            if not isinstance(value, list) or not all(
                isinstance(item, str) and item for item in value
            ):
                raise ValueError(f"Invalid tags in {source_path}.")
            existing_tags = target.setdefault("tags", [])
            if not isinstance(existing_tags, list):
                raise ValueError(
                    f"Existing tags are not a list for 0x{address:08x}."
                )
            for tag in value:
                if tag not in existing_tags:
                    existing_tags.append(tag)
            continue
        if not isinstance(value, str) or not value.strip():
            raise ValueError(f"Invalid {key} value in {source_path}.")
        existing_value = target.get(key)
        if existing_value is not None and existing_value != value:
            raise ValueError(
                f"Conflicting {key} for 0x{address:08x} in {source_path}."
            )
        target[key] = value


def load_function_annotation_fragments() -> int:
    if not FUNCTION_ANNOTATION_DIRECTORY.exists():
        return 0

    fragment_count = 0
    for source_path in sorted(FUNCTION_ANNOTATION_DIRECTORY.glob("*.json")):
        payload = json.loads(source_path.read_text(encoding="utf-8-sig"))
        if not isinstance(payload, dict):
            raise ValueError(f"Annotation fragment must be an object: {source_path}")
        functions = payload.get("functions")
        if not isinstance(functions, list) or not functions:
            raise ValueError(
                f"Annotation fragment must contain a non-empty functions list: "
                f"{source_path}"
            )
        for annotation in functions:
            if not isinstance(annotation, dict):
                raise ValueError(f"Invalid function entry in {source_path}.")
            address_text = annotation.get("address")
            if not isinstance(address_text, str):
                raise ValueError(f"Missing function address in {source_path}.")
            normalized_address = address_text.lower().removeprefix("0x")
            if not re.fullmatch(r"[0-9a-f]{1,16}", normalized_address):
                raise ValueError(
                    f"Invalid function address {address_text!r} in {source_path}."
                )
            merge_function_annotation(
                int(normalized_address, 16),
                annotation,
                source_path,
            )
        fragment_count += 1

    return fragment_count


FUNCTION_ANNOTATION_FRAGMENT_COUNT = load_function_annotation_fragments()

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

    for address, annotation in ONCLICK_CALL_TREE_FUNCTIONS.items():
        if address in address_map:
            node_annotations[address] = {
                key: list(value) if isinstance(value, list) else value
                for key, value in annotation.items()
            }
            stats["documentedOnClickCallTreeFunctions"] += 1

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
    if any(name in upper_name for name in ("CHECKBOX", "RADIOBUTTON")):
        return "selection control", ["ui-selection-control"]
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


def ui_property_value(properties: dict[str, str], name: str) -> str:
    return str(properties.get(name, "")).strip()


def has_nonnegative_image_index(properties: dict[str, str]) -> bool:
    for name in ("ImageIndex", "PressedImageIndex", "SelectedImageIndex"):
        try:
            if int(ui_property_value(properties, name)) >= 0:
                return True
        except ValueError:
            continue
    return False


def ui_resource_evidence(properties: dict[str, str]) -> dict[str, bool]:
    text = any(
        ui_property_value(properties, name)
        for name in ("Caption", "Hint", "Text", "Items.Strings", "Action")
    )
    image = has_nonnegative_image_index(properties) or any(
        ui_property_value(properties, name)
        for name in (
            "ImageName",
            "Images",
            "HotImages",
            "DisabledImages",
            "LargeImages",
            "Glyph.Data",
            "Picture.Data",
            "Image.Data",
        )
    )
    kind = ui_property_value(properties, "Kind").casefold()
    modal_result = ui_property_value(properties, "ModalResult").casefold()
    semantic = (
        kind not in {"", "bkcustom"}
        or modal_result not in {"", "0", "mrnone"}
        or any(
            ui_property_value(properties, name).casefold() == "true"
            for name in ("Default", "Cancel", "Checked")
        )
        or bool(ui_property_value(properties, "State"))
    )
    return {
        "text": text,
        "image": image,
        "semantic": semantic,
        "direct": text or image or semantic,
    }


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
    onclick_targets: set[str] = set()
    resolved_onclick_functions: set[int] = set()
    button_onclick_forms: set[str] = set()
    button_onclick_targets: set[str] = set()

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
                    "text": str(properties.get("Text", "")),
                    "items": str(properties.get("Items.Strings", "")),
                    "action": str(properties.get("Action", "")),
                    "imageIndex": str(properties.get("ImageIndex", "")),
                    "imageName": str(properties.get("ImageName", "")),
                    "embeddedImage": next(
                        (
                            str(properties[name])
                            for name in (
                                "Glyph.Data",
                                "Picture.Data",
                                "Image.Data",
                            )
                            if str(properties.get(name, "")).strip()
                        ),
                        "",
                    ),
                    "kind": str(properties.get("Kind", "")),
                    "modalResult": str(properties.get("ModalResult", "")),
                }
                evidence = ui_resource_evidence(properties)
                if evidence["text"]:
                    stats["uiEventDirectTextEvidenceCount"] += 1
                if evidence["image"]:
                    stats["uiEventImageEvidenceCount"] += 1
                if evidence["semantic"]:
                    stats["uiEventSemanticPropertyEvidenceCount"] += 1
                if evidence["direct"]:
                    stats["uiEventDirectResourceEvidenceCount"] += 1
                else:
                    stats["uiEventWithoutDirectResourceEvidenceCount"] += 1
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

                if event_name.casefold() == "onclick":
                    onclick_targets.add(target_id)
                    stats["onClickBindingCount"] += 1
                    if address is not None and address in record_by_address:
                        resolved_onclick_functions.add(address)
                        stats["resolvedOnClickBindingCount"] += 1
                    else:
                        stats["unresolvedOnClickBindingCount"] += 1

                    for property_name, count_name in (
                        ("Caption", "onClickCaptionCount"),
                        ("Hint", "onClickHintCount"),
                        ("Text", "onClickTextCount"),
                        ("Items.Strings", "onClickItemsCount"),
                        ("Action", "onClickActionCount"),
                    ):
                        if ui_property_value(properties, property_name):
                            stats[count_name] += 1
                    if evidence["image"]:
                        stats["onClickImageEvidenceCount"] += 1
                    if evidence["semantic"]:
                        stats["onClickSemanticPropertyEvidenceCount"] += 1
                    if evidence["direct"]:
                        stats["onClickDirectResourceEvidenceCount"] += 1
                    else:
                        stats["onClickWithoutDirectResourceEvidenceCount"] += 1

                    if kind == "button":
                        button_onclick_forms.add(resource)
                        button_onclick_targets.add(target_id)
                        stats["buttonOnClickBindingCount"] += 1
                        if address is not None and address in record_by_address:
                            stats["resolvedButtonOnClickBindingCount"] += 1
                        else:
                            stats["unresolvedButtonOnClickBindingCount"] += 1

                        caption = str(properties.get("Caption", "")).strip()
                        hint = str(properties.get("Hint", "")).strip()
                        action = str(properties.get("Action", "")).strip()
                        if caption:
                            stats["buttonOnClickCaptionCount"] += 1
                        if hint:
                            stats["buttonOnClickHintCount"] += 1
                        if action:
                            stats["buttonOnClickActionCount"] += 1
                        if caption or hint or action:
                            stats["buttonOnClickTextEvidenceCount"] += 1
                        else:
                            stats["buttonOnClickWithoutTextEvidenceCount"] += 1

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
        "onClickActionCount",
        "buttonOnClickActionCount",
        "buttonOnClickBindingCount",
        "buttonOnClickCaptionCount",
        "buttonOnClickHintCount",
        "buttonOnClickTextEvidenceCount",
        "buttonOnClickWithoutTextEvidenceCount",
        "onClickCaptionCount",
        "onClickDirectResourceEvidenceCount",
        "onClickHintCount",
        "onClickImageEvidenceCount",
        "onClickItemsCount",
        "onClickSemanticPropertyEvidenceCount",
        "onClickTextCount",
        "onClickWithoutDirectResourceEvidenceCount",
        "onClickBindingCount",
        "resolvedButtonOnClickBindingCount",
        "resolvedEventBindingCount",
        "resolvedOnClickBindingCount",
        "unresolvedButtonOnClickBindingCount",
        "unresolvedEventBindingCount",
        "unresolvedOnClickBindingCount",
        "uiEventDirectResourceEvidenceCount",
        "uiEventDirectTextEvidenceCount",
        "uiEventImageEvidenceCount",
        "uiEventSemanticPropertyEvidenceCount",
        "uiEventWithoutDirectResourceEvidenceCount",
    ):
        stats[required_count] += 0
    stats["buttonOnClickDistinctHandlerCount"] = len(button_onclick_targets)
    stats["buttonOnClickFormCount"] = len(button_onclick_forms)
    stats["onClickDistinctHandlerCount"] = len(onclick_targets)
    stats["resolvedOnClickFunctionCount"] = len(resolved_onclick_functions)
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
