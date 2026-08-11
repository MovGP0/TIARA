# &Paste

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.mEdit.miPaste |
| Control class | TMenuItem |
| Caption | &Paste |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miPasteClick |
| Handler address | 017ef9c0 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.mEdit.miPaste` |
| Handler node | `function:017ef9c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Paste"] -->|OnClick| handler["FUN_017ef9c0"]
    handler --> call1["FUN_0065b870"]
    handler --> call2["FUN_00bf9d90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EF9C0__FUN_017ef9c0.c](../../../DecompiledSources/Tina16/functions/00000000017EF9C0__FUN_017ef9c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.mEdit.miPaste.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0065b870` — FUN_0065b870
- `function:00bf9d90` — FUN_00bf9d90

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
