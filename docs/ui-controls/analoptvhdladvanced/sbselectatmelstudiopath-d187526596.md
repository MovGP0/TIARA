# Select Arduino path

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AnaloptVHDLAdvanced |
| Component path | AnaloptVHDLAdvanced.rgMCU.sbSelectAtmelStudioPath |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Select Arduino path |
| Text | Not present in the recovered resource. |
| Handler name | sbSelectAtmelStudioPathClick |
| Handler address | 014ef670 |
| Graph node | `resource:dfm:AnaloptVHDLAdvanced/AnaloptVHDLAdvanced.rgMCU.sbSelectAtmelStudioPath` |
| Handler node | `function:014ef670` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select Arduino path"] -->|OnClick| handler["FUN_014ef670"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_0041ddd0"]
    handler --> call4["VCL control text setter with change suppression"]
    handler --> call5["FUN_00b89270"]
    handler --> call6["FUN_00b8e650"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014EF670__FUN_014ef670.c](../../../DecompiledSources/Tina16/functions/00000000014EF670__FUN_014ef670.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: AnaloptVHDLAdvanced.rgMCU.sbSelectAtmelStudioPath.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0041ddd0` — FUN_0041ddd0
- `function:0064de00` — VCL control text setter with change suppression
- `function:00b89270` — FUN_00b89270
- `function:00b8e650` — FUN_00b8e650
- `function:00d30800` — FUN_00d30800

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0012_AnaloptVHDLAdvanced_AnaloptVHDLAdvanced_rgMCU_sbSelectAtmelStudioPath_Glyph_Data.png`](../../../glyph/0012_AnaloptVHDLAdvanced_AnaloptVHDLAdvanced_rgMCU_sbSelectAtmelStudioPath_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Atmel Studio path:  at distance 397.
- Rank 2: Ardunio path:  at distance 422.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
