# F=true

> Analysis status: Source and call-path review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | tables_form |
| Component path | tables_form.SpecialBox.RadioF1 |
| Control class | TRadioButton |
| Caption | F=true |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | RadioF1Click |
| Handler address | 011acff0 |
| Graph node | `resource:dfm:tables_form/tables_form.SpecialBox.RadioF1` |
| Handler node | `function:011acff0` |
| Graph layer | UI |

## What happens when clicked

The handler prepares the constant-true preset. It clears the prior true-row count, hides the Symmetry number group, and records every data-row index as true. It clears the loaded-table flag and sets help context `2400`. It does not repopulate the grid. The Fill action applies the prepared row list later.

## Click flow

```mermaid
flowchart TD
    control["F=true"] -->|OnClick| handler["FUN_011acff0"]
    handler --> clear["Clear prior true-row count"]
    clear --> hide["Hide Symmetry number group"]
    hide --> rows["Record every data row as true"]
    rows --> topic["Set help context to 2400"]
    topic --> wait["Wait for Fill to rebuild grid"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011ACFF0__FUN_011acff0.c](../../../DecompiledSources/Tina16/functions/00000000011ACFF0__FUN_011acff0.c)
- Recovered role: Constant-true truth-table preset selector
- Current graph summary: Selects every truth-table data row, hides symmetry controls, and prepares the constant-true preset for Fill.
- Current graph behavior: Resets the true-row count, adds every grid data-row index to the selected list, clears the loaded-table flag, and sets help context `2400`.
- Current graph evidence: The resource caption is `F=true`. The handler calls the annotated VCL visibility setter with the Symmetry number group and false, then loops over `StringGrid1.RowCount - 1` and records each zero-based row index.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- This handler does not write grid cells. The separate Fill handler consumes the prepared state.
