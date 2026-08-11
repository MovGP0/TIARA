# IBIS File (*.IBS)...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.Import.ImportIbis |
| Control class | TMenuItem |
| Caption | IBIS File (*.IBS)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ImportIbisClick |
| Handler address | 01ca4a80 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.Import.ImportIbis` |
| Handler node | `function:01ca4a80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["IBIS File (*.IBS)..."] -->|OnClick| handler["FUN_01ca4a80"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["Delphi UnicodeString assignment helper"]
    handler --> call4["FUN_00724270"]
    handler --> call5["FUN_01ca4350"]
    handler --> call6["FUN_01ca4640"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA4A80__FUN_01ca4a80.c](../../../DecompiledSources/Tina16/functions/0000000001CA4A80__FUN_01ca4a80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.Import.ImportIbis.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00724270` — FUN_00724270
- `function:01ca4350` — FUN_01ca4350
- `function:01ca4640` — FUN_01ca4640

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
