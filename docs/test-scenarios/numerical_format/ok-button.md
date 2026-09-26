# Numerical format & Precisions > OK (Accept)

| Field | Value |
| --- | --- |
| Scenario | `NUMFMT-OK-001` |
| Window / tab | `numerical_format` |
| Review | Reviewed 2026-09-26 |
| Integration | Derived in `numerical_format` and `application` tests |
| Defect | `TIARA-d4qddlz` fixed validation-controlled host closure. |

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

Source review confirms that `ok_click` preserves the recovered partial-commit
order. `form_close_query` rejects a close when validation fails. The fixed
Accept route now requests host closure only after both checks succeed.

Automated tests cover valid caller updates, valid host closure, precision 13
remaining visible with its first error, and the recovered partial-commit cases.
The current Windows computer-use helper cannot target the native TIARA window,
so live comparison with TINA is still unavailable. This limit does not change
the reviewed Rust behavior or the host-route result.

- [crates/tiara-ui/src/numerical_format/mod.rs](../../../crates/tiara-ui/src/numerical_format/mod.rs)
- [crates/tiara-ui/src/application.rs](../../../crates/tiara-ui/src/application.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Automated coverage

Tests that cite `NUMFMT-OK-001` exercise the Accept message from the rendered OK
button, caller updates, validation, and the application dock state.
