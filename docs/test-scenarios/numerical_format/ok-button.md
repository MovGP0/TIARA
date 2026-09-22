# Numerical format & Precisions > OK (Accept)

| Field | Value |
| --- | --- |
| Scenario | `NUMFMT-OK-001` |
| Window / tab | `numerical_format` |
| Review | Draft |
| Integration | Not derived |
| Defect | None filed; validation and caller propagation need live investigation. |

## Setup

Open from an interpreter with known saved numerical settings. Record all values. Use valid changed values: FIX, DEG, POLAR, i, displayed precision 6, differentiation step 0.02, integration subdivisions 200.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Enter the changed values using the visible controls.
2. Click OK.
3. Return to the caller and reopen Numerical format & Precisions.
4. Reset the initial fixture. Enter precision 13 and click OK.
5. Repeat from a fresh fixture with a nonnumeric precision, then with a valid precision and an invalid differentiation step.

## Expected results

- For valid input, all edited numerical and mathematical values reach the caller. The dialog/tab closes, and reopening shows the accepted settings.
- Precision above 12 or invalid numeric text produces a clear validation error; the rejected close attempt does not hide that error.
- Record exactly which values are committed on each invalid-input path before making automated assertions. Do not assume validation is atomic.

## Variants

The recovered logic can commit the numerical record before a later math error and can change component-value permission before the precision-limit check. Compare these partial-commit cases with TINA and make an explicit compatibility decision. Test Enter only after the default-button route is verified.

## Evidence and current result

Source-derived draft. ok_click preserves partial-commit ordering; form_close_query rejects one close when validation_error is set. The Accept update arm sets close_requested even when ok_click fails. Host validation/close behavior and live TINA parity are not yet verified.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/numerical_format/mod.rs](../../../crates/tiara-ui/src/numerical_format/mod.rs)
- [crates/tiara-ui/src/application.rs](../../../crates/tiara-ui/src/application.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `NUMFMT-OK-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
