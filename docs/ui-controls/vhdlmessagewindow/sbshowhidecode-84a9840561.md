# Show/Hide code

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VhdlMessageWindow |
| Component path | VhdlMessageWindow.pnBottom.Panel1.sbShowHideCode |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Show/Hide code |
| Text | Not present in the recovered resource. |
| Handler name | sbShowHideCodeClick |
| Handler address | 015e7220 |
| Graph node | `resource:dfm:VhdlMessageWindow/VhdlMessageWindow.pnBottom.Panel1.sbShowHideCode` |
| Handler node | `function:015e7220` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show/Hide code"] -->|OnClick| handler["FUN_015e7220"]
    handler --> call1["FUN_015e6f30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015E7220__FUN_015e7220.c](../../../DecompiledSources/Tina16/functions/00000000015E7220__FUN_015e7220.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VhdlMessageWindow.pnBottom.Panel1.sbShowHideCode.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:015e6f30` — FUN_015e6f30

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0505_VhdlMessageWindow_VhdlMessageWindow_pnBottom_Panel1_sbShowHideCode_Glyph_Data.png`](../../../glyph/0505_VhdlMessageWindow_VhdlMessageWindow_pnBottom_Panel1_sbShowHideCode_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
