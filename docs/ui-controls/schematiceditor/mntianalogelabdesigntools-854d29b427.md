# TI Analog eLab Design Center

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTIUtilities.mnTIAnalogeLabDesignTools |
| Control class | TMenuItem |
| Caption | TI Analog eLab Design Center |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnTIAnalogeLabDesignToolsClick |
| Handler address | 01c9d240 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTIUtilities.mnTIAnalogeLabDesignTools` |
| Handler node | `function:01c9d240` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnTIAnalogeLabDesignToolsClick at 01c9d240. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["TI Analog eLab Design Center"] -->|"OnClick"| handler["mnTIAnalogeLabDesignToolsClick (01c9d240)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9D240__FUN_01c9d240.c](../../../DecompiledSources/Tina16/functions/0000000001C9D240__FUN_01c9d240.c)
- Recovered role: Evidence-blocked mnTIAnalogeLabDesignToolsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTIUtilities.mnTIAnalogeLabDesignTools.OnClick.
- Current graph behavior: The OnClick binding reaches mnTIAnalogeLabDesignToolsClick at 01c9d240. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTIUtilities.mnTIAnalogeLabDesignTools to mnTIAnalogeLabDesignToolsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C9D240__FUN_01c9d240.c and directly references 00414480, 00414b50, 00416740. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416740` — FUN_00416740

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

