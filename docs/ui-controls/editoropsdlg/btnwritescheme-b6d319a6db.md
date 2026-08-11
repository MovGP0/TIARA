# btnWriteScheme

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EditorOpsDlg |
| Component path | EditorOpsDlg.gbEditorColors.btnWriteScheme |
| Control class | TButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnWriteSchemeClick |
| Handler address | 01b7c390 |
| Graph node | `resource:dfm:EditorOpsDlg/EditorOpsDlg.gbEditorColors.btnWriteScheme` |
| Handler node | `function:01b7c390` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["btnWriteScheme"] -->|OnClick| handler["FUN_01b7c390"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0043dc90"]
    handler --> call3["FUN_0043dec0"]
    handler --> call4["FUN_01aa02c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B7C390__FUN_01b7c390.c](../../../DecompiledSources/Tina16/functions/0000000001B7C390__FUN_01b7c390.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EditorOpsDlg.gbEditorColors.btnWriteScheme.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0043dc90` — FUN_0043dc90
- `function:0043dec0` — FUN_0043dec0
- `function:01aa02c0` — FUN_01aa02c0

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
