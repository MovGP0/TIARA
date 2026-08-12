# Select the Clone TestBench source folder

> Analysis status: Complete. The recovered handler, Shell folder-browser helper, form lifecycle, OK handler, clone caller, and copy worker agree on this behavior.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CloneTestBench |
| Form caption | Clone TestBench |
| Component path | CloneTestBench.bSourceFolder |
| Control class | TButton |
| Caption | Select folder |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bSourceFolderClick |
| Handler address | 012e8ad0 |
| Graph node | `resource:dfm:CloneTestBench/CloneTestBench.bSourceFolder` |
| Handler node | `function:012e8ad0` |
| Graph layer | UI |

## What happens when clicked

The button opens a Windows Shell folder browser for the **Source folder:** edit. The handler reads the current `eSourceFolder` text and supplies it as the browser's initial folder. The browser has no application-defined title and no application-defined root. It is owned by the application's main window.

For this call, the option value `0x2B` produces Shell flags `0x71`: return file-system directories, use the newer dialog style, provide an edit box, and validate a typed path. The helper does not request suppression of the Shell new-folder button. Its callback centers the browser and asks the Shell dialog to select the valid initial folder.

If the user accepts a folder, the handler replaces `eSourceFolder.Text` with the returned file-system path. If the user cancels the browser or the helper cannot return a selected item identifier, the handler does not call the edit setter, so the displayed source folder stays unchanged.

## Input, state, and downstream effects

| Stage | Proven behavior |
| --- | --- |
| Restored input | `CloneTestBench.OnShow` reads `ModelTest Settings / CT_SourceFolder` from `TINA.INI` and writes it to `eSourceFolder`. |
| Click input | The current `eSourceFolder.Text` is copied to a temporary UnicodeString. |
| Initial-path check | The browser helper tests whether the temporary value identifies a directory. An invalid value is cleared in the temporary copy before the dialog opens. |
| Accepted selection | The selected Shell item is converted to a file-system path and replaces `eSourceFolder.Text`. No trailing separator is added or removed in this handler. |
| Browser cancel or failure | The temporary result is discarded and `eSourceFolder.Text` stays unchanged. |
| Dialog OK | `FUN_012e89c0` copies `eSourceFolder.Text` to form result field `+0x738`. It also copies the source prefix, target prefixes, and circuit-folder list to their result fields. |
| Clone use | `FUN_012f5430` reads field `+0x738` after modal result `1` and passes it to `FUN_012f4f80`. That worker uses the folder with the source prefix to find and copy TestBench files for each target-prefix and circuit-folder pair. |
| Form close | `CloneTestBench.OnClose` writes the current edit text to `TINA.INI` as `ModelTest Settings / CT_SourceFolder`, then destroys its INI object. This lifecycle write also occurs when the outer dialog closes with Cancel. |

## Selection and clone flow

```mermaid
flowchart TD
    show["CloneTestBench.OnShow<br/>load CT_SourceFolder from TINA.INI"] --> edit["eSourceFolder shows current source path"]
    edit --> click["Click Select folder"]
    click --> read["FUN_012e8ad0<br/>read eSourceFolder.Text"]
    read --> valid{"Initial text identifies a directory?"}
    valid -->|Yes| initial["Keep it as the initial Shell selection"]
    valid -->|No| empty["Clear only the temporary initial path"]
    initial --> browse["FUN_00b96980<br/>open owned Shell folder browser"]
    empty --> browse
    browse --> accepted{"A folder item is accepted?"}
    accepted -->|No| unchanged["Keep eSourceFolder.Text unchanged"]
    accepted -->|Yes| selected["Convert selected item to a file-system path"]
    selected --> update["Replace eSourceFolder.Text"]
    unchanged --> dialog["Continue in Clone TestBench dialog"]
    update --> dialog
    dialog --> result{"How does the outer dialog close?"}
    result -->|OK| collect["FUN_012e89c0<br/>copy text to result field +0x738"]
    collect --> clone["FUN_012f5430 passes source folder<br/>to FUN_012f4f80 clone worker"]
    result -->|Cancel| noClone["Do not run the clone worker"]
    clone --> close["OnClose writes current text<br/>to TINA.INI"]
    noClone --> close

    classDef changed fill:#e8f5e9,stroke:#2e7d32,color:#1b1b1b;
    classDef unchangedPath fill:#f5f5f5,stroke:#757575,color:#424242,stroke-dasharray: 5 5;
    class update,collect,clone,close changed;
    class unchanged,noClone unchangedPath;
```

## Handler and Shell evidence

