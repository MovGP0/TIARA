# Delete

> Analysis status: Complete. The command expands the editor area and deletes through the SynEdit selection command.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.mnMainMenu.mnEdit.miDelete |
| Control class | TMenuItem |
| Caption | Delete |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miDeleteClick |
| Handler address | 01499070 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.mnMainMenu.mnEdit.miDelete` |
| Handler node | `function:01499070` |
| Graph layer | UI |

## What happens when clicked

The handler selects the advanced editor layout and calls the SynEdit selection-operation routine with mode `0`. That routine records the current selection and caret state, applies the mode-specific edit, and updates selection state. The recovered call supplies no confirmation and does not use the clipboard.

## Click flow

```mermaid
flowchart TD
    control["Choose Delete"] --> expand["Select advanced editor layout"]
    expand --> capture["Capture selection and caret state"]
    capture --> handler["Apply SynEdit selection operation mode 0"]
    handler --> update["Update selection state"]
    handler --> call1["FUN_00c08be0"]
    handler --> call2["FUN_0149a5d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001499070__FUN_01499070.c](../../../DecompiledSources/Tina16/functions/0000000001499070__FUN_01499070.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.mnMainMenu.mnEdit.miDelete.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00c08be0` — FUN_00c08be0
- `function:0149a5d0` — FUN_0149a5d0

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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The recovered helper does not expose a Delphi enum name for operation mode `0`.
