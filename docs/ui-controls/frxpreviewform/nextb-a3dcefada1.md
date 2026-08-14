# Next

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.ToolBar.NextB |
| Control class | TToolButton |
| Caption | Next |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NextBClick |
| Handler address | 018afb20 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.ToolBar.NextB` |
| Handler node | `function:018afb20` |
| Graph layer | UI |

## What happens when clicked

The handler requests the current one-based page number plus one. The shared page-selection routine clamps the result to the available range. It updates the current page in the main and thumbnail views, adjusts their scroll positions, invokes the page-change callback, and ends the guarded update. A click on the last page stays on the last page.

## Click flow

```mermaid
flowchart LR
    control["Next page button"] -->|OnClick| handler["NextBClick"]
    handler --> request["Request current page plus one"]
    request --> clamp["Clamp to the available page range"]
    clamp --> notify["Synchronize views and notify page change"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018AFB20__FUN_018afb20.c](../../../DecompiledSources/Tina16/functions/00000000018AFB20__FUN_018afb20.c)
- Recovered role: Selects the next page in the FastReport preview.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.ToolBar.NextB.OnClick.
- Current graph behavior: Increments the requested page, clamps it to the report, and synchronizes the main preview, thumbnail view, scrolling, and callback.
- Current graph evidence: `FUN_018afb20` calls `FUN_018a9eb0`. That callee reads current page field `+0x528`, adds one, and passes the result to `FUN_018a9020`. The shared routine clamps the value to 1 through page count and applies it to both preview controls.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:018a9eb0` — FUN_018a9eb0

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

- At the last page, clamping makes the click an effective no-op for page position.
- The page-selection routine has no local error or retry path.
