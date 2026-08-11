# &Save

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.MainMenu.MFile.MISave |
| Control class | TMenuItem |
| Caption | &Save |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MISaveClick |
| Handler address | 014b53c0 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.MainMenu.MFile.MISave` |
| Handler node | `function:014b53c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Save"] -->|OnClick| handler["FUN_014b53c0"]
    handler --> call1["FUN_00c0dad0"]
    handler --> call2["FUN_014a1f90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B53C0__FUN_014b53c0.c](../../../DecompiledSources/Tina16/functions/00000000014B53C0__FUN_014b53c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: NetlistViewer.BtnPanel.SaveButton.OnClick, NetlistViewer.MainMenu.MFile.MISave.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00c0dad0` — FUN_00c0dad0
- `function:014a1f90` — FUN_014a1f90

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
