# Ticks Font

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFAxisCnf2Dlg |
| Component path | DFAxisCnf2Dlg.ADFontGB.BitBtn1 |
| Control class | TBitBtn |
| Caption | Ticks Font |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BitBtn1Click |
| Handler address | 00f0d410 |
| Graph node | `resource:dfm:DFAxisCnf2Dlg/DFAxisCnf2Dlg.ADFontGB.BitBtn1` |
| Handler node | `function:00f0d410` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Ticks Font"] -->|OnClick| handler["FUN_00f0d410"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["VCL control text setter with change suppression"]
    handler --> call4["FUN_00725300"]
    handler --> call5["FUN_00f05050"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F0D410__FUN_00f0d410.c](../../../DecompiledSources/Tina16/functions/0000000000F0D410__FUN_00f0d410.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFAxisCnf2Dlg.ADFontGB.BitBtn1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:00725300` — FUN_00725300
- `function:00f05050` — FUN_00f05050

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Text: at distance 48.
- Rank 2: Name: Arial  Size: 12  Style: Normal at distance 70.
- Rank 3: Name: Arial  Size: 12  Style: Normal at distance 84.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
