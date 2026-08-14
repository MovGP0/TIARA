# Edit Symbol...

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmEditSymbol |
| Control class | TMenuItem |
| Caption | Edit Symbol... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnEditSymbolClick |
| Handler address | 01c931a0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmEditSymbol` |
| Handler node | `function:01c931a0` |
| Graph layer | UI |

## What happens when clicked

If the selected object is a valid component, the handler resolves its symbol or macro record, opens the symbol editor, and commits accepted changes. It then recalculates bounds and redraws the schematic. With no valid component it does nothing. Sender is unused.

## Click flow

```mermaid
flowchart TD
    control["Edit Symbol..."] -->|"OnClick"| handler["mnEditSymbolClick (01c931a0)"]
    handler --> guard{"Valid component selected?"}
    guard -->|"No"| noChange["Do not open symbol editor"]
    guard -->|"Yes"| action["Open symbol editor and commit accepted changes"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C931A0__FUN_01c931a0.c](../../../DecompiledSources/Tina16/functions/0000000001C931A0__FUN_01c931a0.c)
- Recovered role: Edit the selected component symbol.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.Edit.mnEditSymbol.OnClick, SchematicEditor.SchPopup.pmEditSymbol.OnClick.
- Current graph behavior: If the selected object is a valid component, the handler resolves its symbol or macro record, opens the symbol editor, and commits accepted changes. It then recalculates bounds and redraws the schematic. With no valid component it does nothing. Sender is unused.
- Current graph evidence: The recovered body checks selection and component class, resolves the symbol record, constructs and executes the symbol editor, tests the accepted result, then calls commit, bounds, and redraw helpers. Two DFM controls share the handler.
- Complexity: complex
- Distinct outgoing calls: 18

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414b50` — FUN_00414b50
- `function:0043f750` — FUN_0043f750
- `function:004aeac0` — FUN_004aeac0
- `function:00b957c0` — FUN_00b957c0
- `function:00c40270` — FUN_00c40270
- `function:00c40790` — FUN_00c40790
- `function:00c41060` — FUN_00c41060
- `function:01768da0` — FUN_01768da0
- `function:01768e50` — FUN_01768e50
- `function:0198a580` — FUN_0198a580
- `function:0198d430` — FUN_0198d430
- `function:01993ec0` — FUN_01993ec0
- `function:01c8cee0` — FUN_01c8cee0
- `function:01c92b70` — FUN_01c92b70
- `function:01d01990` — FUN_01d01990
- `function:01d01aa0` — FUN_01d01aa0
- `function:01d04d40` — FUN_01d04d40

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

- The specific symbol record subtype is selected at runtime.

