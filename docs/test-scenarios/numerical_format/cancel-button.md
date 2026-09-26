# Numerical format & Precisions > Cancel (Cancel)

| Field | Value |
| --- | --- |
| Scenario | `NUMFMT-CANCEL-001` |
| Window / tab | `numerical_format` |
| Review | Reviewed 2026-09-26 |
| Integration | Derived in `numerical_format` and `application` tests |
| Defect | `TIARA-d4qddlz` fixed application host closure. |

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

Source review confirms that Cancel requests closure without calling `ok_click`.
Automated tests change valid and invalid controls, cancel the surface, and
verify that the caller value remains unchanged and the docked surface closes.
The current Windows computer-use helper cannot target the native TIARA window,
so live comparison with TINA is still unavailable.

- [crates/tiara-ui/src/numerical_format/mod.rs](../../../crates/tiara-ui/src/numerical_format/mod.rs)
- [crates/tiara-ui/src/application.rs](../../../crates/tiara-ui/src/application.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Automated coverage

Tests that cite `NUMFMT-CANCEL-001` exercise the Cancel message from the
rendered button, unchanged caller data, and the application dock state.
