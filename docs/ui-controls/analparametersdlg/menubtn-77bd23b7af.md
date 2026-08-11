# MenuBtn

> Analysis status: Source reviewed. Popup placement, menu state, and command boundaries are documented.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AnalParametersDlg |
| Component path | AnalParametersDlg.pnlButtons.MenuBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MenuBtnClick |
| Handler address | 01153760 |
| Graph node | `resource:dfm:AnalParametersDlg/AnalParametersDlg.pnlButtons.MenuBtn` |
| Handler node | `function:01153760` |
| Graph layer | UI |

## What happens when clicked

`MenuBtn` opens the Analysis Parameters popup menu. It does not run a menu
command itself.

`FUN_01153760` uses the button at form offset `0x710` as the popup anchor. It
builds the button-local point `(MenuBtn.Width, 0)`. This point is the top-right
edge of the button's client area. `FUN_0064d1f0` converts that point to screen
coordinates. The handler then adds two pixels to the screen X coordinate and
calls `PopupMenu.Popup(X, Y)` through VMT slot `0xA8` on the popup menu at form
offset `0x6C0`. The result is a menu aligned with the top of the button and
positioned two pixels to its right. Runtime scaling and the form's screen
position determine the final coordinates.

The click handler does not change menu-item state before it opens the menu.
The popup menu has no recovered `OnPopup` handler. Its application state is
prepared earlier:

- `FormCreate` loads the saved `Main Params view` flag into form byte `0x8E0`.
- `FormShow` sets `PMIViewAll.Checked` when that flag is `0`, then rebuilds the
  parameter grid.
- `PMIViewAllClick` toggles the flag, saves it, updates the same check mark,
  rebuilds the grid, and resizes the form. Thus, the next popup uses the check
  state that the form already prepared.
- The DFM does not set `Enabled = false` on `View All`, `Tina default`, `Open`,
  `Save`, or `Save As`. No recovered application branch disables these items
  before this popup. `Save` remains usable without a current file name because
  its own handler routes that case to `Save As`.
- The resource contains `Show description` and `Hide description` items with
  `Visible = false` and no click handlers. They do not appear as actionable
  commands in the recovered menu.

Menu selection is a separate VCL dispatch step. The button handler does not
call these commands:

- `View All` changes the compact/all-parameters view.
- `Tina default` replaces the working parameters with the built-in defaults.
- `Open...` shows the load dialog and loads a selected parameter file.
- `Save` writes the current values to the known file or routes to `Save As`.
- `Save As...` asks for a file name and then writes the current values.

If the user dismisses the popup without selecting an item, VCL dispatches no
menu-item `OnClick` handler. `FUN_01153760` has no statement after the popup
call, so cancellation makes no application-state change in this path. The
`Open` and `Save As` command handlers also test their file-dialog result and do
nothing when those dialogs are canceled. The button handler has no explicit
failure branch, return-value check, or local error recovery for popup display.

## Click flow

```mermaid
flowchart TD
    prepared["Earlier: prepare View All check state"] --> click["MenuBtn OnClick"]
    click --> point["Build local point at button width, 0"]
    point --> screen["Convert the point to screen coordinates"]
    screen --> offset["Add 2 pixels to screen X"]
    offset --> popup["Show PopupMenu at X plus 2, Y"]
    popup --> choice{"User selects a command?"}
    choice -->|No| cancel["Close menu with no application-state change"]
    choice -->|Yes| dispatch["VCL dispatches that menu item's OnClick"]
    dispatch --> view["View All"]
    dispatch --> defaults["Tina default"]
    dispatch --> open["Open file"]
    dispatch --> save["Save or Save As"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001153760__FUN_01153760.c](../../../DecompiledSources/Tina16/functions/0000000001153760__FUN_01153760.c)
- Recovered role: Analysis Parameters popup-menu anchor and display handler.
- Current graph summary: Handles 1 Delphi UI event: AnalParametersDlg.pnlButtons.MenuBtn.OnClick.
- Behavior: Opens `PopupMenu` at the button's screen-space right edge plus a
  two-pixel horizontal offset.
- Evidence: The handler reads `MenuBtn.Width` from form field `0x710`, packs
  `(Width, 0)`, converts it through the button's local-to-screen helper, adds 2
  to X, and calls VMT slot `0xA8` on the `TPopupMenu` field at `0x6C0`.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- [FUN_00498310](../../../DecompiledSources/Tina16/functions/0000000000498310__FUN_00498310.c)
  packs two 32-bit coordinates into the returned point value.
- [FUN_0064d1f0](../../../DecompiledSources/Tina16/functions/000000000064D1F0__FUN_0064d1f0.c)
  converts a control-local point to screen coordinates by adding the control's
  screen origin.

The final `TPopupMenu.Popup` call is virtual, so the graph has no direct call
edge for it.

## Menu state and command evidence

- [FormCreate](../../../DecompiledSources/Tina16/functions/0000000001153810__FUN_01153810.c)
  loads the persisted main-parameters view flag.
- [FormShow](../../../DecompiledSources/Tina16/functions/0000000001152760__FUN_01152760.c)
  applies `PMIViewAll.Checked` and rebuilds the grid.
- [PMIViewAllClick](../../../DecompiledSources/Tina16/functions/0000000001153360__FUN_01153360.c)
  toggles and persists the view state, updates the check mark, and rebuilds the
  visible parameter controls.
- The other commands have distinct handlers:
  [PMIDefaultClick](../../../DecompiledSources/Tina16/functions/0000000001153470__FUN_01153470.c),
  [PMILoadClick](../../../DecompiledSources/Tina16/functions/00000000011534E0__FUN_011534e0.c),
  [PMISaveClick](../../../DecompiledSources/Tina16/functions/0000000001153600__FUN_01153600.c),
  and [PMISaveAsClick](../../../DecompiledSources/Tina16/functions/0000000001153680__FUN_01153680.c).

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Popup commands: `View All`, `Tina default`, `Open...`, `Save`, and
  `Save As...`.
- Dynamic state: `PMIViewAll.Checked` reflects the saved view flag.
- Hidden items: `Show description` and `Hide description` both have
  `Visible = false` and no event handler.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0013_AnalParametersDlg_AnalParametersDlg_pnlButtons_MenuBtn_Glyph_Data.png`](../../../glyph/0013_AnalParametersDlg_AnalParametersDlg_pnlButtons_MenuBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The glyph has two recovered frames, but its small pointer-like image is not
  used as evidence for command meaning. The handler source and the popup-menu
  resources establish the behavior.
- No recovered application branch changes the actionable menu items' enabled
  state before this popup. Native VCL menu processing is indirect, so the graph
  does not expose its internal display or dismissal path.
- The knowledge-graph JSON export was absent during review. Graph neighborhood
  and layer checks used the canonical DuckDB database without changing it.
