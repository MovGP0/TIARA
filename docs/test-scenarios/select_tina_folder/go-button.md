# Go!

| Field | Value |
| --- | --- |
| Scenario | `TINA-FOLDER-GO-001` |
| Window / tab | `select_tina_folder` |
| Control | `btnOK`, **Go!**, and the current `ImportPressed` route |
| Review | Reviewed by Codex on 2026-09-26 |
| Integration | Not derived |
| Result | Not run |
| Requirement basis | Reviewed original control article and current Rust import implementation |
| TINA documentation | TINA Design Suite v16 User Manual, 2025: no section or page for this migration dialog was found in the 2026-09-26 search. |
| Defect | `TIARA-v86ktpa` |

## Setup

Use test-owned earlier and current folder trees. Include missing and existing
files for each supported group: `.ddb`, `.fpl`, `.3dl`, `.tcr`, `.pdb`, `.lib`,
and `.tld`. Optionally include `.tsc` and `.tpc` files as specified by
`TINA-FOLDER-EXAMPLES-001`. Keep a copy of the current test tree and test INI.
Follow the [shared execution rules](../execution-rules.md).

## Actions and expected results

1. Open the surface without a valid source selection. **Go!** is disabled.
2. Select a valid earlier installation. **Go!** becomes enabled.
3. Click **Go!** once. The surface reports **Copy in progress**, and Go is
   disabled until the operation completes.
4. Each source inventory path that is absent from the current inventory is
   copied to the matching destination. An existing destination path is skipped
   without a content, size, date, or version comparison.
5. Each copied file adds one source-to-destination line to
   `Library Import.log`. A copied `.lib` file sets
   `ForceReBuildLibrary=true` in the **Analysis Setup** INI section.
6. When at least one file is copied, the surface reports **Import completed**
   and asks **Open Library Import.log?**.
7. Reset the fixture so all source paths already exist at the destination.
   Click Go again. The surface reports **Nothing to copy**. It does not create
   a log or request a library rebuild.

The operation does not change the open circuit or its undo history.

## Variants

- Activate Go again while the status is **Copy in progress**. It must not start
  a second import.
- Inject a directory-read, directory-create, copy, INI-write, or log-write
  failure. The surface shows the first error. Files copied before the failure
  are not rolled back, and no unsupported success claim is shown.
- Pointer activation is required. Enter is a later live route because the
  original `bkOK` evidence does not prove the current Iced focus behavior.
- Use both states of **Include Examples and Designs** as specified by
  `TINA-FOLDER-EXAMPLES-001`.

## Evidence and current result

The reviewed original article establishes the supported extensions, path-based
skip rule, copy order, partial-failure behavior, rebuild setting, log, and
success prompt. The current Rust implementation has focused model tests for
copy, no-copy, recursive examples, log creation, and rebuild requests. The
desktop route is blocked because the application supplies no import request;
therefore, its visible Go button remains disabled.

- [Rust implementation](../../../crates/tiara-ui/src/select_tina_folder/mod.rs)
- [Go control article](../../ui-controls/frmselecttinafolder/btnok-facb2736eb.md)
- [Caller control article](../../ui-controls/schematiceditor/importuserlibs-c355d14e3b.md)

## Reset

Remove only the test-owned destination files, log, and directories. Restore the
test INI from its copy. Do not touch a real TINA installation or user circuit.

## Later integration test

Cite `TINA-FOLDER-GO-001`. Use the real menu, list, checkbox, and Go button.
Assert visible status, button state, exact destination files, log lines, INI
state, partial failure, and unchanged circuit state.
