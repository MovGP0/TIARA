# Font

> Analysis status: Source reviewed. The handler copies accepted font settings to `ListMemo2`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.PopupMenu5.Fonttype5 |
| Control class | TMenuItem |
| Caption | Font |
| Handler name | Fonttype5Click |
| Handler address | 01179840 |
| Graph node | `resource:dfm:Response_form1/Response_form1.PopupMenu5.Fonttype5` |
| Handler node | `function:01179840` |
| Graph layer | UI |

## What happens when clicked

[FUN_01179840](../../../DecompiledSources/Tina16/functions/0000000001179840__FUN_01179840.c) executes `FontDialog1`. Canceling leaves `ListMemo2` unchanged. After acceptance, the handler copies the dialog font's character set, size or height setting, name, and color to `ListMemo2.Font`. The VCL setters notify the target when a copied value differs.

This is a property-by-property copy. It does not change another response view.

## Click flow

```mermaid
flowchart TD
    control["Font"] -->|OnClick| handler["FUN_01179840"]
    handler --> dialog["Execute FontDialog1"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| keep["Keep ListMemo2 font"]
    accepted -->|Yes| copy["Copy character set, size,<br/>name, and color"]
    copy --> target["Update ListMemo2.Font"]
```

## Handler evidence

- Recovered role: Apply accepted font properties to `ListMemo2`.
- Target mapping: form field `+0x838` is `ListMemo2`; paired view handlers confirm it.
- Direct helpers: `FUN_005fce60/70`, `FUN_005fce00/30`, `FUN_005fccd0`, `FUN_005fcd80`, and `FUN_005fc860`.
- Resource dialog: `FontDialog1`.
- Extracted glyph: None.

## Analysis limits

The recovered copy does not prove that every possible Delphi `TFont` property is transferred.

