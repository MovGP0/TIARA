# Fourier S&pectrum...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.FourierAnalysis.FourierSpectrum |
| Control class | TMenuItem |
| Caption | Fourier S&pectrum... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FourierSpectrumClick |
| Handler address | 01c92850 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.FourierAnalysis.FourierSpectrum` |
| Handler node | `function:01c92850` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Fourier S&pectrum..."] -->|OnClick| handler["FUN_01c92850"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_0114dc00"]
    handler --> call3["FUN_01349310"]
    handler --> call4["FUN_013d2f60"]
    handler --> call5["FUN_013d99f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C92850__FUN_01c92850.c](../../../DecompiledSources/Tina16/functions/0000000001C92850__FUN_01c92850.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.FourierAnalysis.FourierSpectrum.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0114dc00` — FUN_0114dc00
- `function:01349310` — FUN_01349310
- `function:013d2f60` — FUN_013d2f60
- `function:013d99f0` — FUN_013d99f0

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
