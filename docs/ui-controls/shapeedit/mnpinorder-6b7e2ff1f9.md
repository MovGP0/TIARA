# Pin &Order...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnPinOrder |
| Control class | TMenuItem |
| Caption | Pin &Order... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnPinOrderClick |
| Handler address | 0179a260 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnPinOrder` |
| Handler node | `function:0179a260` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Pin &Order..."] -->|OnClick| handler["FUN_0179a260"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_004113d0"]
    handler --> call3["Delphi UnicodeString clear and finalization helper"]
    handler --> call4["FUN_004169a0"]
    handler --> call5["FUN_00416cd0"]
    handler --> call6["FUN_0043f750"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000179A260__FUN_0179a260.c](../../../DecompiledSources/Tina16/functions/000000000179A260__FUN_0179a260.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ShapeEdit.MainMenu.Edit.mnPinOrder.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004113d0` — FUN_004113d0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004169a0` — FUN_004169a0
- `function:00416cd0` — FUN_00416cd0
- `function:0043f750` — FUN_0043f750
- `function:004aeac0` — FUN_004aeac0
- `function:004aedb0` — FUN_004aedb0
- `function:007fc180` — FUN_007fc180
- `function:01795670` — FUN_01795670

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
