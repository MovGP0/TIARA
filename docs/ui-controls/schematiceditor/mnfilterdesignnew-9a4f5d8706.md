# Filter Design New...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnFilterDesignNew |
| Control class | TMenuItem |
| Caption | Filter Design New... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnFilterDesignNewClick |
| Handler address | 01c98bf0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnFilterDesignNew` |
| Handler node | `function:01c98bf0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnFilterDesignNewClick at 01c98bf0. The recovered body has 13 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Filter Design New..."] -->|"OnClick"| handler["mnFilterDesignNewClick (01c98bf0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C98BF0__FUN_01c98bf0.c](../../../DecompiledSources/Tina16/functions/0000000001C98BF0__FUN_01c98bf0.c)
- Recovered role: Evidence-blocked mnFilterDesignNewClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnFilterDesignNew.OnClick.
- Current graph behavior: The OnClick binding reaches mnFilterDesignNewClick at 01c98bf0. The recovered body has 13 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnFilterDesignNew to mnFilterDesignNewClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C98BF0__FUN_01c98bf0.c and directly references 00410f20, 00414480, 00416ba0, 00416cd0, 0064e770, 007fc180, 0123b660, 0123b940, and 5 more. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00416cd0` — FUN_00416cd0
- `function:0064e770` — FUN_0064e770
- `function:007fc180` — FUN_007fc180
- `function:0123b660` — FUN_0123b660
- `function:0123b940` — FUN_0123b940
- `function:0123ba50` — FUN_0123ba50
- `function:0123bc40` — FUN_0123bc40
- `function:019a4600` — FUN_019a4600
- `function:019d45b0` — FUN_019d45b0
- `function:01c77470` — FUN_01c77470

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

