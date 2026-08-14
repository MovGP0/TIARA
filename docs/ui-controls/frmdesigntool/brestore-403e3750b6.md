# Restore

> Analysis status: Complete. The command restores the saved design-tool circuit state and reports completion.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.SimplePanel.bRestore |
| Control class | TBitBtn |
| Caption | Restore |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bRestoreClick |
| Handler address | 01497f00 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.SimplePanel.bRestore` |
| Handler node | `function:01497f00` |
| Graph layer | UI |

## What happens when clicked

The handler restores values from the form's saved state with `FUN_01497dd0`, asks the application to refresh circuit state, and shows the localized `CircuitRestored` message. It does not ask for confirmation and has no local failure branch.

## Click flow

```mermaid
flowchart TD
    control["Click Restore"] --> restore["Restore saved values to circuit objects"]
    restore --> refresh["Refresh circuit state"]
    refresh --> handler["Show Circuit restored message"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_0041ddd0"]
    handler --> call3["FUN_00b89270"]
    handler --> call4["FUN_00b8e650"]
    handler --> call5["FUN_01493b70"]
    handler --> call6["FUN_01497dd0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001497F00__FUN_01497f00.c](../../../DecompiledSources/Tina16/functions/0000000001497F00__FUN_01497f00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.SimplePanel.bRestore.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0041ddd0` — FUN_0041ddd0
- `function:00b89270` — FUN_00b89270
- `function:00b8e650` — FUN_00b8e650
- `function:01493b70` — FUN_01493b70
- `function:01497dd0` — FUN_01497dd0
- `function:01ca2aa0` — FUN_01ca2aa0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Input Parameters: at distance 452.
- Rank 2: Title at distance 510.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The recovered source does not show a rollback if a restored object raises an exception.
