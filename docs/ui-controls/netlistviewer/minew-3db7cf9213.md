# &New

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.MainMenu.MFile.MINew |
| Control class | TMenuItem |
| Caption | &New |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MINewClick |
| Handler address | 014b5250 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.MainMenu.MFile.MINew` |
| Handler node | `function:014b5250` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&New"] -->|OnClick| handler["FUN_014b5250"]
    handler --> call1["VCL control text setter with change suppression"]
    handler --> call2["FUN_00c0dad0"]
    handler --> call3["FUN_00c0fae0"]
    handler --> call4["FUN_014b4510"]
    handler --> call5["FUN_019953b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B5250__FUN_014b5250.c](../../../DecompiledSources/Tina16/functions/00000000014B5250__FUN_014b5250.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistViewer.MainMenu.MFile.MINew.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression
- `function:00c0dad0` — FUN_00c0dad0
- `function:00c0fae0` — FUN_00c0fae0
- `function:014b4510` — FUN_014b4510
- `function:019953b0` — FUN_019953b0

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
