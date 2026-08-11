# Save ASM

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EditMCUInput |
| Component path | EditMCUInput.pnToolbar.sbSaveASM |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Save ASM |
| Text | Not present in the recovered resource. |
| Handler name | sbSaveASMClick |
| Handler address | 014137c0 |
| Graph node | `resource:dfm:EditMCUInput/EditMCUInput.pnToolbar.sbSaveASM` |
| Handler node | `function:014137c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save ASM"] -->|OnClick| handler["FUN_014137c0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_006eae90"]
    handler --> call3["FUN_00724270"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014137C0__FUN_014137c0.c](../../../DecompiledSources/Tina16/functions/00000000014137C0__FUN_014137c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EditMCUInput.pnToolbar.sbSaveASM.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:006eae90` — FUN_006eae90
- `function:00724270` — FUN_00724270

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0136_EditMCUInput_EditMCUInput_pnToolbar_sbSaveASM_Glyph_Data.png`](../../../glyph/0136_EditMCUInput_EditMCUInput_pnToolbar_sbSaveASM_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
