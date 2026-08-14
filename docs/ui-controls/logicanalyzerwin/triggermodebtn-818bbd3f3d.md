# Mode

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.TriggerBox.TriggerModeBtn |
| Control class | TSpeedButton |
| Caption | Mode |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TriggerModeBtnClick |
| Handler address | 0151ff80 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.TriggerBox.TriggerModeBtn` |
| Handler node | `function:0151ff80` |
| Graph layer | UI |

## What happens when clicked

The **Mode** and **Source** buttons share trigger group `2`. When Mode is down and form mode byte `+0xeb8` still selects Source, `FUN_0151ff80` clears the byte. It then loads the trigger-mode item list and selected index from analyzer engine virtual getters `+0x70` and `+0x78` into the shared combo at `+0xcb8`.

The direct click changes the selected editor mode and combo contents. It does not store a new trigger mode. A later combo change in Mode state stores the selected item through engine slot `+0x80` and updates two related control states when item `1` is selected.

If Mode is not down or mode state is already active, the handler is a silent no-op. It has no message, file write, local exception handler, or rollback.

## Click flow

```mermaid
flowchart TD
    Click["Click Mode"] --> Handler["FUN_0151ff80"]
    Handler --> Active{"Mode is down and editor state is Source?"}
    Active -->|No| NoOp["Return without changing combo"]
    Active -->|Yes| Flag["Clear mode byte +0xeb8"]
    Flag --> Items["Load trigger-mode items and ItemIndex"]
    Items -. "later combo change" .-> Store["Store mode and update related controls"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000151FF80__FUN_0151ff80.c](../../../DecompiledSources/Tina16/functions/000000000151FF80__FUN_0151ff80.c)
- Recovered role: Select and display the Logic Analyzer trigger mode.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.TriggerBox.TriggerModeBtn.OnClick.
- Current graph behavior: The handler selects trigger-mode editing and loads its engine-backed combo state.
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

- Rank 1: Pattern at distance 82.
- Rank 2: Group at distance 90.

## Analysis limits

- Engine methods are indirect VMT calls. Their trigger-mode roles are established by paired read and change-handler data flow.
- Nearby Pattern and Group labels are not used as evidence for this control.
