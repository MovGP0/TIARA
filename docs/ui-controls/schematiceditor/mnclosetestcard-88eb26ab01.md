# &Close Testcard

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.mnCloseTestcard |
| Control class | TMenuItem |
| Caption | &Close Testcard |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnCloseTestcardClick |
| Handler address | 01c98900 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.mnCloseTestcard` |
| Handler node | `function:01c98900` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnCloseTestcardClick at 01c98900. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Close Testcard"] -->|"OnClick"| handler["mnCloseTestcardClick (01c98900)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C98900__FUN_01c98900.c](../../../DecompiledSources/Tina16/functions/0000000001C98900__FUN_01c98900.c)
- Recovered role: Evidence-blocked mnCloseTestcardClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTM.mnCloseTestcard.OnClick.
- Current graph behavior: The OnClick binding reaches mnCloseTestcardClick at 01c98900. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTM.mnCloseTestcard to mnCloseTestcardClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C98900__FUN_01c98900.c and directly references 00e1dd50, 01c94450. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00e1dd50` — FUN_00e1dd50
- `function:01c94450` — Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnClose.OnClick.

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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

