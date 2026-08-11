# Browse...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmSetEnvVars |
| Component path | frmSetEnvVars.btnBrowseSettingsDir |
| Control class | TButton |
| Caption | Browse... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnBrowseSettingsDirClick |
| Handler address | 01d7c790 |
| Graph node | `resource:dfm:frmSetEnvVars/frmSetEnvVars.btnBrowseSettingsDir` |
| Handler node | `function:01d7c790` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Browse..."] -->|OnClick| handler["FUN_01d7c790"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control Unicode text reader"]
    handler --> call3["VCL control text setter with change suppression"]
    handler --> call4["FUN_01d7c210"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001D7C790__FUN_01d7c790.c](../../../DecompiledSources/Tina16/functions/0000000001D7C790__FUN_01d7c790.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmSetEnvVars.btnBrowseSettingsDir.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:01d7c210` — FUN_01d7c210

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Private Catalog Folder at distance 317.
- Rank 2: Settings Folder at distance 348.
- Rank 3: Temporary Folder at distance 390.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
