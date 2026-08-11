# cbSubGroup

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MacroPicker |
| Component path | MacroPicker.pnlControls.cbSubGroup |
| Control class | TComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbSubGroupClick |
| Handler address | 01703350 |
| Graph node | `resource:dfm:MacroPicker/MacroPicker.pnlControls.cbSubGroup` |
| Handler node | `function:01703350` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["cbSubGroup"] -->|OnClick| handler["FUN_01703350"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00414b50"]
    handler --> call3["FUN_01703980"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001703350__FUN_01703350.c](../../../DecompiledSources/Tina16/functions/0000000001703350__FUN_01703350.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MacroPicker.pnlControls.cbSubGroup.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:01703980` — FUN_01703980

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Subcategory: at distance 90.
- Rank 2: &Manufacturer: at distance 110.
- Rank 3: &Shape: at distance 138.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
