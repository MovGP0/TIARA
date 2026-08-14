# Solid

> Analysis status: Complete. The command selects solid border mode.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.pmBackground.Border1.SolidMnu |
| Control class | TMenuItem |
| Caption | Solid |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SolidMnuClick |
| Handler address | 0149a980 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.pmBackground.Border1.SolidMnu` |
| Handler node | `function:0149a980` |
| Graph layer | UI |

## What happens when clicked

The handler clears the checks for **None** and **Dotted**, checks **Solid**, and writes border mode `1` to form field `+0xbd8`. It does not directly repaint the editor. Repeated selection leaves the same exclusive state.

## Click flow

```mermaid
flowchart TD
    click["Choose Solid"] --> checks["Clear None and Dotted; check Solid"]
    checks --> mode["Set border mode to 1"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000149A980__FUN_0149a980.c](../../../DecompiledSources/Tina16/functions/000000000149A980__FUN_0149a980.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.pmBackground.Border1.SolidMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

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
- The original Delphi enum name for border value `1` is not recovered.
