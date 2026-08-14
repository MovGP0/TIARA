# Font

> Analysis status: Source reviewed. The handler copies accepted font settings to `ListMemo3`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.PopupMenu6.Fonttype6 |
| Control class | TMenuItem |
| Caption | Font |
| Handler name | Fonttype6Click |
| Handler address | 011799b0 |
| Graph node | `resource:dfm:Response_form1/Response_form1.PopupMenu6.Fonttype6` |
| Handler node | `function:011799b0` |
| Graph layer | UI |

## What happens when clicked

[FUN_011799b0](../../../DecompiledSources/Tina16/functions/00000000011799B0__FUN_011799b0.c) executes `FontDialog1`. Canceling leaves `ListMemo3` unchanged. After acceptance, the handler copies the dialog font's character set, size or height setting, name, and color to `ListMemo3.Font`. The VCL setters notify the target when a copied value differs.

This is a property-by-property copy. It does not change another response view.

## Click flow

```mermaid
flowchart TD
    control["Font"] -->|OnClick| handler["FUN_011799b0"]
    handler --> dialog["Execute FontDialog1"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| keep["Keep ListMemo3 font"]
    accepted -->|Yes| copy["Copy character set, size,<br/>name, and color"]
    copy --> target["Update ListMemo3.Font"]
```

## Handler evidence

- Recovered role: Apply accepted font properties to `ListMemo3`.
- Target mapping: form field `+0x840` is `ListMemo3`; paired view handlers confirm it.
- Direct helpers: `FUN_005fce60/70`, `FUN_005fce00/30`, `FUN_005fccd0`, `FUN_005fcd80`, and `FUN_005fc860`.
- Resource dialog: `FontDialog1`.
- Extracted glyph: None.

## Analysis limits

The recovered copy does not prove that every possible Delphi `TFont` property is transferred.

