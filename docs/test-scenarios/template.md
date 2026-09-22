# <Control caption> — <stable scenario ID>

| Field | Value |
| --- | --- |
| Window / tab | <owning window and tab> |
| Control | <stable control key, caption and actual input route> |
| Review | Draft |
| Integration | Not derived |
| Requirement basis | <original observation, source evidence or TIARA requirement> |
| TINA documentation | <title, edition, section, printed/PDF page and URL; or explicit gap> |
| Defect | <Bead ID or none> |

## Setup

Name the disposable fixture, dependencies, focus, active tool, selection,
document history and settings. State how to reach the window through the app.

## Actions and expected results

1. State a concrete user input.
2. State the next input after the previous result is checked.

List observable output and document/caller effects. Include what must not
change. Use exact expected values or an independently derived relationship.
Do not write only "works correctly" or "calls the handler".

## Variants

Specify enabled/disabled states, invalid input, repeated activation, cancellation,
keyboard routing, focus and relevant display sizes. Mark non-applicable variants.

## Evidence and current result

Link the relevant Rust view, application route, recovered control article and
original documentation. Separate observed results from intended outcomes.
Mark unresolved behavior explicitly. Record result, environment and date.

## Reset

Restore the initial settings and discard only this test's temporary work.

## Later integration test

Cite this ID, activate the actual control route and assert the expected visible
and document/caller changes. Do not derive the test until this scenario is
reviewed and the expected behavior is resolved.
