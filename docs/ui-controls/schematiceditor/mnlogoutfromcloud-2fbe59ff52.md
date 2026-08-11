# Logout

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.mnCloud.mnLogoutFromCloud |
| Control class | TMenuItem |
| Caption | Logout |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnLogoutFromCloudClick |
| Handler address | 01c937c0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.mnCloud.mnLogoutFromCloud` |
| Handler node | `function:01c937c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Logout"] -->|OnClick| handler["FUN_01c937c0"]
    handler --> call1["FUN_014c0b50"]
    handler --> call2["FUN_014c46b0"]
    handler --> call3["FUN_014c47f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C937C0__FUN_01c937c0.c](../../../DecompiledSources/Tina16/functions/0000000001C937C0__FUN_01c937c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnCloud.mnLogoutFromCloud.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:014c0b50` — FUN_014c0b50
- `function:014c46b0` — FUN_014c46b0
- `function:014c47f0` — FUN_014c47f0

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
