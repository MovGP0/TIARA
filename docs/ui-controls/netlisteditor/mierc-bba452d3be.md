# ERC

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MIERC |
| Control class | TMenuItem |
| Caption | ERC |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MIERCClick |
| Handler address | 015325c0 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MIERC` |
| Handler node | `function:015325c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["ERC"] -->|OnClick| handler["FUN_015325c0"]
    handler --> call1["FUN_0152fca0"]
    handler --> call2["FUN_0152fd80"]
    handler --> call3["FUN_016cedb0"]
    handler --> call4["FUN_019a9ed0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015325C0__FUN_015325c0.c](../../../DecompiledSources/Tina16/functions/00000000015325C0__FUN_015325c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MIERC.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0152fca0` — FUN_0152fca0
- `function:0152fd80` — FUN_0152fd80
- `function:016cedb0` — FUN_016cedb0
- `function:019a9ed0` — FUN_019a9ed0

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
