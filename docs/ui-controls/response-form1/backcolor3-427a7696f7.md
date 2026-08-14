# Background Color

> Analysis status: Source reviewed. The handler changes `ListBox3` background color after dialog acceptance.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.PopupMenu3.BackColor3 |
| Control class | TMenuItem |
| Caption | Background Color |
| Handler name | BackColor3Click |
| Handler address | 011792b0 |
| Graph node | `resource:dfm:Response_form1/Response_form1.PopupMenu3.BackColor3` |
| Handler node | `function:011792b0` |
| Graph layer | UI |

## What happens when clicked

[FUN_011792b0](../../../DecompiledSources/Tina16/functions/00000000011792B0__FUN_011792b0.c) executes `ColorDialog1`. If the user accepts, it passes the selected color to `FUN_0064e030` for `ListBox3`. If the user cancels, it returns without changing the view.

The VCL setter changes the stored color only when it differs and then sends the color-change notification. The handler does not change the other five response views.

## Click flow

```mermaid
flowchart TD
    control["Background Color"] -->|OnClick| handler["FUN_011792b0"]
    handler --> dialog["Execute ColorDialog1"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| keep["Keep ListBox3 color"]
    accepted -->|Yes| apply["FUN_0064e030<br/>Set ListBox3 color"]
```

## Handler evidence

- Recovered role: Set `ListBox3` background color from the accepted dialog.
- Target mapping: form field `+0x7B8` is `ListBox3`; the paired view handlers and `FormCreate` confirm it.
- Direct call: `FUN_0064e030`, the VCL color setter.
- Resource dialog: `ColorDialog1`.
- Extracted glyph: None.

## Analysis limits

The selected color is user input and is unknown before the dialog runs.

