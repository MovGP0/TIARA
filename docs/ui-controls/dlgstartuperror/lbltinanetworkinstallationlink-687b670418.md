# http://www.tina.com/netwins.htm

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | dlgStartupError |
| Component path | dlgStartupError.lblTinaNetworkInstallationLink |
| Control class | TLabel |
| Caption | http://www.tina.com/netwins.htm |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lblNetworkInstallationLinkClick |
| Handler address | Not present in the recovered resource. |
| Graph node | `resource:dfm:dlgStartupError/dlgStartupError.lblTinaNetworkInstallationLink` |
| Handler node | `concept:dfm-handler:TdlgStartupError/lblNetworkInstallationLinkClick` |
| Graph layer | tina.exe |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["http://www.tina.com/netwins.htm"] -->|OnClick| handler["lblNetworkInstallationLinkClick"]
    handler -.-> unresolved["Recovered address not established"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Unresolved Delphi event handler TdlgStartupError.lblNetworkInstallationLinkClick, referenced by 2 UI events.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: Not present in the recovered resource.

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: http://www.tina.com/netwins.htm at distance 0.
- Rank 2: http://www.edisonlab.com/enetwins.htm at distance 14.
- Rank 3: This is a network version installed on a local drive. Please follow the steps of network version installation in the manual or visit: at distance 102.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
