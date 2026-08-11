# Select folder

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ModReplicationFile |
| Component path | ModReplicationFile.bResultFolder |
| Control class | TButton |
| Caption | Select folder |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bResultFolderClick |
| Handler address | 012eb1c0 |
| Graph node | `resource:dfm:ModReplicationFile/ModReplicationFile.bResultFolder` |
| Handler node | `function:012eb1c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select folder"] -->|OnClick| handler["FUN_012eb1c0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control text setter with change suppression"]
    handler --> call3["FUN_00b96980"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012EB1C0__FUN_012eb1c0.c](../../../DecompiledSources/Tina16/functions/00000000012EB1C0__FUN_012eb1c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ModReplicationFile.bResultFolder.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:00b96980` — FUN_00b96980

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Number of the parameter in the design: at distance 338.
- Rank 2: Working modes: at distance 406.
- Rank 3: Result folder at distance 478.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
