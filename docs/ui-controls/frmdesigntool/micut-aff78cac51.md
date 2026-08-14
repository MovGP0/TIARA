# Cut

> Analysis status: Complete. The command expands the editor area and cuts its current selection.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.mnMainMenu.mnEdit.miCut |
| Control class | TMenuItem |
| Caption | Cut |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miCutClick |
| Handler address | 01498fb0 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.mnMainMenu.mnEdit.miCut` |
| Handler node | `function:01498fb0` |
| Graph layer | UI |

## What happens when clicked

The handler selects the advanced editor layout, then runs the SynEdit cut command. A read-only editor or empty selection is a no-op. Otherwise the command copies text and selection-mode data to the clipboard and deletes the selection inside one Undo group.

## Click flow

```mermaid
flowchart TD
    control["Choose Cut"] --> expand["Select advanced editor layout"]
    expand --> allowed{"Editor writable and selection non-empty?"}
    allowed -->|No| stop["Make no editor change"]
    allowed -->|Yes| handler["Copy selection and delete it in one Undo group"]
    handler --> call1["FUN_00bf1e50"]
    handler --> call2["FUN_0149a5d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001498FB0__FUN_01498fb0.c](../../../DecompiledSources/Tina16/functions/0000000001498FB0__FUN_01498fb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.mnMainMenu.mnEdit.miCut.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00bf1e50` — FUN_00bf1e50
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
- Clipboard publication occurs before deletion in the recovered SynEdit helper.
