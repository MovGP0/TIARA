# &Open...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.MainMenu.MFile.MIOpen |
| Control class | TMenuItem |
| Caption | &Open... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MIOpenClick |
| Handler address | 014b52c0 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.MainMenu.MFile.MIOpen` |
| Handler node | `function:014b52c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Open..."] -->|OnClick| handler["FUN_014b52c0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control text setter with change suppression"]
    handler --> call3["FUN_00724270"]
    handler --> call4["FUN_00c0dad0"]
    handler --> call5["FUN_014b4510"]
    handler --> call6["FUN_019953b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B52C0__FUN_014b52c0.c](../../../DecompiledSources/Tina16/functions/00000000014B52C0__FUN_014b52c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistViewer.MainMenu.MFile.MIOpen.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:00724270` — FUN_00724270
- `function:00c0dad0` — FUN_00c0dad0
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
