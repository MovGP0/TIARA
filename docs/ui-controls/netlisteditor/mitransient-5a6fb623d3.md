# &Transient...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MITransient |
| Control class | TMenuItem |
| Caption | &Transient... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MITransientClick |
| Handler address | 01533570 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MITransient` |
| Handler node | `function:01533570` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Transient..."] -->|OnClick| handler["FUN_01533570"]
    handler --> call1["FUN_01349310"]
    handler --> call2["FUN_013d2f60"]
    handler --> call3["FUN_013e5a30"]
    handler --> call4["FUN_0152fca0"]
    handler --> call5["FUN_0152fd80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001533570__FUN_01533570.c](../../../DecompiledSources/Tina16/functions/0000000001533570__FUN_01533570.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MITransient.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:01349310` — FUN_01349310
- `function:013d2f60` — FUN_013d2f60
- `function:013e5a30` — FUN_013e5a30
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
