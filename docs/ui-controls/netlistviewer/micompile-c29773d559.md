# &Compile

> Analysis status: Reviewed from the recovered handler, compiler call path, and form resource.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.MainMenu.MAnalysis.MICompile |
| Control class | TMenuItem |
| Caption | &Compile |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MICompileClick |
| Handler address | 014b5b50 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.MainMenu.MAnalysis.MICompile` |
| Handler node | `function:014b5b50` |
| Graph layer | UI |

## What happens when clicked

The menu item runs the same branch-free handler as the toolbar **Compile** button. The handler temporarily disables the other thread windows, passes the current `Memo` text, the form's netlist state, and the recovered compile options to `FUN_00ee4600`, and then re-enables the windows. It has no `Sender` test, cancel branch, or local error dialog. The compiler and message objects own the output.

## Click flow

```mermaid
flowchart TD
    control["Choose Compile"] --> handler["FUN_014b5b50"]
    handler --> guard["Disable other thread windows"]
    guard --> compile["Compile current Memo text through FUN_00ee4600"]
    compile --> restore["Re-enable the disabled windows"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B5B50__FUN_014b5b50.c](../../../DecompiledSources/Tina16/functions/00000000014B5B50__FUN_014b5b50.c)
- Recovered role: Compile the current Netlist Viewer source.
- Current graph summary: Handles 2 Delphi UI events: NetlistViewer.BtnPanel.CompileButton.OnClick, NetlistViewer.MainMenu.MAnalysis.MICompile.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0065b870` — FUN_0065b870
- `function:007f94c0` — FUN_007f94c0
- `function:007f95c0` — FUN_007f95c0
- `function:00ee4600` — FUN_00ee4600

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

- `FUN_00ee4600` is recovered as the shared compile front end, but names for its option record fields are not recovered.
- The menu entry and toolbar button have the same handler and no sender-dependent branch.
