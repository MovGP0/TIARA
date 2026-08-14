# &Help

> Analysis status: Source and call-path review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | tables_form |
| Component path | tables_form.GroupBox1.BtnHelp |
| Control class | TBitBtn |
| Caption | &Help |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnHelpClick |
| Handler address | 011ad1d0 |
| Graph node | `resource:dfm:tables_form/tables_form.GroupBox1.BtnHelp` |
| Handler node | `function:011ad1d0` |
| Graph layer | UI |

## What happens when clicked

The handler builds a path to `logiconv.chm` in the application help directory. It asks the localization helper for a language-specific file and uses the original file when the localized file does not exist. It then opens the current shared help-context topic. The click does not change the truth table.

## Click flow

```mermaid
flowchart TD
    control["&Help"] -->|OnClick| handler["FUN_011ad1d0"]
    handler --> path["Build logiconv.chm path"]
    path --> resolver["Resolve localized help file"]
    resolver --> available{"Localized file exists?"}
    available -->|Yes| localized["Use localized file"]
    available -->|No| original["Use original file"]
    localized --> dispatch["Open current help-context topic"]
    original --> dispatch
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011AD1D0__FUN_011ad1d0.c](../../../DecompiledSources/Tina16/functions/00000000011AD1D0__FUN_011ad1d0.c)
- Recovered role: Truth-table contextual-help dispatcher
- Current graph summary: Builds the `logiconv.chm` path, selects an existing localized variant, and opens the current truth-table help topic.
- Current graph behavior: Uses the shared help-context value without changing it, then dispatches the topic through the application help service.
- Current graph evidence: The handler contains the literal `logiconv.chm`, calls the annotated localized-help resolver, and passes the shared help-context value and resolved path to the help service. The extracted two-frame question-mark glyph supports the Help caption.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:01b1def0` — FUN_01b1def0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0485_tables_form_tables_form_GroupBox1_BtnHelp_Glyph_Data.png`](../../../glyph/0485_tables_form_tables_form_GroupBox1_BtnHelp_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The topic depends on the last help-context value that another truth-table control set.
- The recovered handler does not inspect a result from the help service.
