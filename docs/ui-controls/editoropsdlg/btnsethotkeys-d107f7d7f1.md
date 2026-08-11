# Hotkey editor

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EditorOpsDlg |
| Component path | EditorOpsDlg.btnSetHotkeys |
| Control class | TButton |
| Caption | Hotkey editor |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnSetHotkeysClick |
| Handler address | 01b7c5a0 |
| Graph node | `resource:dfm:EditorOpsDlg/EditorOpsDlg.btnSetHotkeys` |
| Handler node | `function:01b7c5a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Hotkey editor"] -->|OnClick| handler["FUN_01b7c5a0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_01b77240"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B7C5A0__FUN_01b7c5a0.c](../../../DecompiledSources/Tina16/functions/0000000001B7C5A0__FUN_01b7c5a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EditorOpsDlg.btnSetHotkeys.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:01b77240` — FUN_01b77240

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Autosave history depth at distance 44.
- Rank 2: [min] at distance 77.
- Rank 3: Autosave interval (0 - no autosave) at distance 307.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
