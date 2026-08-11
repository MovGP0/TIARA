# Open MCU code editor...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmGotoMCUIDE |
| Control class | TMenuItem |
| Caption | Open MCU code editor... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmGotoMCUIDEClick |
| Handler address | 01c71e40 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmGotoMCUIDE` |
| Handler node | `function:01c71e40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Open MCU code editor..."] -->|OnClick| handler["FUN_01c71e40"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_015f5c70"]
    handler --> call3["FUN_015fca00"]
    handler --> call4["FUN_0160f2b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C71E40__FUN_01c71e40.c](../../../DecompiledSources/Tina16/functions/0000000001C71E40__FUN_01c71e40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.SchPopup.pmGotoMCUIDE.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:015f5c70` — FUN_015f5c70
- `function:015fca00` — FUN_015fca00
- `function:0160f2b0` — FUN_0160f2b0

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
