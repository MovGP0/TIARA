# Minterm

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VK_form |
| Component path | VK_form.BtnMinterm |
| Control class | TRadioButton |
| Caption | Minterm |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnMintermClick |
| Handler address | 011d2900 |
| Graph node | `resource:dfm:VK_form/VK_form.BtnMinterm` |
| Handler node | `function:011d2900` |
| Graph layer | UI |

## What happens when clicked

The handler sets the shared help-context ID to `3100` and sets the Karnaugh mode byte to `1`, which the renderer uses for the left Minterm view. It reads the stored minterm source expression, removes its final character, substitutes the configured Boolean variable display names, and writes the formatted source text to the form.

`FUN_011ae5b0` then redraws the minterm map, generates its simplified sum-of-products expression, and publishes the result text. When the stored variable count is less than six, the handler also enables a shared application control at global form offset `+0x6f8`; that control's Delphi identity is not recovered here. The handler has no explicit error branch.

## Click flow

```mermaid
flowchart LR
    control["Minterm"] -->|OnClick| handler["FUN_011d2900"]
    handler --> selectMode["Set mode to Minterm and help context to 3100"]
    selectMode --> sourceText["Format the stored minterm expression"]
    sourceText --> render["FUN_011ae5b0: redraw and simplify the minterm map"]
    render --> variableCount{"Fewer than six variables?"}
    variableCount -->|Yes| enableShared["Enable the shared control at +0x6f8"]
    variableCount -->|No| keepState["Keep that control state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011D2900__FUN_011d2900.c](../../../DecompiledSources/Tina16/functions/00000000011D2900__FUN_011d2900.c)
- Recovered role: Select, redraw, and simplify the minterm Karnaugh view.
- Current graph summary: Handles 1 Delphi UI event: VK_form.BtnMinterm.OnClick.
- Current graph behavior: Selects minterm mode, formats the stored minterm expression, redraws the map, and publishes the simplified result.
- Current graph evidence: The handler writes `1` to `DAT_01f2a8d4`, reads the global string at offset `+0x790`, writes form control `+0x6c8`, and calls the annotated Karnaugh renderer `FUN_011ae5b0`.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:00416dc0` — FUN_00416dc0
- `function:0064de00` — VCL control text setter with change suppression
- `function:00b971a0` — Boolean variable display-name substitution
- `function:011ae5b0` — Karnaugh-map renderer and simplified-expression generator

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Maxterm at distance 269.
- Rank 2: Minterm at distance 532.

## Analysis limits

- The shared control at global form offset `+0x6f8` has no recovered Delphi name.
- The removed final source-expression character is not identified by a recovered symbol.
