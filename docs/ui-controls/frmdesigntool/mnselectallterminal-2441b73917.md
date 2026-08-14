# Select All

> Analysis status: Complete. The command selects all terminal text.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.pmTerminal.mnSelectAllTerminal |
| Control class | TMenuItem |
| Caption | Select All |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSelectAllTerminalClick |
| Handler address | 01498f90 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.pmTerminal.mnSelectAllTerminal` |
| Handler node | `function:01498f90` |
| Graph layer | UI |

## What happens when clicked

The handler builds a selection from line 1 and column 1 through the last character of the terminal editor's final line. It applies both endpoints and requests a selection-state update. It does not copy text or change terminal content.

## Click flow

```mermaid
flowchart TD
    click["Choose terminal Select All"] --> range["Build full terminal range"]
    range --> select["Apply range and update selection state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001498F90__FUN_01498f90.c](../../../DecompiledSources/Tina16/functions/0000000001498F90__FUN_01498f90.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.pmTerminal.mnSelectAllTerminal.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

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
- An empty terminal still receives the helper's full-range selection update.
