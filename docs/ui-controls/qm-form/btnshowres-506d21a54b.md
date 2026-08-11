# Show Details

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | QM_form |
| Component path | QM_form.GroupBox1.BtnShowres |
| Control class | TButton |
| Caption | Show Details |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Button1Click |
| Handler address | 011a4bd0 |
| Graph node | `resource:dfm:QM_form/QM_form.GroupBox1.BtnShowres` |
| Handler node | `function:011a4bd0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show Details"] -->|OnClick| handler["FUN_011a4bd0"]
    handler --> call1["FUN_0064dbe0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011A4BD0__FUN_011a4bd0.c](../../../DecompiledSources/Tina16/functions/00000000011A4BD0__FUN_011a4bd0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: QM_form.GroupBox1.BtnShowres.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Minterms/Maxterm index at distance 183.
- Rank 2: Number of variables: at distance 223.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
