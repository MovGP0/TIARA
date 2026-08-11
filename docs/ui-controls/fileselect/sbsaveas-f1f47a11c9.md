# Save As...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FileSelect |
| Component path | FileSelect.sbSaveAs |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Save As... |
| Text | Not present in the recovered resource. |
| Handler name | sbSaveAsClick |
| Handler address | 0142a620 |
| Graph node | `resource:dfm:FileSelect/FileSelect.sbSaveAs` |
| Handler node | `function:0142a620` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save As..."] -->|OnClick| handler["FUN_0142a620"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00724270"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000142A620__FUN_0142a620.c](../../../DecompiledSources/Tina16/functions/000000000142A620__FUN_0142a620.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FileSelect.sbSaveAs.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00724270` — FUN_00724270

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0149_FileSelect_FileSelect_sbSaveAs_Glyph_Data.png`](../../../glyph/0149_FileSelect_FileSelect_sbSaveAs_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: File at distance 629.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
