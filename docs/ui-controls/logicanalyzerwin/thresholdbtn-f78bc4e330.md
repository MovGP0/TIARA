# Thres

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.MeasurementGroupBox.ThresholdBtn |
| Control class | TSpeedButton |
| Caption | Thres |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ThresholdBtnClick |
| Handler address | 01520c80 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.MeasurementGroupBox.ThresholdBtn` |
| Handler node | `function:01520c80` |
| Graph layer | UI |

## What happens when clicked

The **Thres** and **Clock** buttons share measurement group `2`. When Thres is down and form mode byte `+0xeb9` still selects Clock, `FUN_01520c80` clears that byte. It then loads the threshold item list and selected index from analyzer engine virtual getters `+0x150` and `+0x158` into the shared combo at `+0xce8`.

The direct click changes the selected mode and combo contents. It does not set a new engine threshold. A later combo change in threshold mode stores the selected index through engine slot `+0x160`.

If Thres is not down or threshold mode is already active, the handler is a silent no-op. It has no message, file write, local exception handler, or rollback.

## Click flow

```mermaid
flowchart TD
    Click["Click Thres"] --> Handler["FUN_01520c80"]
    Handler --> Active{"Thres is down and mode is Clock?"}
    Active -->|No| NoOp["Return without changing combo"]
    Active -->|Yes| Flag["Clear mode byte +0xeb9"]
    Flag --> Items["Load threshold items and ItemIndex"]
    Items -. "later combo change" .-> Store["Store selected threshold index"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001520C80__FUN_01520c80.c](../../../DecompiledSources/Tina16/functions/0000000001520C80__FUN_01520c80.c)
- Recovered role: Select and display the Logic Analyzer threshold setting.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.MeasurementGroupBox.ThresholdBtn.OnClick.
- Current graph behavior: The handler selects threshold mode and loads its engine-backed combo state.
- Current graph evidence: The Down-state guard, mode byte, paired engine getters, and shared combo setters establish the behavior.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

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

- Engine methods are indirect VMT calls. Their threshold roles are established by paired mode and change-handler data flow.
- The direct click does not identify the physical threshold units or persistence.
