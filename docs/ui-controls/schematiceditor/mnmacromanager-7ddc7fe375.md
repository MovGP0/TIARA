# New &Macro Wizard...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnMacroManager |
| Control class | TMenuItem |
| Caption | New &Macro Wizard... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnMacroManagerClick |
| Handler address | 01c89c60 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnMacroManager` |
| Handler node | `function:01c89c60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["New &Macro Wizard..."] -->|OnClick| handler["FUN_01c89c60"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_00805ad0"]
    handler --> call4["FUN_01c6ec30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C89C60__FUN_01c89c60.c](../../../DecompiledSources/Tina16/functions/0000000001C89C60__FUN_01c89c60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnMacroManager.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:007fc180` — FUN_007fc180
- `function:00805ad0` — FUN_00805ad0
- `function:01c6ec30` — FUN_01c6ec30

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
