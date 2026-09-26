# Numerical format & Precisions > Set Default (SetDefault)

| Field | Value |
| --- | --- |
| Scenario | `NUMFMT-DEFAULT-001` |
| Window / tab | `numerical_format` |
| Review | Reviewed 2026-09-26 |
| Integration | Derived in `numerical_format` tests |
| Defect | None. |

## Setup

Open from an interpreter with nondefault settings. Record the saved values and the current component-value permission. Change several visible controls without accepting them.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Click Set Default.
2. Inspect every numerical and mathematical control.
3. Inspect the component-value permission checkbox.
4. Click Cancel, reopen the dialog, and compare with the initial saved settings.
5. Repeat the default action, click OK, and reopen.

## Expected results

- Visible defaults are SCL, RAD, ALGEBRIC, j, precision 4, differentiation step 0.01 and integration subdivisions 100.
- Set Default restores the stored component-value permission rather than inventing a different permission.
- Set Default alone does not commit the staged numerical/math record to the caller. Cancel preserves the original caller settings.
- Accepting the defaults commits them, subject to the separately tested OK and host-close path.

## Variants

Click Set Default twice; the second click must be harmless. Test both initial permission values. Original TINA reset behavior must be checked before this source-derived draft is approved.

## Evidence and current result

Source review confirms that `set_defaults` replaces staging and reloads the
controls. It does not update the caller or the stored component-value
permission. Automated coverage verifies these boundaries. The current Windows
computer-use helper cannot target the native TIARA window, so live comparison
with TINA is still unavailable.

- [crates/tiara-ui/src/numerical_format/mod.rs](../../../crates/tiara-ui/src/numerical_format/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Automated coverage

The test that cites `NUMFMT-DEFAULT-001` verifies the default staging values,
unchanged caller values, and unchanged stored permission.
