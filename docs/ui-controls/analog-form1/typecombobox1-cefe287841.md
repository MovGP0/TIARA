# TypeComboBox1

> Analysis status: Complete. The recovered source, executable bytes, call graph, DFM events, and related standard-OPAMP selection path establish the no-op click and the separate change behavior.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Form caption | Filter design |
| Parent group | OPAMP type |
| Component path | Analog_form1.OpampTypeGroupBox7.TypeComboBox1 |
| Control class | TComboBox |
| Style | `csDropDownList` |
| Initial visibility | false |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| DFM list items | Not present; the Standard opamp path fills the list at run time. |
| Click handler name | TypeComboBox1Click |
| Click handler address | 01235720 |
| Change handler name | TypeComboBox1Change |
| Change handler address | 01235550 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.OpampTypeGroupBox7.TypeComboBox1` |
| Click handler node | `function:01235720` |
| Graph layer | UI |

## What happens when clicked

The application-specific `OnClick` handler does nothing. `FUN_01235720`
returns immediately. Its complete recovered body has no statement before the
return. At address `01235720`, the mapped executable contains one `C3` return
instruction followed by `CC` padding. The graph also contains no outgoing call
edge from this handler.

The handler therefore does not read the selected item, update a filter or OPAMP
model, rebuild another list, validate a value, or show an error. Normal VCL
combo-box processing can still open and close the drop-down. That framework
behavior occurs outside this empty application event method.

## Selection changes use another event

The DFM binds the same control's `OnChange` event to `FUN_01235550`. This is the
function that applies a changed selection. The distinction is important: a
click that does not change the selected item reaches only the no-op click path,
while a changed list selection can also cause the separate change path.

The control is a `csDropDownList`, so the user selects a supplied item instead
of entering arbitrary text. The DFM contains no static items. The **Standard
opamp** handler fills the list at run time, selects item `0`, and also fills the
standard model selector `OpampComboBox1`.

When `TypeComboBox1Change` runs, it reads `TypeComboBox1.ItemIndex`:

- Index `-1`: it stores `-1` in the recovered current-type index global, then
  returns without changing the saved type text or the standard model list.
- Valid index: it copies the selected type text to shared state and writes that
  text back to the combo. It then rebuilds `OpampComboBox1.Items` for the
  selected type, reads item `0`, sets that item as the displayed standard OPAMP
  model, and selects index `0`.

This means that a type change resets the standard model choice to the first
model in the newly rebuilt list. The change handler does not preserve the
previous model selection across types and does not try to match its text in the
new list.

## Interaction flow

```mermaid
flowchart TD
    interaction["Use TypeComboBox1"] --> click["OnClick: FUN_01235720"]
    click --> immediate["Return immediately<br/>no application state change"]
    interaction --> changed{"Did the list selection change?"}
    changed -->|No| unchanged["No OnChange work"]
    changed -->|Yes| change["OnChange: FUN_01235550<br/>read ItemIndex"]
    change --> valid{"ItemIndex is -1?"}
    valid -->|Yes| noSelection["Cache index -1<br/>keep saved type text and model list"]
    valid -->|No| saveType["Save selected type text"]
    saveType --> rebuild["Clear and rebuild OpampComboBox1<br/>for the selected type"]
    rebuild --> first["Display and select model item 0"]
    rebuild -. "Empty or invalid generated list" .-> error["No local recovery<br/>item access can raise an exception"]

    classDef noOp fill:#f5f5f5,stroke:#757575,color:#424242,stroke-dasharray: 5 5;
    classDef changedState fill:#e8f5e9,stroke:#2e7d32,color:#1b1b1b;
    classDef failure fill:#ffebee,stroke:#c62828,color:#1b1b1b;
    class immediate,unchanged,noSelection noOp;
    class saveType,rebuild,first changedState;
    class error failure;
```

## Handler and change evidence

- Empty click handler: [FUN_01235720](../../../DecompiledSources/Tina16/functions/0000000001235720__FUN_01235720.c)
- Selection-change handler: [FUN_01235550](../../../DecompiledSources/Tina16/functions/0000000001235550__FUN_01235550.c)
- Standard-opamp setup: [FUN_01233b60](../../../DecompiledSources/Tina16/functions/0000000001233B60__FUN_01233b60.c)
- Selected-type model-list builder: [FUN_0172c930](../../../DecompiledSources/Tina16/functions/000000000172C930__FUN_0172c930.c)
- Run-time type-list builder: [FUN_0172c500](../../../DecompiledSources/Tina16/functions/000000000172C500__FUN_0172c500.c)
- Standard model change handler: [FUN_01234590](../../../DecompiledSources/Tina16/functions/0000000001234590__FUN_01234590.c)
- Recovered click role: No-op click event stub for the Analog standard-OPAMP type selector.
- Likely Delphi click method: `TAnalog_form1.TypeComboBox1Click`.
- Click complexity: simple
- Distinct click-handler outgoing calls: 0

The source and graph establish these separate event responsibilities:

- `FUN_01235720` has no call edge and no state access.
- `FUN_01235550` reads the selected type index and item text, rebuilds the
  standard model item list, and selects its first item.
- `FUN_01233b60` supplies the run-time type items and the initial type and model
  selections when the Standard opamp path is initialized.

## Resource evidence

- The parent group caption is **OPAMP type**. The sibling radio controls are
  **Ideal Opamp**, **Standard opamp**, and **Spice opamp**.
- `TypeComboBox1` is initially hidden in the DFM. The recovered sources used for
  this article do not establish which later path makes it visible.
- The DFM supplies no caption, hint, text, list items, glyph, picture, image
  index, or action for this control.
- No extracted glyph is available.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: **Vnn** at distance 29.
- Rank 2: **Vpp** at distance 61.

These labels belong to the adjacent supply editors. Neither label identifies
the type selector or changes the empty click-handler result.

## No-op, boundary, and error behavior

- Repeated click: the application handler remains a no-op. It does not compare
  state because it reads no state.
- Click without a selection change: there is no application update from this
  control's recovered event methods.
- Change with index `-1`: the change handler records the invalid index but does
  not clear the saved type text or standard model list.
- Change with a valid index: the handler assumes the rebuilt standard model
  list has item `0`. It performs no item-count check before that access.
- The click and change handlers contain no local exception handler, error
  message, modal dialog, OK branch, or Cancel branch. If list or data access in
  the change handler fails, the exception leaves before the first standard
  model is selected.
- These handlers update only in-process control and shared selection state. No
  file, registry, database-write, or other durable persistence call is present.

## Analysis limits

- The source proves that the type selection filters or groups the standard
  OPAMP model items. The recovered item strings and the original Delphi field
  names for the shared index and text globals are not available.
- The no-op result applies only to `TypeComboBox1.OnClick`. The control's
  separate `OnChange` event has the model-list behavior described above.
- The initial DFM visibility is known, but its later visibility transition is
  not established by the recovered handlers inspected here.
