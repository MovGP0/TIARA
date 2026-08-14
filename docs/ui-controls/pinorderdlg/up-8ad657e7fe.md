# Move the selected pin one row up

> Analysis status: Source and call path reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PinOrderDlg |
| Component path | PinOrderDlg.Up |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Handler name | UpClick |
| Handler address | 01781830 |
| Graph node | `resource:dfm:PinOrderDlg/PinOrderDlg.Up` |
| Handler node | `function:01781830` |
| Graph layer | UI |

## What happens when clicked

The handler gets the current item index from `PinOrderDlg.lbPins`. If the index is greater than zero, it exchanges that list entry with the entry at the preceding index. It then selects the preceding index. Thus, the moved pin remains selected after it moves up by one row.

The click is a no-op when there is no selection or when the selected pin is already at the top. It does not move more than one row, sort the list, change a pin name, or edit a pin property.

The list is owner-drawn. Its draw handler gets the object that is associated with each row and uses object flag bit `0x04` at offset `+0x145` to select one of two drawing states. The dialog's idle handler uses the same bit to control whether the arrow buttons are enabled. For Up, it disables the button at the top, without a selection, and when a flagged current row is directly below an unflagged row. This prevents a normal UI click from crossing that recovered category boundary.

`UpClick` itself does not test the object flag or the button's enabled state. A direct programmatic handler call can therefore exchange any adjacent rows that pass the index test.

## Working-state boundary

This handler changes the order in the dialog's `lbPins` list only. It has no direct model, file, registry, or device call. The DFM provides separate `bkOK` and `bkCancel` buttons without recovered click handlers. The recovered graph does not connect this list exchange to the caller's post-dialog commit, so the exact persistence of the accepted order remains outside the recovered handler boundary.

## Click flow

```mermaid
flowchart TD
    click["Click the Up arrow"] --> selected["Read lbPins.ItemIndex"]
    selected --> movable{"Selected index is greater than zero?"}
    movable -->|No| noop["Leave the list unchanged"]
    movable -->|Yes| exchange["Exchange the selected row with the preceding row"]
    exchange --> reselection["Select the preceding index"]
    reselection --> result["The same pin is selected one row higher"]
```

## Handler evidence

- [Up click handler](../../../DecompiledSources/Tina16/functions/0000000001781830__FUN_01781830.c): tests the selected index, exchanges indices `i` and `i - 1`, and selects `i - 1`.
- [Idle-state handler](../../../DecompiledSources/Tina16/functions/0000000001781920__FUN_01781920.c): disables Up at the list boundary, without a selection, and at the recovered object-flag boundary.
- [Owner-draw handler](../../../DecompiledSources/Tina16/functions/0000000001781AB0__FUN_01781ab0.c): reads the object associated with each list row and changes its drawing state from object flag bit `0x04`.
- [Form-create handler](../../../DecompiledSources/Tina16/functions/0000000001781BB0__FUN_01781bb0.c): configures list drawing dimensions but does not perform the row move.

The knowledge graph has no direct call edge because the handler invokes the list box and its item collection through Delphi virtual methods.

## Resource evidence

- Form caption: `Pin Order`.
- The list control is `PinOrderDlg.lbPins`, class `TListBox`, with `lbOwnerDrawFixed` style.
- Instruction label: `Select and move with the arrows the pin to its desired place.` The remaining label text explains that unnamed pins appear as `(pin X)` and must be named in the editor.
- NumGlyphs: `2`.
- [Extracted Up glyph](../../../glyph/0305_PinOrderDlg_PinOrderDlg_Up_Glyph_Data.png): contains the recovered upward-arrow states.
- UI evidence: [Recovered DFM resource data](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json).

The label and glyph agree with the direction, but the source proves the exact one-row exchange and selection behavior.

## Analysis limits

- Object flag bit `0x04` controls the recovered boundary and draw state. Its Delphi field name and category name are not recovered.
- The post-OK consumer that copies the working list order to the pin model is not connected in the recovered graph.
- The handler has no local exception recovery or rollback around the virtual list operations.
