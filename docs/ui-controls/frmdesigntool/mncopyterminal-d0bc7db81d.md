# Copy

> Analysis status: Complete. The command copies all terminal text to the clipboard.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.pmTerminal.mnCopyTerminal |
| Control class | TMenuItem |
| Caption | Copy |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnCopyTerminalClick |
| Handler address | 01498de0 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.pmTerminal.mnCopyTerminal` |
| Handler node | `function:01498de0` |
| Graph layer | UI |

## What happens when clicked

The handler first selects the complete terminal range, from line 1 and column 1 to the final character. It then copies that selection as standard clipboard text and includes SynEdit selection-mode data. An empty terminal results in no clipboard text.

## Click flow

```mermaid
flowchart TD
    click["Choose terminal Copy"] --> select["Select all terminal text"]
    select --> empty{"Selection empty?"}
    empty -->|Yes| stop["Do not access clipboard"]
    empty -->|No| handler["Copy text and SynEdit selection mode"]
    handler --> call1["FUN_00bf1d60"]
    handler --> call2["FUN_00bfa390"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001498DE0__FUN_01498de0.c](../../../DecompiledSources/Tina16/functions/0000000001498DE0__FUN_01498de0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.pmTerminal.mnCopyTerminal.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00bf1d60` — FUN_00bf1d60
- `function:00bfa390` — FUN_00bfa390

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
- This command replaces the user's previous terminal selection with the full range.
