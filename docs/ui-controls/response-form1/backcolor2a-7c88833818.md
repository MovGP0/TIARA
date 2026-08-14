# Background Color

> Analysis status: Source reviewed. The handler changes `ListBox2` background color after dialog acceptance.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.PopupMenu2.BackColor2a |
| Control class | TMenuItem |
| Caption | Background Color |
| Handler name | BackColor2aClick |
| Handler address | 01178fd0 |
| Graph node | `resource:dfm:Response_form1/Response_form1.PopupMenu2.BackColor2a` |
| Handler node | `function:01178fd0` |
| Graph layer | UI |

## What happens when clicked

[FUN_01178fd0](../../../DecompiledSources/Tina16/functions/0000000001178FD0__FUN_01178fd0.c) executes `ColorDialog1`. If the user accepts, it passes the selected color to `FUN_0064e030` for `ListBox2`. If the user cancels, it returns without changing the view.

The VCL setter changes the stored color only when it differs and then sends the color-change notification. The handler does not change the other five response views.

## Click flow

```mermaid
flowchart TD
    control["Background Color"] -->|OnClick| handler["FUN_01178fd0"]
    handler --> dialog["Execute ColorDialog1"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| keep["Keep ListBox2 color"]
    accepted -->|Yes| apply["FUN_0064e030<br/>Set ListBox2 color"]
```

## Handler evidence

- Recovered role: Set `ListBox2` background color from the accepted dialog.
- Target mapping: form field `+0x7C8` is `ListBox2`; the paired view handlers and `FormCreate` confirm it.
- Direct call: `FUN_0064e030`, the VCL color setter.
- Resource dialog: `ColorDialog1`.
- Extracted glyph: None.

## Analysis limits

The selected color is user input and is unknown before the dialog runs.

