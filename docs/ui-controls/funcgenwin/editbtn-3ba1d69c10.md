# Edit

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FuncGenWin |
| Component path | FuncGenWin.ParametersBox.EditBtn |
| Control class | TSpeedButton |
| Caption | Edit |
| Hint | Edit mode |
| Text | Not present in the recovered resource. |
| Handler name | EditBtnClick |
| Handler address | 0113a060 |
| Graph node | `resource:dfm:FuncGenWin/FuncGenWin.ParametersBox.EditBtn` |
| Handler node | `function:0113a060` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Edit"] -->|OnClick| handler["FUN_0113a060"]
    handler --> call1["FUN_006807e0"]
    handler --> call2["FUN_01137540"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000113A060__FUN_0113a060.c](../../../DecompiledSources/Tina16/functions/000000000113A060__FUN_0113a060.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FuncGenWin.ParametersBox.EditBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:006807e0` — FUN_006807e0
- `function:01137540` — FUN_01137540

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
