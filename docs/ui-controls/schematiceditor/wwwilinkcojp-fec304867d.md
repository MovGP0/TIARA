# www.ilink.co.jp

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Help.mnInterlinkontheWeb.wwwilinkcojp |
| Control class | TMenuItem |
| Caption | www.ilink.co.jp |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OnTheWeb |
| Handler address | 01c8f060 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Help.mnInterlinkontheWeb.wwwilinkcojp` |
| Handler node | `function:01c8f060` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["www.ilink.co.jp"] -->|OnClick| handler["FUN_01c8f060"]
    handler --> call1["FUN_004113f0"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00416740"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_01c8eff0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8F060__FUN_01c8f060.c](../../../DecompiledSources/Tina16/functions/0000000001C8F060__FUN_01c8f060.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 6 Delphi UI events: SchematicEditor.MainMenu.Help.mnDesignSoftontheWeb.wwwdesignsoftwarecom.OnClick, SchematicEditor.MainMenu.Help.mnDesignSoftontheWeb.wwwtinacom.OnClick, SchematicEditor.MainMenu.Help.mnDesignSoftontheWeb.wwwtinacloudcom.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:004113f0` — FUN_004113f0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416740` — FUN_00416740
- `function:00416cd0` — FUN_00416cd0
- `function:01c8eff0` — FUN_01c8eff0

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
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
