# Open Library Import.log prompt

| Field | Value |
| --- | --- |
| Window / tab | `select_tina_folder` |
| Control | Dynamic **Yes** and **No** buttons after a completed import |
| Review | Reviewed by Codex on 2026-09-26 |
| Integration | Not derived |
| Result | Not run |
| Requirement basis | Reviewed original Go handler and current Rust prompt route |
| TINA documentation | TINA Design Suite v16 User Manual, 2025: no section or page for this migration dialog was found in the 2026-09-26 search. |
| Defect | `TIARA-v86ktpa` blocks the complete host route. |

## Control instances

| Scenario | Caption | Input | Expected result |
| --- | --- | --- | --- |
| `TINA-FOLDER-LOG-YES-001` | Yes | `OpenLogAnswered(true)` | Dismiss the prompt and start Notepad with the completed import's `Library Import.log`. |
| `TINA-FOLDER-LOG-NO-001` | No | `OpenLogAnswered(false)` | Dismiss the prompt without starting Notepad. |

## Setup

Use a test-owned import that copies at least one file and creates
`Library Import.log`. Replace or observe process launch so the test does not
open an uncontrolled program. Keep the log path and contents. Follow the
[shared execution rules](../execution-rules.md).

## Actions and expected results

1. Complete the import. The surface reports **Import completed** and shows
   **Open Library Import.log?** with Yes and No.
2. Click **No**. The prompt disappears. No process starts. The log stays on
   disk and the completed status stays visible.
3. Repeat from a fresh completed import. Click **Yes**. The prompt disappears
   and Notepad starts with the exact completed-import log path.
4. Inject a process-start failure on the Yes route. The prompt stays dismissed,
   and the surface shows the launch error instead of a false success state.

Neither button changes a copied file, rebuild setting, circuit, or undo history.

## Variants

- The prompt is not shown for **Nothing to copy** or a failed import.
- A repeated answer after the prompt is dismissed has no effect.
- Yes is the only answer that opens the log. Any original non-Yes result does
  not start Notepad.
- Enter, Escape, and prompt-focus behavior need live verification. Do not infer
  these routes from the button captions.

## Evidence and current result

The original handler starts `notepad.exe` only for modal result `mrYes`. The
current Rust surface shows explicit Yes and No buttons after a copied outcome.
No clears the pending answer. Yes starts Notepad through `StandardMigrationHost`.
A launch error changes the visible status to `Failed`. Focused model tests cover
the prompt state, but the full desktop route is blocked by the missing source
selection and request construction.

- [Rust implementation](../../../crates/tiara-ui/src/select_tina_folder/mod.rs)
- [Go control article](../../ui-controls/frmselecttinafolder/btnok-facb2736eb.md)

## Reset

Close only the test-started Notepad process. Remove the test-owned import log
and copied files. Restore the test INI. Do not close another Notepad window.

## Later integration test

Cite the instance ID. Reach the prompt through the real import route. Activate
the actual Yes or No button and assert prompt visibility, exact process launch,
error state, and unchanged imported data.
