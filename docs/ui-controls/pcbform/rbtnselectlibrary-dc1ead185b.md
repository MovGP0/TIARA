# Select Library

> Analysis status: Reviewed: the handler synchronizes the controls for select-library mode.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Form caption | PCB information for SPICE macro components |
| Component path | PcbForm.Panel2.rbtnSelectLibrary |
| Control class | TRadioButton |
| Caption | Select Library |
| Hint | Not present |
| Handler name | rbtnSelectLibraryClick |
| Handler address | 00ed5150 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel2.rbtnSelectLibrary` |
| Handler node | `function:00ed5150` |
| Graph layer | UI |

## What happens when clicked

1. The recovered field map identifies offset `0x848` as `rbtnCreateLibrary`, `0x850` as `etdNewLibrary`, `0x858` as `cbxSelectLibrary`, and `0x860` as `sbtnCreateLibrary`.
2. This handler reads the opposite Create Library radio state. It enables the new-library editor when Create mode is active, makes the create button follow that editor state, and enables the existing-library combo when the editor is disabled.
3. Therefore, after Select Library becomes selected, the combo is enabled and the new-library editor and create button are disabled. The handler does not switch libraries itself; the combo's separate change handler does that.

## Click flow

```mermaid
flowchart TD
    control["PcbForm.Panel2.rbtnSelectLibrary"] -->|OnClick| handler["FUN_00ed5150"]
    handler --> decision{"Create Library radio checked?"}
    decision -->|Yes| action["Enable new-library editor and create button"]
    decision -->|No| noop["Enable existing-library selector"]
    action --> outcome["Keep the two mode input groups mutually exclusive"]
    noop --> outcome
```

## Handler and call-path evidence

- [`FUN_00ed5150`](../../../DecompiledSources/Tina16/functions/0000000000ED5150__FUN_00ed5150.c) — Synchronize select-library mode controls.
- [`FUN_00ed51f0`](../../../DecompiledSources/Tina16/functions/0000000000ED51F0__FUN_00ed51f0.c) — synchronize controls from the opposite radio state.
- [`FUN_00ecba00`](../../../DecompiledSources/Tina16/functions/0000000000ECBA00__FUN_00ecba00.c) — switch the active PCB library from the combo change path.

## Resource and glyph evidence

- Recovered form resource: [`ui-evidence.json`](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json).

## Inputs, outputs, and limits

- Input: an OnClick event from `PcbForm.Panel2.rbtnSelectLibrary`, plus the current form selections and state described above.
- State change: Reads the opposite create-mode radio state, enables the existing-library selector for select mode, and disables the new-library editor and create button.
- Error or no-op behavior: The decision branches above identify the recovered validation, cancel, confirmation, boundary, or no-op path.
- Analysis limit: The actual library switch belongs to `cbxSelectLibrary.OnChange`, not this click handler.

