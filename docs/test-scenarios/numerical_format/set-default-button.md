# Numerical format & Precisions > Set Default (SetDefault)

| Field | Value |
| --- | --- |
| Scenario | `NUMFMT-DEFAULT-001` |
| Window / tab | `numerical_format` |
| Review | Draft |
| Integration | Not derived |
| Defect | None filed. |

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

Source-derived draft from set_defaults, load_controls_from_staging and the default records. No live numerical-format comparison was performed in this session.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/numerical_format/mod.rs](../../../crates/tiara-ui/src/numerical_format/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `NUMFMT-DEFAULT-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
