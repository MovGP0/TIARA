# &Show icons

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditCompRack |
| Component path | frmEditCompRack.pnlBrowser.pnlBrowserShowIcons.chkShowBrowserIcons |
| Control class | TCheckBox |
| Caption | &Show icons |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | chkShowBrowserIconsClick |
| Handler address | 01b99300 |
| Graph node | `resource:dfm:frmEditCompRack/frmEditCompRack.pnlBrowser.pnlBrowserShowIcons.chkShowBrowserIcons` |
| Handler node | `function:01b99300` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Show icons"] -->|OnClick| handler["FUN_01b99300"]
    handler --> call1["FUN_006e2350"]
    handler --> call2["FUN_006e4390"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B99300__FUN_01b99300.c](../../../DecompiledSources/Tina16/functions/0000000001B99300__FUN_01b99300.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmEditCompRack.pnlBrowser.pnlBrowserShowIcons.chkShowBrowserIcons.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:006e2350` — FUN_006e2350
- `function:006e4390` — FUN_006e4390

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: &Navigator at distance 155.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
