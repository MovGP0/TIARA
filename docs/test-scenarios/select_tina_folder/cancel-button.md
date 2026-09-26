# Cancel

| Field | Value |
| --- | --- |
| Scenario | `TINA-FOLDER-CANCEL-001` |
| Window / tab | `select_tina_folder` |
| Control | `btnCancel`, `bkCancel`, and Escape |
| Review | Reviewed by Codex on 2026-09-26 |
| Integration | Not derived |
| Result | Not run |
| Requirement basis | Original form resource and modal caller route |
| TINA documentation | TINA Design Suite v16 User Manual, 2025: no section or page for this migration dialog was found in the 2026-09-26 search. |
| Defect | `TIARA-v86ktpa` |

## Setup

Open the surface through **File > Import > Import TINA Libraries and
Designs...**. Use only test-owned earlier and current folders. Select an earlier
installation and change the checkbox, but do not press Go. Record the test
folder tree, test INI, open circuit, and undo history. Follow the
[shared execution rules](../execution-rules.md).

## Actions and expected results

1. Click **Cancel**. The surface closes and returns to the Schematic Editor.
2. Reopen the surface, repeat the setup, and press Escape.
3. Escape has the same cancellation result after its current keyboard route is
   implemented and verified.

Both routes discard the pending selection and checkbox state. They do not copy
a file, write the INI, create or open a log, modify the circuit, or add an undo
entry.

## Variants

- Cancel before any selection and after a valid selection.
- Cancel after a browse-picker cancellation.
- Cancellation during an active copy is not an approved expectation. The
  original resource proves a modal Cancel button, but the reviewed Go handler
  does not establish a safe mid-copy rollback route.
- The original `bkCancel` kind supports a VCL cancellation route. Current Iced
  Escape behavior must be tested through the host instead of inferred.

## Evidence and current result

The original resource defines `btnCancel` with kind `bkCancel`. The caller
shows the form modally and destroys it after the modal result returns. No
separate Cancel handler is present. The current Rust view has no Cancel button,
no close request, and no application-host close route for this surface. This is
a source-confirmed current implementation gap.

- [Rust implementation](../../../crates/tiara-ui/src/select_tina_folder/mod.rs)
- [Original form evidence](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- [Caller control article](../../ui-controls/schematiceditor/importuserlibs-c355d14e3b.md)

## Reset

Close the test surface by the host test harness if the current gap prevents
normal cancellation. Remove only test-owned fixtures. Confirm that all recorded
state is unchanged.

## Later integration test

Cite `TINA-FOLDER-CANCEL-001`. Test pointer and Escape routes through the real
application host. Assert actual closure and all prohibited side effects.
