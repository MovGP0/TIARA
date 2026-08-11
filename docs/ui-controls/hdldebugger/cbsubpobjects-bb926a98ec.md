# &Subp. objects

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pnClient.pnMessages.pnDebug.pcDebug.tsDebug.pcDebugPages.tsLocalVariables.pnLocalVariablesLeft.cbSubpObjects |
| Control class | TCheckBox |
| Caption | &Subp. objects |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbSubpObjectsClick |
| Handler address | 0109e0e0 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pnClient.pnMessages.pnDebug.pcDebug.tsDebug.pcDebugPages.tsLocalVariables.pnLocalVariablesLeft.cbSubpObjects` |
| Handler node | `function:0109e0e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Subp. objects"] -->|OnClick| handler["FUN_0109e0e0"]
    handler --> call1["HDL debugger local-object category filter updater"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109E0E0__FUN_0109e0e0.c](../../../DecompiledSources/Tina16/functions/000000000109E0E0__FUN_0109e0e0.c)
- Recovered role: HDL debugger subprogram-object filter checkbox handler
- Current graph summary: Applies the Subp. objects checkbox state with filter mask bit 0x08. Handles 1 Delphi UI event: HDLDebugger.pnClient.pnMessages.pnDebug.pcDebug.tsDebug.pcDebugPages.tsLocalVariables.pnLocalVariablesLeft.cbSubpObjects.OnClick.
- Current graph behavior: Applies the Subp. objects checkbox state with filter mask bit 0x08.
- Current graph evidence: The Subp. objects checkbox resolves here. It reads its checked state and calls the shared updater with bit 8.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0109dfb0` — HDL debugger local-object category filter updater

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
