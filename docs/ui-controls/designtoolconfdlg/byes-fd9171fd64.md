# Yes

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DesignToolConfDlg |
| Component path | DesignToolConfDlg.bYes |
| Control class | TBitBtn |
| Caption | Yes |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bYesClick |
| Handler address | 01475300 |
| Graph node | `resource:dfm:DesignToolConfDlg/DesignToolConfDlg.bYes` |
| Handler node | `function:01475300` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Yes"] -->|OnClick| handler["FUN_01475300"]
    handler --> call1["FUN_00805200"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001475300__FUN_01475300.c](../../../DecompiledSources/Tina16/functions/0000000001475300__FUN_01475300.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DesignToolConfDlg.bYes.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00805200` — FUN_00805200

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Save changes? at distance 155.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
