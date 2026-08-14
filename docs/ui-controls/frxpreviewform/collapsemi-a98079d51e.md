# Collapse all

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.RightMenu.CollapseMI |
| Control class | TMenuItem |
| Caption | Collapse all |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CollapseAllClick |
| Handler address | 018b0440 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.RightMenu.CollapseMI` |
| Handler node | `function:018b0440` |
| Graph layer | UI |

## What happens when clicked

The handler starts a preview update, obtains the prepared-report component collection, and checks every item for the required FastReport class. For each eligible item whose flag at `+0x250` is set, it clears the expanded-state byte at `+0x251`. If at least one item changes, it refreshes the preview, selects page 1, and performs the additional collapse refresh. It always ends the preview update and passes whether a change occurred. An already collapsed collection causes no page-selection or extra refresh work.

## Click flow

```mermaid
flowchart LR
    control["Collapse all menu item"] -->|OnClick| handler["CollapseAllClick"]
    handler --> scan["Scan eligible prepared-report components"]
    scan --> changed{"Did an expanded item change?"}
    changed -->|Yes| refresh["Refresh preview and select page 1"]
    changed -->|No| finish["End update without extra refresh"]
    refresh --> finish
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018B0440__FUN_018b0440.c](../../../DecompiledSources/Tina16/functions/00000000018B0440__FUN_018b0440.c)
- Recovered role: Collapses all eligible prepared-report components in the FastReport preview.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.RightMenu.CollapseMI.OnClick.
- Current graph behavior: Clears the expanded-state byte on eligible items and refreshes the preview only when at least one item changes.
- Current graph evidence: `FUN_018b0440` iterates the collection returned through `FUN_018af290` and `FUN_01951400`, type-checks each item, tests item byte `+0x250`, writes zero to `+0x251`, and records a changed flag. Only the changed branch refreshes and calls `FUN_018ab560` with page 1.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:004113d0` — FUN_004113d0
- `function:004aeac0` — FUN_004aeac0
- `function:018ab560` — FUN_018ab560
- `function:018af290` — FUN_018af290
- `function:01951400` — FUN_01951400

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

- The recovered class name for the eligible collection item is not available.
- The handler has no local error, retry, or rollback path.
