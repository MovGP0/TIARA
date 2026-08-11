# register@designsoftware.com

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | RegisterDlg |
| Component path | RegisterDlg.PageCtrl.ManualPg.EmailLB |
| Control class | TLabel |
| Caption | register@designsoftware.com |
| Hint | Send mail! |
| Text | Not present in the recovered resource. |
| Handler name | EmailLBClick |
| Handler address | Not present in the recovered resource. |
| Graph node | `resource:dfm:RegisterDlg/RegisterDlg.PageCtrl.ManualPg.EmailLB` |
| Handler node | `concept:dfm-handler:TRegisterDlg/EmailLBClick` |
| Graph layer | tina.exe |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["register@designsoftware.com"] -->|OnClick| handler["EmailLBClick"]
    handler -.-> unresolved["Recovered address not established"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Unresolved Delphi event handler TRegisterDlg.EmailLBClick, referenced by 1 UI event.
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

- Rank 1: register@designsoftware.com at distance 0.
- Rank 2: http://www.designsoftware.com at distance 44.
- Rank 3: and quote the Site Code shown above. at distance 74.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
