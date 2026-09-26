# Include Examples and Designs

| Field | Value |
| --- | --- |
| Scenario | `TINA-FOLDER-EXAMPLES-001` |
| Window / tab | `select_tina_folder` |
| Control | `chkbxImportExamples`; **Include Examples and Designs** checkbox |
| Review | Reviewed by Codex on 2026-09-26 |
| Integration | Not derived |
| Result | Not run |
| Requirement basis | Recovered Go handler and current Rust import inventory |
| TINA documentation | TINA Design Suite v16 User Manual, 2025: no section or page for this migration dialog was found in the 2026-09-26 search. |
| Defect | `TIARA-v86ktpa` blocks the complete host route. |

## Setup

Use an earlier-installation fixture with one missing library file, one nested
`User Examples` `.tsc` file, and its `.tpc` companion. Give the current
installation empty test-owned destination folders. Record the initial checkbox
state. Follow the [shared execution rules](../execution-rules.md).

## Actions and expected results

1. Select the earlier installation.
2. Clear **Include Examples and Designs** and click **Go!**.
3. The supported missing library file is copied. The `.tsc` and `.tpc` example
   files are not copied.
4. Reset the destination and reopen the surface. Select the same installation.
5. Select **Include Examples and Designs** and click **Go!**.
6. The supported missing library file, nested `.tsc` file, and existing `.tpc`
   companion are copied to the matching current folders.

The checkbox changes only the recursive example-and-design scan. It does not
disable the catalog, footprint, model, or SPICE-library scans.

## Variants

- A `.tsc` file without a `.tpc` companion is still imported.
- A `.tpc` file is added as a companion only when its matching `.tsc` file is
  found by the recursive scan.
- Repeated checkbox changes before Go use the final visible value.
- Changing the checkbox while a copy is active is not an approved route. The
  current view leaves the checkbox active, so live behavior needs verification.

## Evidence and current result

The original Go handler includes the recursive example scan only when the
checkbox is selected. The current Rust `build_inventory` implements the same
gate and has focused model tests. The checkbox is visible and sends
`IncludeExamplesChanged`. The complete desktop result is not runnable because
the current application does not expose installation selection or construct the
import request.

- [Rust implementation](../../../crates/tiara-ui/src/select_tina_folder/mod.rs)
- [Original Go control article](../../ui-controls/frmselecttinafolder/btnok-facb2736eb.md)

## Reset

Remove only the copied test files and their test-owned directories. Restore the
initial checkbox state. Do not change a user library or example folder.

## Later integration test

Cite `TINA-FOLDER-EXAMPLES-001`. Toggle the visible checkbox, activate the real
Go button, and compare the destination inventory for both checkbox states.
