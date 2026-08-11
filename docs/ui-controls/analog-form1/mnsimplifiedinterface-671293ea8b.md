# Simplified Interface

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.MainMenu1.File1.mnSimplifiedInterface |
| Control class | TMenuItem |
| Caption | Simplified Interface |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSimplifiedInterfaceClick |
| Handler address | 01236900 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.MainMenu1.File1.mnSimplifiedInterface` |
| Handler node | `function:01236900` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Simplified Interface"] -->|OnClick| handler["FUN_01236900"]
    handler --> call1["FUN_00805200"]
    handler --> call2["FUN_01c98bf0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001236900__FUN_01236900.c](../../../DecompiledSources/Tina16/functions/0000000001236900__FUN_01236900.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.MainMenu1.File1.mnSimplifiedInterface.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00805200` — FUN_00805200
- `function:01c98bf0` — Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnFilterDesignNew.OnClick.

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
