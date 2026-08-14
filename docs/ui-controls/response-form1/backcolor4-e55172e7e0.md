# Background Color

> Analysis status: Source reviewed. The handler changes `ListMemo1` background color after dialog acceptance.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.PopupMenu4.BackColor4 |
| Control class | TMenuItem |
| Caption | Background Color |
| Handler name | BackColor4Click |
| Handler address | 01179800 |
| Graph node | `resource:dfm:Response_form1/Response_form1.PopupMenu4.BackColor4` |
| Handler node | `function:01179800` |
| Graph layer | UI |

## What happens when clicked

[FUN_01179800](../../../DecompiledSources/Tina16/functions/0000000001179800__FUN_01179800.c) executes `ColorDialog1`. If the user accepts, it passes the selected color to `FUN_0064e030` for `ListMemo1`. If the user cancels, it returns without changing the view.

The VCL setter changes the stored color only when it differs and then sends the color-change notification. The handler does not change the other five response views.

## Click flow

```mermaid
flowchart TD
    control["Background Color"] -->|OnClick| handler["FUN_01179800"]
    handler --> dialog["Execute ColorDialog1"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| keep["Keep ListMemo1 color"]
    accepted -->|Yes| apply["FUN_0064e030<br/>Set ListMemo1 color"]
```

## Handler evidence

- Recovered role: Set `ListMemo1` background color from the accepted dialog.
- Target mapping: form field `+0x848` is `ListMemo1`; the paired view handlers and `FormCreate` confirm it.
- Direct call: `FUN_0064e030`, the VCL color setter.
- Resource dialog: `ColorDialog1`.
- Extracted glyph: None.

## Analysis limits

The selected color is user input and is unknown before the dialog runs.

