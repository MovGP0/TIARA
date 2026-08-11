# Xilinx ISE...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.DownloadtoFPGACard1.mnExportToISE |
| Control class | TMenuItem |
| Caption | Xilinx ISE... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnExportToISEClick |
| Handler address | 01c9b0c0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.DownloadtoFPGACard1.mnExportToISE` |
| Handler node | `function:01c9b0c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Xilinx ISE..."] -->|OnClick| handler["FUN_01c9b0c0"]
    handler --> call1["FUN_01c9b4f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9B0C0__FUN_01c9b0c0.c](../../../DecompiledSources/Tina16/functions/0000000001C9B0C0__FUN_01c9b0c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTM.DownloadtoFPGACard1.mnExportToISE.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c9b4f0` — FUN_01c9b4f0

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
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
