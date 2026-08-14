# Close (Ctrl+F4)

> Analysis status: Reviewed from the shared close handler and host close paths.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.BtnPanel.ToolClose |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Close (Ctrl+F4) |
| Text | Not present in the recovered resource. |
| Handler name | MIExitClick |
| Handler address | 014b57f0 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.BtnPanel.ToolClose` |
| Handler node | `function:014b57f0` |
| Graph layer | UI |

## What happens when clicked

The toolbar button runs the same branch-free handler as **Close Netlist Viewer**. In standalone viewer mode, it asks the host to close the active macro viewer. In the integrated mode, it first sends the current memo lines to the host-owned netlist object and then asks the main application to close the current editor. The handler does not test `Sender` and has no local prompt or return-value check; any close veto or unsaved-work handling belongs to the host paths.

## Click flow

```mermaid
flowchart TD
    control["Click Close toolbar button"] --> handler["FUN_014b57f0"]
    handler --> mode{"Integrated viewer mode?"}
    mode -->|No| macro["Ask host to close active macro viewer"]
    mode -->|Yes| stage["Pass memo lines to host-owned netlist"]
    stage --> editor["Ask main application to close current editor"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B57F0__FUN_014b57f0.c](../../../DecompiledSources/Tina16/functions/00000000014B57F0__FUN_014b57f0.c)
- Recovered role: Close the Netlist Viewer through the active host mode.
- Current graph summary: Handles 2 Delphi UI events: NetlistViewer.BtnPanel.ToolClose.OnClick, NetlistViewer.MainMenu.MFile.MIExit.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01c8d180` — Handles 2 Delphi UI events: SchematicEditor.MainMenu.mnFile.mnCloseMacro.OnClick, SchematicEditor.SchPopup.pmCloseMacro.OnClick.
- `function:01c94450` — Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnClose.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0288_NetlistViewer_NetlistViewer_BtnPanel_ToolClose_Glyph_Data.png`](../../../glyph/0288_NetlistViewer_NetlistViewer_BtnPanel_ToolClose_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The recovered handler does not itself prove whether a downstream host close can prompt or be vetoed.
- The toolbar glyph and hint identify the entry point but do not add a separate close branch.
