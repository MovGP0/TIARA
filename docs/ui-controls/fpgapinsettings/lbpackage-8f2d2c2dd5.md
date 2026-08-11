# lbPackage

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FPGAPinSettings |
| Component path | FPGAPinSettings.rgPackage.lbPackage |
| Control class | TListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lbPackageClick |
| Handler address | 00e0bf10 |
| Graph node | `resource:dfm:FPGAPinSettings/FPGAPinSettings.rgPackage.lbPackage` |
| Handler node | `function:00e0bf10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["lbPackage"] -->|OnClick| handler["FUN_00e0bf10"]
    handler --> call1["FUN_00e0bf30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000E0BF10__FUN_00e0bf10.c](../../../DecompiledSources/Tina16/functions/0000000000E0BF10__FUN_00e0bf10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FPGAPinSettings.rgPackage.lbPackage.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00e0bf30` — FUN_00e0bf30

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
