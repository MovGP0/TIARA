# About TINA > OK (OkPressed)

| Field | Value |
| --- | --- |
| Scenario | `ABOUT-OK-001` |
| Window / tab | `about_box` |
| Review | Draft |
| Integration | Not derived |
| Defect | None filed; verify host closure before classifying a defect. |

## Setup

Open Help > About from a circuit containing a known resistor. Record the circuit data and active document before opening the About tab/window.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Click the visible OK button.
2. Inspect the application tab/window state and active circuit.
3. Open About again and activate OK with the keyboard after giving the button focus.

## Expected results

- The About surface closes and the caller remains available.
- The circuit is unchanged and no undo entry is added.
- The keyboard activation uses the actual button and has the same close effect.

## Variants

Opening and closing About twice must work. Do not click dedication links in this close test. A close_requested flag alone is insufficient: the application must actually remove or close the About surface.

## Evidence and current result

Source-derived draft. about_box::view creates one OK button and update sets close_requested. application::handle forwards the message, but its About arm does not itself close the tab. Host closure and original TINA behavior were not tested in this session.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/about_box/mod.rs](../../../crates/tiara-ui/src/about_box/mod.rs)
- [crates/tiara-ui/src/application.rs](../../../crates/tiara-ui/src/application.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `ABOUT-OK-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
