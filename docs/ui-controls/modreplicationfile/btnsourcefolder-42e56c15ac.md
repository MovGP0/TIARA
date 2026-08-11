# Select file

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ModReplicationFile |
| Component path | ModReplicationFile.btnSourceFolder |
| Control class | TButton |
| Caption | Select file |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnSourceFolderClick |
| Handler address | 012edd20 |
| Graph node | `resource:dfm:ModReplicationFile/ModReplicationFile.btnSourceFolder` |
| Handler node | `function:012edd20` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select file"] -->|OnClick| handler["FUN_012edd20"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["VCL control text setter with change suppression"]
    handler --> call5["FUN_00724270"]
    handler --> call6["FUN_00724420"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012EDD20__FUN_012edd20.c](../../../DecompiledSources/Tina16/functions/00000000012EDD20__FUN_012edd20.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ModReplicationFile.btnSourceFolder.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:00724270` — FUN_00724270
- `function:00724420` — FUN_00724420

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Number of the parameter in the design: at distance 369.
- Rank 2: Working modes: at distance 437.
- Rank 3: Source file at distance 483.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