- Click handler: [FUN_012e8ad0](../../../DecompiledSources/Tina16/functions/00000000012E8AD0__FUN_012e8ad0.c)
- Folder-browser helper: [FUN_00b96980](../../../DecompiledSources/Tina16/functions/0000000000B96980__FUN_00b96980.c)
- Browser callback: [FUN_00b96eb0](../../../DecompiledSources/Tina16/functions/0000000000B96EB0__FUN_00b96eb0.c)
- Initial-directory wrapper: [FUN_00b96de0](../../../DecompiledSources/Tina16/functions/0000000000B96DE0__FUN_00b96de0.c)
- Directory test: [FUN_00440b00](../../../DecompiledSources/Tina16/functions/0000000000440B00__FUN_00440b00.c)
- Dialog OK handler: [FUN_012e89c0](../../../DecompiledSources/Tina16/functions/00000000012E89C0__FUN_012e89c0.c)
- Form close persistence: [FUN_012e8d40](../../../DecompiledSources/Tina16/functions/00000000012E8D40__FUN_012e8d40.c)
- Form show restoration: [FUN_012e8e40](../../../DecompiledSources/Tina16/functions/00000000012E8E40__FUN_012e8e40.c)
- Clone command: [FUN_012f5430](../../../DecompiledSources/Tina16/functions/00000000012F5430__FUN_012f5430.c)
- Clone file worker: [FUN_012f4f80](../../../DecompiledSources/Tina16/functions/00000000012F4F80__FUN_012f4f80.c)

`FUN_012e8ad0` reads the VCL text control at form field `+0x6C8`, calls `FUN_00b96980` with the temporary string by reference, and writes the string back to the same control only when the helper returns true. The DFM identifies field `+0x6C8` as the edit directly beside `bSourceFolder` and the **Source folder:** label.

`FUN_00b96980` builds a record whose field layout, callback, flags, and data flow match `BROWSEINFOW`. It calls recovered thunks with the shapes of `SHBrowseForFolderW` and `SHGetPathFromIDListW`, frees the returned item identifier through the Shell allocator, and copies the path buffer to the caller only for a non-null selection. The recovered code does not test the path-conversion thunk's return value separately.

The browser callback handles the initialized notification by centering the dialog and sending `BFFM_SETSELECTIONW` (`0x467`) when it has an initial path. For the validation notifications, it calls a recovered message path with the rejected typed name and returns handled status. The exact localized validation-message text is not recovered here.

## Resource and field evidence

- The DFM places `bSourceFolder` at `(406, 23)` and `eSourceFolder` at `(106, 25)`. Their two-pixel vertical difference, the **Source folder:** label at the same row, and the handler's read/write of field `+0x6C8` establish the control mapping.
- The button has no hint, image, embedded glyph, built-in button kind, or modal result. Its caption supplies general folder-selection intent; the handler and Shell calls establish the exact target and effect.
- The graph's nearest-label calculation also ranks **Source folder:** first. The mapping does not depend on coordinate rank alone.
- `FUN_012e89c0` copies the same edit to form field `+0x738`. `FUN_012f5430` later reads the corresponding qword index `0xE7` after the Clone TestBench dialog returns `1`.
- The clone worker checks for required `*.tsc`, `*.csv`, and `*.mtb` files and reports a specific missing-file message for each required type. It also processes `*.tsm` and conditionally copies `*.ac` and `*.tr` result files. These checks occur only in the later clone operation, not in this click handler.

## Cancel, validation, error, and persistence boundaries

- An invalid initial edit value does not change the visible edit. The helper clears only the handler's temporary copy before it opens the browser.
- Browser cancellation is a silent no-op for the visible edit and does not start clone work.
- The click does not check for TestBench files, compare source and target prefixes, create a target directory, or copy a file.
- The outer OK path does not validate the source folder before it copies the edit text into result field `+0x738`. Validation of required source files occurs later in the clone worker.
- Outer Cancel prevents `FUN_012f5430` from starting the clone worker. It does not revert an accepted folder in the edit before the form closes.
- The form's `OnClose` writes the current source-folder edit to `TINA.INI` for either outer result. Thus, dialog cancellation is a no-clone boundary, but it is not a rollback boundary for this remembered edit value.
- The click handler and Shell helper have no recovered application-level exception handler or rollback branch. The source does not establish how an unexpected VCL, Shell, allocation, or INI exception is presented.

## Analysis limits

- The Shell API names are assigned from the recovered structure layout, constants, callback messages, allocator flow, and call signatures. The import thunks do not retain those symbol names in the recovered C.
- The accepted Shell item is expected to be a file-system directory because the browser uses the return-file-system-directories flag. The helper ignores the separate path-conversion return value, so the recovered code does not prove an explicit conversion-failure branch.
- The clone worker establishes how the source folder is consumed. This article does not assign original Delphi names to its internal path-composition and file-copy helpers.
