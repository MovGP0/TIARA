# mW

> Analysis status: Source reviewed: the click cycles the reference unit and converts the stored reference value.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.Ref_WindowGroupBox.RefUnitSpBtn |
| Control class | TSpeedButton |
| Caption | mW |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | RefUnitSpBtnClick |
| Handler address | 0138d410 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.Ref_WindowGroupBox.RefUnitSpBtn` |
| Handler node | `function:0138d410` |
| Graph layer | UI |

## What happens when clicked

The handler increments reference-unit byte `+0xE91` and wraps it modulo `3`. For unit index `2`, it clears the unit label and shows the recovered text Source. For the other units, it updates the unit caption from a two-entry table and gets a converted reference value through analyzer backend virtual slot `+0xA0`.

It then converts or transforms the reference value stored in the plot model according to the active analyzer mode and updates model flag `+0x120`. When a source object exists, it also invokes that source's reference-update path.

## Click flow

```mermaid
flowchart TD
    control["Reference-unit button"] -->|OnClick| handler["RefUnitSpBtnClick"]
    handler --> cycle["Cycle unit index modulo 3"]
    cycle --> source{"Unit index 2?"}
    source -->|Yes| sourceText["Show Source reference"]
    source -->|No| convert["Update caption and convert value"]
    sourceText --> model["Transform stored reference for analyzer mode"]
    convert --> model
    model --> notify["Notify active source when available"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138D410__FUN_0138d410.c](../../../DecompiledSources/Tina16/functions/000000000138D410__FUN_0138d410.c)
- Recovered role: Cycles three reference-unit modes and converts the displayed and stored reference value.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.Ref_WindowGroupBox.RefUnitSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:004113f0` — FUN_004113f0
- `function:0064de00` — VCL control text setter with change suppression
- `function:00b90440` — FUN_00b90440
- `function:010e1a60` — FUN_010e1a60
- `function:010e1b10` — FUN_010e1b10
- `function:01138af0` — FUN_01138af0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Reference at distance 93.
- Rank 2: Window at distance 109.

## Analysis limits

- The recovered text table does not expose the names of the first two reference units in this handler source.
- The source callback and backend conversion formulas are not fully recovered.
