# lLink

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LLMInterfaceInstall |
| Component path | LLMInterfaceInstall.lLink |
| Control class | TLabel |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lLinkClick |
| Handler address | 01a2e3f0 |
| Graph node | `resource:dfm:LLMInterfaceInstall/LLMInterfaceInstall.lLink` |
| Handler node | `function:01a2e3f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["lLink"] -->|OnClick| handler["FUN_01a2e3f0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00416740"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["FUN_0065b870"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A2E3F0__FUN_01a2e3f0.c](../../../DecompiledSources/Tina16/functions/0000000001A2E3F0__FUN_01a2e3f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LLMInterfaceInstall.lLink.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416740` — FUN_00416740
- `function:0064dd90` — VCL control Unicode text reader
- `function:0065b870` — FUN_0065b870

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
