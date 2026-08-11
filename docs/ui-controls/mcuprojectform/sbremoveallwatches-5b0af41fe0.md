# Remove All

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnMessagesClient.pcMessages.tsWatches.Panel1.pnWatchButtons.pnWatchButtonsRight.sbRemoveAllWatches |
| Control class | TSpeedButton |
| Caption | Remove All |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbRemoveAllWatchesClick |
| Handler address | 0108bd00 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnMessagesClient.pcMessages.tsWatches.Panel1.pnWatchButtons.pnWatchButtonsRight.sbRemoveAllWatches` |
| Handler node | `function:0108bd00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Remove All"] -->|OnClick| handler["FUN_0108bd00"]
    handler --> call1["FUN_010892f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108BD00__FUN_0108bd00.c](../../../DecompiledSources/Tina16/functions/000000000108BD00__FUN_0108bd00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnMessagesClient.pcMessages.tsWatches.Panel1.pnWatchButtons.pnWatchButtonsRight.sbRemoveAllWatches.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010892f0` — FUN_010892f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0273_MCUProjectForm_MCUProjectForm_pnMessagesClient_pcMessages_tsWatches_Panel1_pnWatchButtons_pnWatchButtonsRight_s_Glyph_Data.png`](../../../glyph/0273_MCUProjectForm_MCUProjectForm_pnMessagesClient_pcMessages_tsWatches_Panel1_pnWatchButtons_pnWatchButtonsRight_s_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
