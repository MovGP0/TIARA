# &Noise Analysis...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MINoiseAnalysis |
| Control class | TMenuItem |
| Caption | &Noise Analysis... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MINoiseAnalysisClick |
| Handler address | 01533ae0 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MINoiseAnalysis` |
| Handler node | `function:01533ae0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Noise Analysis..."] -->|OnClick| handler["FUN_01533ae0"]
    handler --> call1["FUN_013d8d70"]
    handler --> call2["FUN_014f6590"]
    handler --> call3["FUN_0152fca0"]
    handler --> call4["FUN_0152fd80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001533AE0__FUN_01533ae0.c](../../../DecompiledSources/Tina16/functions/0000000001533AE0__FUN_01533ae0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MINoiseAnalysis.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:013d8d70` — FUN_013d8d70
- `function:014f6590` — FUN_014f6590
- `function:0152fca0` — FUN_0152fca0
- `function:0152fd80` — FUN_0152fd80

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
