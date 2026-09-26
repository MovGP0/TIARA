# Earlier TINA installation selection

| Field | Value |
| --- | --- |
| Scenario | `TINA-FOLDER-INSTALL-001` |
| Window / tab | `select_tina_folder` |
| Control | `lbxInstalledTinas`; list selection and browse-row double-click |
| Review | Reviewed by Codex on 2026-09-26 |
| Integration | Not derived |
| Result | Not run |
| Requirement basis | Recovered form resource, handlers `01c44300`, `01c45000`, `01c466d0`, and current Rust model tests |
| TINA documentation | TINA Design Suite v16 User Manual, 2025: no section or page for this migration dialog was found in the 2026-09-26 search. |
| Defect | `TIARA-v86ktpa` |

## Setup

Use a disposable Windows profile or registry adapter. Provide these controlled
entries:

- the running TINA installation;
- one recognized earlier installation with settings and catalog folders;
- one unrelated installed program;
- a final Browse row.

Prepare one folder with `tina.exe` and version 8 or later, one folder without
`tina.exe`, and one folder with a version before 8. Do not select a user's real
installation folder. Follow the [shared execution rules](../execution-rules.md).

## Actions and expected results

1. Open **File > Import > Import TINA Libraries and Designs...**.
2. Verify that the list contains the recognized earlier installation and the
   Browse row. The running installation and the unrelated program are absent.
3. Select the recognized earlier installation. **Go!** becomes enabled. Hover
   the row. Its installation detail is available as a hint.
4. Double-click a normal installation row. No folder picker opens and the row
   does not change.
5. Double-click the Browse row. Cancel the folder picker. The list and Go state
   do not change.
6. Repeat the browse action. Select the invalid folders in sequence. The
   original behavior reopens the picker without an error until the user selects
   a valid folder or cancels.
7. Select the valid earlier-version folder. The Browse row changes to that
   folder, the associated settings and catalog paths become the import source,
   and **Go!** becomes enabled.
8. Select the running installation folder in the picker. It is not accepted as
   an import source.

No action in this scenario copies a file, writes a setting, creates a log, or
changes the open circuit.

## Variants

- With no recognized earlier installation, only the unmodified Browse row is
  available and **Go!** stays disabled.
- A listed installation is accepted when its row is selected. The unmodified
  Browse row is not accepted.
- The original list hint is not shown for the Browse row or empty list space.
- Keyboard list navigation needs live verification. The resource does not by
  itself prove which key opens the browse picker.

## Evidence and current result

The original resource defines `lbxInstalledTinas` and its double-click handler.
Recovered logic discovers recognized installations, omits the running folder,
validates the browse folder, and controls the Go state. The current Rust module
contains model functions and unit tests for these rules. Its `Window::view`
does not render or connect the list. The application default-constructs the
window without an `ImportRequest`. Therefore, the current desktop route cannot
perform this scenario.

- [Rust implementation](../../../crates/tiara-ui/src/select_tina_folder/mod.rs)
- [Original Go control article](../../ui-controls/frmselecttinafolder/btnok-facb2736eb.md)
- [Original form evidence](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)

## Reset

Cancel the dialog. Remove only the test-owned registry and folder fixtures.
Restore no user registry values because this scenario must not change them.

## Later integration test

Cite `TINA-FOLDER-INSTALL-001`. Open the surface through the real menu route.
Use the visible list and native folder picker. Assert the list, hint, Go state,
selected source folders, and absence of file or document changes.
