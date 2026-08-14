# Display...

> Analysis status: Source reviewed: the click shows the display-control panel.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.ControlGroupBox.DisplayControlSpBtn |
| Control class | TSpeedButton |
| Caption | Display... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DisplayControlSpBtnClick |
| Handler address | 0138d230 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.ControlGroupBox.DisplayControlSpBtn` |
| Handler node | `function:0138d230` |
| Graph layer | UI |

## What happens when clicked

The handler shows the panel at form field `+0xB78`. It hides the trigger-control panel at `+0xD60` and the reference-window panel at `+0xDF8`.

The three calls use the common VCL visibility helper. No data model or analyzer backend state changes in this handler.

## Click flow

```mermaid
flowchart LR
    control["Display button"] -->|OnClick| handler["DisplayControlSpBtnClick"]
    handler --> show["Show display panel +0xB78"]
    handler --> hideTrigger["Hide trigger panel +0xD60"]
    handler --> hideReference["Hide reference panel +0xDF8"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138D230__FUN_0138d230.c](../../../DecompiledSources/Tina16/functions/000000000138D230__FUN_0138d230.c)
- Recovered role: Shows the display-control panel and hides the other inline control panels.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.ControlGroupBox.DisplayControlSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0

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

- The recovered field offsets do not provide the original Delphi panel names.
- The source proves visibility changes only; it does not prove a persistent display setting change.
