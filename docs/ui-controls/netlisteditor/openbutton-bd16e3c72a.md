# Open

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.BtnPanel.OpenButton |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Open |
| Text | Not present in the recovered resource. |
| Handler name | MIOpenClick |
| Handler address | 01531f80 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.BtnPanel.OpenButton` |
| Handler node | `function:01531f80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Open"] -->|OnClick| handler["FUN_01531f80"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00724270"]
    handler --> call3["FUN_0152fa50"]
    handler --> call4["FUN_01530bb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001531F80__FUN_01531f80.c](../../../DecompiledSources/Tina16/functions/0000000001531F80__FUN_01531f80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: NetlistEditor.BtnPanel.OpenButton.OnClick, NetlistEditor.MainMenu.MFile.MIOpen.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00724270` — FUN_00724270
- `function:0152fa50` — FUN_0152fa50
- `function:01530bb0` — FUN_01530bb0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0278_NetlistEditor_NetlistEditor_BtnPanel_OpenButton_Glyph_Data.png`](../../../glyph/0278_NetlistEditor_NetlistEditor_BtnPanel_OpenButton_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
