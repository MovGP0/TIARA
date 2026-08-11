# Send

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | TinaDDEMgr |
| Component path | TinaDDEMgr.SendBtn |
| Control class | TButton |
| Caption | Send |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SendBtnClick |
| Handler address | 017fe650 |
| Graph node | `resource:dfm:TinaDDEMgr/TinaDDEMgr.SendBtn` |
| Handler node | `function:017fe650` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Send"] -->|OnClick| handler["FUN_017fe650"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_004144d0"]
    handler --> call3["FUN_00415dd0"]
    handler --> call4["VCL control Unicode text reader"]
    handler --> call5["FUN_017fe450"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017FE650__FUN_017fe650.c](../../../DecompiledSources/Tina16/functions/00000000017FE650__FUN_017fe650.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: TinaDDEMgr.SendBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004144d0` — FUN_004144d0
- `function:00415dd0` — FUN_00415dd0
- `function:0064dd90` — VCL control Unicode text reader
- `function:017fe450` — FUN_017fe450

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
