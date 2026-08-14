# A

> Analysis status: Source reviewed: the click selects cursor A and synchronizes the common cursor state.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.CursorBox.FCursorASelectBtn |
| Control class | TSpeedButton |
| Caption | A |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CursorASelectBtnClick |
| Handler address | 0138cbe0 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.CursorBox.FCursorASelectBtn` |
| Handler node | `function:0138cbe0` |
| Graph layer | UI |

## What happens when clicked

The handler calls the cursor-A selection helper. If the cursor-A button is not Down after that call, the handler returns without another change.

If cursor A is selected, the handler reads cursor-A model byte `+0xC0` and copies it to the common Cursor On button. This keeps the shared cursor toggle aligned with cursor A's active state.

## Click flow

```mermaid
flowchart TD
    control["Cursor A button"] -->|OnClick| handler["CursorASelectBtnClick"]
    handler --> select["Run cursor-A selection helper"]
    select --> down{"Cursor A selected?"}
    down -->|No| noop["Return"]
    down -->|Yes| sync["Copy cursor-A state to Cursor On"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138CBE0__FUN_0138cbe0.c](../../../DecompiledSources/Tina16/functions/000000000138CBE0__FUN_0138cbe0.c)
- Recovered role: Selects cursor A and synchronizes the common Cursor On button.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.CursorBox.FCursorASelectBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f7e00` — FUN_010f7e00

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

- The handler does not itself create, move, or remove a cursor.
- The Delphi names of the cursor model bytes are not recovered.
