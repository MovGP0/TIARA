# Absolute path

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlNotebook.pctrlMode.tsSoundInput.chkbxAbsolutePath |
| Control class | TCheckBox |
| Caption | Absolute path |
| Hint | If checked WAV file is referenced with an absolute path |
| Text | Not present in the recovered resource. |
| Handler name | chkbxAbsolutePathClick |
| Handler address | 01127b00 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlNotebook.pctrlMode.tsSoundInput.chkbxAbsolutePath` |
| Handler node | `function:01127b00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Absolute path"] -->|OnClick| handler["FUN_01127b00"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00414b50"]
    handler --> call4["FUN_00416ad0"]
    handler --> call5["FUN_0043e420"]
    handler --> call6["FUN_00441640"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001127B00__FUN_01127b00.c](../../../DecompiledSources/Tina16/functions/0000000001127B00__FUN_01127b00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlNotebook.pctrlMode.tsSoundInput.chkbxAbsolutePath.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416ad0` — FUN_00416ad0
- `function:0043e420` — FUN_0043e420
- `function:00441640` — FUN_00441640
- `function:00441820` — FUN_00441820
- `function:00441b80` — FUN_00441b80
- `function:00441d00` — FUN_00441d00
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:01c8a3c0` — FUN_01c8a3c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Max voltage at distance 211.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
