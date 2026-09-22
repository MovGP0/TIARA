# UI test scenarios

Write and review the Markdown scenario before deriving an integration test.

This catalogue starts with the 57 windows in `WindowKind::ALL`. Each registered
window has a folder. Put scenarios for an internal tab in a named child folder,
not in a single application-wide file. Shared shell and circuit-tab controls
also need explicit control identities; window folders alone do not cover them.

This first set contains 15 scenario drafts and one reviewed SVG-only scenario
in three windows, including the Basic
component tab. The other window folders provide source navigation only.
They are not completed test specifications. Full button and tab coverage is
still open under Bead **TIARA-rdfclo1**, with inventory work in
**TIARA-rdfclo1.2**. Icon asset and override regression tests are derived from
`SE-VISUAL-SVG-ONLY-001`; full UI integration coverage is still pending.

## Use the catalogue

- [Window index](windows.md)
- [Scenario template](template.md)
- [Shared execution rules](execution-rules.md)
- [Official TINA documentation and page references](tina-documentation.md)
- [Schematic editor](schematic_editor/README.md)
- [About](about_box/README.md)
- [Numerical format](numerical_format/README.md)

Task ownership and completion status live in Beads. These Markdown files are
test specifications, not a replacement task tracker. Existing
[control articles](../ui-controls/README.md) describe recovered handlers; link
them as evidence, but do not count them as executable user scenarios.

## Coverage rule

Give every button, menu command, toolbar action and tab-specific action a stable
control identity and a scenario ID. Include data-driven and repeated controls,
native file dialogs, confirmation buttons, shell tab selection and tab close.
A shared procedure can serve multiple controls only if an explicit instance
table lists every control and its distinct parameters and expected result.
Do not treat one Resistor case as coverage of the full component palette.

For each window, compare its visible controls with its Rust view builders,
shared controls, data-driven models and original resource evidence. A text
search for `button(` is not a complete inventory. A source-only control that
the application does not expose must be marked as such, not reported as tested.

## Evidence and review

Separate intended behavior, original TINA observations, source evidence and
current TIARA results. A caption or current implementation alone does not prove
correct behavior. Give the observation date and environment. Record unknowns
and missing prerequisites without inventing expected results.

Use official TINA manuals and installed Help to derive the expected behavior.
For each documented rule, cite the edition, section, printed page and PDF page
where available. Check the actual page; do not rely on a table-of-contents page
number. If documentation and live behavior disagree, record both and review the
compatibility decision. Do not infer desktop behavior from TINACloud manuals.

All initial scenarios are **Draft**. Approve a scenario only when its control,
setup, actions, expected states, negative cases and evidence are sufficient.
Approval does not require a current TIARA pass: a reviewed scenario can describe
a known defect. Do not derive assertions from an unresolved expected outcome.

## Integration test boundary

Each later integration test must cite a scenario ID and exercise the real
control route. Click the toolbar button, use the menu, or send the keyboard
event through the application. Assert the visible result and the resulting
document/caller state. Do not replace these inputs with direct handler calls.

In particular, `MenuCommand("ToolEdit")` does not test a toolbar that emits
`ToolCommand("ToolEdit")`. A direct Undo handler test cannot detect a menu or
shortcut that is permanently disabled.

A test cannot pass solely because a message was sent, a flag was set, or a
screenshot was produced. Verify the output, including host tab/window closure,
selection, document history, wire connectivity and persistence where relevant.
