# Numerical format & Precisions > Cancel (Cancel)

| Field | Value |
| --- | --- |
| Scenario | `NUMFMT-CANCEL-001` |
| Window / tab | `numerical_format` |
| Review | Draft |
| Integration | Not derived |
| Defect | None filed. |

## Setup

Open from an interpreter with known valid saved settings. Record numerical values, mathematical values and component-value permission. Do not click OK in this scenario.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Change every visible setting, including the permission checkbox.
2. Enter invalid text into a numeric field.
3. Click Cancel.
4. Reopen the dialog from the caller and inspect its settings.

## Expected results

- Cancel closes the surface without applying edits that have not been accepted.
- Invalid unaccepted text does not prevent cancellation.
- Reopening loads the original caller settings, not abandoned control values.
- No unrelated circuit edit, file write or undo entry occurs.

## Variants

Repeat after Set Default without clicking OK. Cancellation after a failed OK is a different case because the recovered handler can make partial commits; do not promise rollback of already committed values without evidence.

## Evidence and current result

Source-derived draft. Cancel sets close_requested without calling ok_click. Caller propagation, actual tab closure and TINA behavior remain unverified.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/numerical_format/mod.rs](../../../crates/tiara-ui/src/numerical_format/mod.rs)
- [crates/tiara-ui/src/application.rs](../../../crates/tiara-ui/src/application.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `NUMFMT-CANCEL-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
