# Compiler Options

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnProject.mnCompilerOptions |
| Control class | TMenuItem |
| Caption | Compiler Options |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnCompilerOptionsClick |
| Handler address | 0108c580 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnProject.mnCompilerOptions` |
| Handler node | `function:0108c580` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Compiler Options"] -->|OnClick| handler["FUN_0108c580"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_0043e1a0"]
    handler --> call4["FUN_007fc180"]
    handler --> call5["FUN_010715c0"]
    handler --> call6["FUN_010716b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108C580__FUN_0108c580.c](../../../DecompiledSources/Tina16/functions/000000000108C580__FUN_0108c580.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnProject.mnCompilerOptions.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0043e1a0` — FUN_0043e1a0
- `function:007fc180` — FUN_007fc180
- `function:010715c0` — FUN_010715c0
- `function:010716b0` — FUN_010716b0
- `function:0108c0f0` — FUN_0108c0f0
- `function:0108c4a0` — FUN_0108c4a0
- `function:010b3a20` — FUN_010b3a20
- `function:0160e060` — FUN_0160e060

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
