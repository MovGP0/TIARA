# sbElf

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AssignElfHex |
| Component path | AssignElfHex.sbElf |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbElfClick |
| Handler address | 0106caf0 |
| Graph node | `resource:dfm:AssignElfHex/AssignElfHex.sbElf` |
| Handler node | `function:0106caf0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["sbElf"] -->|OnClick| handler["FUN_0106caf0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["VCL control text setter with change suppression"]
    handler --> call5["FUN_00724270"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000106CAF0__FUN_0106caf0.c](../../../DecompiledSources/Tina16/functions/000000000106CAF0__FUN_0106caf0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: AssignElfHex.sbElf.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:00724270` — FUN_00724270

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0021_AssignElfHex_AssignElfHex_sbElf_Glyph_Data.png`](../../../glyph/0021_AssignElfHex_AssignElfHex_sbElf_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: ELF at distance 331.
- Rank 2: HEX at distance 362.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
