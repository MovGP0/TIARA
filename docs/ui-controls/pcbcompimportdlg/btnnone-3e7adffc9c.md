# &None

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PCBCompImportDlg |
| Component path | PCBCompImportDlg.btnNone |
| Control class | TButton |
| Caption | &None |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnNoneClick |
| Handler address | 00ebde10 |
| Graph node | `resource:dfm:PCBCompImportDlg/PCBCompImportDlg.btnNone` |
| Handler node | `function:00ebde10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&None"] -->|OnClick| handler["FUN_00ebde10"]
    handler --> call1["FUN_0068bd10"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000EBDE10__FUN_00ebde10.c](../../../DecompiledSources/Tina16/functions/0000000000EBDE10__FUN_00ebde10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PCBCompImportDlg.btnNone.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0068bd10` — FUN_0068bd10

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Please select the components you would like to add to the current component list. Use Shift+Click and/or Ctrl+Click for extended selection. at distance 237.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
