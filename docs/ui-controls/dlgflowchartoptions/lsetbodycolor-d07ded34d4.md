# Color

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | dlgFlowChartOptions |
| Component path | dlgFlowChartOptions.lSetBodyColor |
| Control class | TLabel |
| Caption | Color |
| Hint | Click here to set the color |
| Text | Not present in the recovered resource. |
| Handler name | lSetBodyColorClick |
| Handler address | 00f91eb0 |
| Graph node | `resource:dfm:dlgFlowChartOptions/dlgFlowChartOptions.lSetBodyColor` |
| Handler node | `function:00f91eb0` |
| Graph layer | UI |

## What happens when clicked

The handler reads the current body-color setting from offset `+4` of the global flowchart settings object. It passes that color to `FUN_00f91e80`. This helper sets the form's `TColorDialog` color and runs the dialog.

If the user cancels the color dialog, the handler returns and leaves the `Color` preview label unchanged. If the user accepts the dialog, the handler reads the selected dialog color and uses `FUN_005fc860` to apply it to the preview label's font. This operation updates the preview only. It does not change the global setting. The `BitBtn1` OK handler later reads the same preview color and commits it to the global setting.

The dialog starts with the stored global color each time. The recovered handler has no separate error path.

## Click flow

```mermaid
flowchart LR
    control["Color"] -->|OnClick| handler["FUN_00f91eb0"]
    handler --> readSetting["Read global body-color setting"]
    readSetting --> colorDialog["FUN_00f91e80: initialize and run TColorDialog"]
    colorDialog --> accepted{"Color dialog accepted?"}
    accepted -->|No| unchanged["Leave the preview unchanged"]
    accepted -->|Yes| applyPreview["FUN_005fc860: apply selected color to preview font"]
    applyPreview --> waitForOK["Wait for the OK-button commit"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F91EB0__FUN_00f91eb0.c](../../../DecompiledSources/Tina16/functions/0000000000F91EB0__FUN_00f91eb0.c)
- Recovered role: Flowchart body-color preview click handler
- Current graph summary: Opens the form's color dialog with the current flowchart body color. When accepted, it applies the selected color to the Color label preview. Handles 1 Delphi UI event: dlgFlowChartOptions.lSetBodyColor.OnClick.
- Current graph behavior: Opens the form's color dialog with the current flowchart body color. When accepted, it applies the selected color to the Color label preview.
- Current graph evidence: The clickable Color label has hint Click here to set the color and is next to Body. This handler uses global body-color offset 4 and updates the preview only; the dialog OK handler commits it.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:005fc860` — FUN_005fc860
- `function:00f91e80` — Flowchart color-dialog execution helper

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Color at distance 0.
- Rank 2: Body:  at distance 63.

## Analysis limits

- The global settings type and original Delphi field name are not recovered. The source identifies the body-color field only as offset `+4` from `PTR_DAT_02002068`.
- The original Delphi name of `FUN_00f91e80` is not recovered.
