# Opaque...

> Analysis status: Complete. The command selects opaque background mode and optionally changes its color.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.pmBackground.Background1.OpaqueMnu |
| Control class | TMenuItem |
| Caption | Opaque... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OpaqueMnuClick |
| Handler address | 0149a8b0 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.pmBackground.Background1.OpaqueMnu` |
| Handler node | `function:0149a8b0` |
| Graph layer | UI |

## What happens when clicked

The handler unchecks **Transparent**, checks **Opaque...**, and writes background mode `1` to form field `+0xbd0`. It creates a color dialog, loads the current color from `+0xbd4`, and executes the dialog. Acceptance copies the selected color back to `+0xbd4`. Cancel keeps the old color, but it does not undo opaque mode or the menu checks.

## Click flow

```mermaid
flowchart TD
    control["Choose Opaque..."] --> checks["Check Opaque and clear Transparent"]
    checks --> mode["Set background mode to 1"]
    mode --> dialog["Open color dialog with current color"]
    dialog --> accepted{"Color accepted?"}
    accepted -->|No| keep["Keep old color and opaque mode"]
    accepted -->|Yes| handler["Store selected background color"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_00724d70"]
    handler --> call3["FUN_007e2d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000149A8B0__FUN_0149a8b0.c](../../../DecompiledSources/Tina16/functions/000000000149A8B0__FUN_0149a8b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.pmBackground.Background1.OpaqueMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00724d70` — FUN_00724d70
- `function:007e2d20` — FUN_007e2d20

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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- This menu handler updates form state; it does not directly repaint the editor.
