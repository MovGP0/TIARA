# &Copy

> Analysis status: Complete. The shared handler and recovered SynEdit copy routine establish the selection guard and clipboard output.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MEdit.MICopy |
| Control class | TMenuItem |
| Caption | &Copy |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MICopyClick |
| Handler address | 015324a0 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MEdit.MICopy` |
| Handler node | `function:015324a0` |
| Graph layer | UI |

## What happens when clicked

`FUN_015324a0` passes the Netlist Editor's SynEdit control at form offset `+0x958` to `FUN_00bf1d60`. That routine returns without clipboard access when the selection is empty. Otherwise, it extracts the selected text and writes standard text plus SynEdit selection-mode data to the clipboard.

The handler does not inspect `Sender`, so `MICopy` and the toolbar control use the same path. Copy does not change the editor text.

## Click flow

```mermaid
flowchart TD
    control["Click Copy menu item"] --> handler["FUN_015324a0"]
    handler --> selected{"Selection present?"}
    selected -->|No| noop["Return without clipboard access"]
    selected -->|Yes| clipboard["Write text and SynEdit mode data"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015324A0__FUN_015324a0.c](../../../DecompiledSources/Tina16/functions/00000000015324A0__FUN_015324a0.c)
- Recovered role: Copies the selected Netlist Editor text to the clipboard.
- Current graph summary: Handles 2 Delphi UI events: NetlistEditor.BtnPanel.CopyButton.OnClick, NetlistEditor.MainMenu.MEdit.MICopy.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00bf1d60` — FUN_00bf1d60

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

- The handler does not inspect `Sender`; the menu item and toolbar button use the same selection state.
- Clipboard allocation failures are handled inside the recovered SynEdit routine; this wrapper has no local message path.
