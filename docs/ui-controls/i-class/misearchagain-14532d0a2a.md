# Search &Again

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.mEdit.miSearchAgain |
| Control class | TMenuItem |
| Caption | Search &Again |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miSearchAgainClick |
| Handler address | 017efa90 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.mEdit.miSearchAgain` |
| Handler node | `function:017efa90` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Search &Again"] -->|OnClick| handler["FUN_017efa90"]
    handler --> call1["FUN_017f32c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFA90__FUN_017efa90.c](../../../DecompiledSources/Tina16/functions/00000000017EFA90__FUN_017efa90.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.mEdit.miSearchAgain.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:017f32c0` — FUN_017f32c0

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
