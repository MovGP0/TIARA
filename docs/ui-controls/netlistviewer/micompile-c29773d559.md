# &Compile

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.MainMenu.MAnalysis.MICompile |
| Control class | TMenuItem |
| Caption | &Compile |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MICompileClick |
| Handler address | 014b5b50 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.MainMenu.MAnalysis.MICompile` |
| Handler node | `function:014b5b50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Compile"] -->|OnClick| handler["FUN_014b5b50"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0065b870"]
    handler --> call3["FUN_007f94c0"]
    handler --> call4["FUN_007f95c0"]
    handler --> call5["FUN_00ee4600"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B5B50__FUN_014b5b50.c](../../../DecompiledSources/Tina16/functions/00000000014B5B50__FUN_014b5b50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: NetlistViewer.BtnPanel.CompileButton.OnClick, NetlistViewer.MainMenu.MAnalysis.MICompile.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0065b870` — FUN_0065b870
- `function:007f94c0` — FUN_007f94c0
- `function:007f95c0` — FUN_007f95c0
- `function:00ee4600` — FUN_00ee4600

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
