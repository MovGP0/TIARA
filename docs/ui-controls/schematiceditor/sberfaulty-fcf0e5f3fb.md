# Select Faulty

> Analysis status: Reviewed from recovered source, shared handlers, resource text, and glyph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsCurTask.GroupBox2.SolPages.tsFault.sbERFaulty |
| Control class | TSpeedButton |
| Hint | Select Faulty\|Select the components that you consider are faulty |
| Handler | sbERFaultyClick at 01c7ccf0 |

## What happens when clicked

The handler cancels and destroys any existing editor selection helper. It creates a fault-response selection helper with mode byte `1` and installs it as the active helper. The click arms component selection; it does not mark a component by itself. A later schematic or rack interaction supplies the selected component to the helper.

## Click flow

```mermaid
flowchart TD
    control["Select Faulty"] --> handler["sbERFaultyClick (01c7ccf0)"]
    handler --> clear["Clear prior selection helper"]
    clear --> create["Create fault-response helper with mode 1"]
    create --> install["Install active helper"]
    install --> wait["Wait for a component click"]
```

## Handler evidence

- Source: [FUN_01c7ccf0](../../../DecompiledSources/Tina16/functions/0000000001C7CCF0__FUN_01c7ccf0.c)
- [FUN_01c6cf20](../../../DecompiledSources/Tina16/functions/0000000001C6CF20__FUN_01c6cf20.c) removes the prior helper. [FUN_01c6cee0](../../../DecompiledSources/Tina16/functions/0000000001C6CEE0__FUN_01c6cee0.c) installs the replacement.
- [FUN_0136c720](../../../DecompiledSources/Tina16/functions/000000000136C720__FUN_0136c720.c) constructs this helper and stores the supplied mode byte.
- The same parent page has the recovered label `Please select the faulty component(s).`
- Extracted glyph: [Select Faulty glyph](../../../glyph/0362_SchematicEditor_SchematicEditor_EditorPanel_ExamPanel_ExamMainPages_tsCurTask_GroupBox2_SolPages_tsFault_sbERFau_Glyph_Data.png)

## No-op and error behavior

- No component is changed until a later component-selection event.
- The recovered handler has no separate failure dialog.
