# Shared execution rules

## Environment

Record the TIARA build, original TINA edition/version, operating system, theme,
window size, display scale, circuit zoom and optional assets. Record whether
`TIARA_TINA_HOME`, `TIARA_GLYPHS` and `TIARA_SPICE` are set, without exposing
private path contents or credentials. Missing hardware, library or simulator
support is a named prerequisite failure, not a silent pass.

## Isolation and reset

Use a new disposable circuit or a copied fixture in a task-specific `.temp/`
folder. Never edit, delete, save over or undo a user's open circuit. Coordinate
pointer/keyboard use on the shared desktop. Confirm the target window before
input. Start each independent route from the specified initial state.

After the scenario, discard only that scenario's unsaved circuit, restore any
changed application settings, close its dialogs and remove only its temporary
files. Preserve unrelated files and windows. A test that changes the clipboard
must declare that effect and restore the prior test-owned state where possible.

## Procedure

Exercise pointer and keyboard routes independently. Record button captions and
stable control keys; do not make screen coordinates the permanent identity.
Check enabled/disabled state before activation and after every state change.
Include repeat activation, cancellation and invalid inputs when applicable.

For menus, check the complete pointer path from root through every submenu.
For schematic editing, check both rendered geometry and model connectivity.
For dialogs, check the caller's state and actual closure, not only a local flag.
For Save/Open, use disposable files and verify bytes or parsed content after
reopening. Do not send print jobs, make external requests, operate hardware or
change licensing state as an incidental button test.

## Results

Use separate fields for requirement review and execution result:

- Review: Draft or Reviewed, with reviewer and date.
- Result: Not run, Pass, Fail, or Blocked, with date and build.
- Evidence: original observation, recovered source, documented requirement,
  or a clearly named combination.
- Defect: Bead ID and the failed assertion.

If a prerequisite action is broken, record Blocked. Do not bypass the user path
and report an integration pass. Do not use broken TIARA output as the expected
reference image. Keep proprietary original assets and screenshots outside
committed test fixtures.
