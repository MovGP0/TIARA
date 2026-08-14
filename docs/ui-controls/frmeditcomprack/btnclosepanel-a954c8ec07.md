# btnClosePanel

> Analysis status: Reviewed against the recovered handler, resource, and glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditCompRack |
| Component path | frmEditCompRack.pnlBrowser.pnlBrowserShowIcons.pnlNewIni.btnClosePanel |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnClosePanelClick |
| Handler address | 01b9ace0 |
| Graph node | `resource:dfm:frmEditCompRack/frmEditCompRack.pnlBrowser.pnlBrowserShowIcons.pnlNewIni.btnClosePanel` |
| Handler node | `function:01b9ace0` |
| Graph layer | UI |

## What happens when clicked

The handler hides the new-file panel. It does not create a file and it does not change the entered name. The recovered cross glyph agrees with the close action, but the handler call is the primary evidence.

## Click flow

```mermaid
flowchart LR
    control["Click the cross button"] --> handler["Set the new-file panel to hidden"]
    handler --> done["Return to the file tabs"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B9ACE0__FUN_01b9ace0.c](../../../DecompiledSources/Tina16/functions/0000000001B9ACE0__FUN_01b9ace0.c)
- Recovered role: Closes the Component Bar new-file panel.
- Current graph summary: Handles 1 Delphi UI event: frmEditCompRack.pnlBrowser.pnlBrowserShowIcons.pnlNewIni.btnClosePanel.OnClick.
- Current graph behavior: Sets the panel at form offset `0x810` to not visible.
- Current graph evidence: The handler calls the recovered VCL visibility setter `FUN_0064dbe0` with the object at `param_1 + 0x810` and value 0. The extracted glyph is a cross.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0184_frmEditCompRack_frmEditCompRack_pnlBrowser_pnlBrowserShowIcons_pnlNewIni_btnClosePanel_Glyph_Data.png`](../../../glyph/0184_frmEditCompRack_frmEditCompRack_pnlBrowser_pnlBrowserShowIcons_pnlNewIni_btnClosePanel_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Enter file name: at distance 288.

## Analysis limits

- The recovered handler does not clear the file-name field.
