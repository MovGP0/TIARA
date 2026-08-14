# Font

> Analysis status: Source reviewed. The handler copies accepted font settings to `ListBox3`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.PopupMenu3.FontType3 |
| Control class | TMenuItem |
| Caption | Font |
| Handler name | FontType3Click |
| Handler address | 01179180 |
| Graph node | `resource:dfm:Response_form1/Response_form1.PopupMenu3.FontType3` |
| Handler node | `function:01179180` |
| Graph layer | UI |

## What happens when clicked

[FUN_01179180](../../../DecompiledSources/Tina16/functions/0000000001179180__FUN_01179180.c) executes `FontDialog1`. Canceling leaves `ListBox3` unchanged. After acceptance, the handler copies the dialog font's character set, size or height setting, name, and color to `ListBox3.Font`. The VCL setters notify the target when a copied value differs.

This is a property-by-property copy. It does not change another response view.

## Click flow

```mermaid
flowchart TD
    control["Font"] -->|OnClick| handler["FUN_01179180"]
    handler --> dialog["Execute FontDialog1"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| keep["Keep ListBox3 font"]
    accepted -->|Yes| copy["Copy character set, size,<br/>name, and color"]
    copy --> target["Update ListBox3.Font"]
```

## Handler evidence

- Recovered role: Apply accepted font properties to `ListBox3`.
- Target mapping: form field `+0x7B8` is `ListBox3`; paired view handlers confirm it.
- Direct helpers: `FUN_005fce60/70`, `FUN_005fce00/30`, `FUN_005fccd0`, `FUN_005fcd80`, and `FUN_005fc860`.
- Resource dialog: `FontDialog1`.
- Extracted glyph: None.

## Analysis limits

The recovered copy does not prove that every possible Delphi `TFont` property is transferred.

