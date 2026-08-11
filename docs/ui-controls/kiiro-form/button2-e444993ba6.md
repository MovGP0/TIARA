# Button2

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | kiiro_form |
| Component path | kiiro_form.Button2 |
| Control class | TButton |
| Caption | Button2 |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Button2Click |
| Handler address | 01197d10 |
| Graph node | `resource:dfm:kiiro_form/kiiro_form.Button2` |
| Handler node | `function:01197d10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Button2"] -->|OnClick| handler["FUN_01197d10"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_004170c0"]
    handler --> call4["FUN_005fc860"]
    handler --> call5["VCL control Unicode text reader"]
    handler --> call6["FUN_0064e030"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001197D10__FUN_01197d10.c](../../../DecompiledSources/Tina16/functions/0000000001197D10__FUN_01197d10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: kiiro_form.Button2.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:004170c0` — FUN_004170c0
- `function:005fc860` — FUN_005fc860
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064e030` — FUN_0064e030

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
