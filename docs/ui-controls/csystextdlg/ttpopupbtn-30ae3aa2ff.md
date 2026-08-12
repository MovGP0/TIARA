# TTPopUpBtn

> Analysis status: Source reviewed. Popup placement, prepared menu state, command dispatch, dismissal, and error boundaries are documented.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ButtonsNB.TPage.TTPopUpBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Position and size | Left 8, Top 134, Width 30, Height 30 |
| Style | `bsNew` |
| Number of glyphs | 2 |
| Handler name | TTPopUpBtnClick |
| Handler address | 0146c240 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ButtonsNB.TPage.TTPopUpBtn` |
| Handler node | `function:0146c240` |
| Graph layer | UI |

## What happens when clicked

`TTPopUpBtn` opens `TTPopupMnu`. It does not execute a text or formatting
command itself.

`FUN_0146c240` gets the screen origin of the button's parent through VMT slot
`0xD8`. The recovered control layout then gives this popup point:

- X = parent screen X + button Left + button Width.
- Y = parent screen Y + button Top.

This is the button's top-right edge in screen coordinates. The handler passes
that point to VMT slot `0xA8` on the `TPopupMenu` field at form offset `0x740`.
The DFM position and size make the unscaled page-local point `(38, 134)`, but
the call uses screen coordinates after the parent origin is added. The handler
does not add a gap below or beside the button.

The click handler does not recompute menu state. `TTPopupMnu` also has no
recovered `OnPopup` event. It displays state that the form prepared earlier:

- `FormCreate` loads the saved `Background` and `Border` values from the
  `Text Dialog Setup` section of `TINA.INI` into the working text object. It
  checks one of `Transparent` or `Opaque`, and one of `None`, `Solid`, or
  `Dotted`.
- The model-to-form loader `FUN_0146a9a0` applies those two groups again when
  a caller supplies a text object. It also checks `Popup text` only for the
  recovered popup-text mode value `3`.
- The background, border, wrap, and popup-text command handlers update their
  own check marks. A later open therefore uses those existing marks.

The recovered DFM does not set `Enabled = false` or `Visible = false` on any
`TTPopupMnu` command. The button handler has no enable or visibility branch,
and the menu has no action binding or pre-display event that changes these
properties. The three items whose captions are `-` are separators and have no
click handlers. Thus, no disabled or hidden command is established for this
popup by the recovered application evidence.

Command execution starts only after the user selects a menu item and VCL
dispatches that item's separate `OnClick` handler. The menu contains these
command groups:

- `Open...`, `Save...`, and `Save As...` use the equation-text file dialogs.
  `Save...` delegates to the same handler as `Save As...`.
- `Cut`, `Copy`, `Paste`, and `Select all` call the editor operations.
- `Wrap lines` and `Popup text` toggle their menu checks and related text
  behavior.
- `Background` selects `Transparent` or `Opaque...`; `Border` selects `None`,
  `Solid`, or `Dotted`.
- `Properties...` opens the separate text-properties workflow.

If the user dismisses the popup, VCL dispatches no menu-item handler.
`FUN_0146c240` has no statement after the popup call, so dismissal makes no
application-state change in this path. The opener has no explicit failure
branch, return-value check, message, or local exception recovery. A popup
display error therefore stays at the VCL call boundary. Command-specific
cancel and error behavior begins only in the selected command handler. For
example, `Open...` and `Save As...` test their file-dialog results and do
nothing when the dialog is canceled or returns no file name.

## Click flow

```mermaid
flowchart TD
    prepared["Earlier: load model and prepare menu check marks"] --> click["TTPopUpBtn OnClick"]
    click --> origin["Get parent screen origin"]
    origin --> point["Add button Left plus Width to X and Top to Y"]
    point --> popup["Show TTPopupMnu at the button top-right edge"]
    popup --> choice{"User selects an enabled visible command?"}
    choice -->|No| dismiss["Dismiss menu; no application-state change"]
    choice -->|Yes| dispatch["VCL dispatches that menu item's OnClick"]
    dispatch --> command["Run the selected file, edit, text, style, or properties command"]
    command --> result["Selected handler owns its result, cancel path, and errors"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146C240__FUN_0146c240.c](../../../DecompiledSources/Tina16/functions/000000000146C240__FUN_0146c240.c)
- Recovered role: Text-edit popup-menu anchor and display handler.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ButtonsNB.TPage.TTPopUpBtn.OnClick.
- Behavior: Opens `TTPopupMnu` at the button's top-right edge in screen
  coordinates and leaves command execution to menu-item handlers.
- Evidence: The handler reads `TTPopUpBtn` from form field `0x7C8`, gets the
  screen origin from its parent at control field `0x78`, adds control fields
  `Left` (`0x90`), `Top` (`0x94`), and `Width` (`0x98`), and calls VMT slot
  `0xA8` on the popup menu at form field `0x740`.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph. Both operations in
  the handler are virtual calls. The final call is the popup display boundary.
- [FUN_0064d1f0](../../../DecompiledSources/Tina16/functions/000000000064D1F0__FUN_0064d1f0.c)
  is corroborating VCL evidence: it uses the same VMT slot `0xD8` as the
  control screen-origin operation and adds a local point to that origin.

## Menu state and command evidence

- [FormCreate](../../../DecompiledSources/Tina16/functions/000000000146A2A0__FUN_0146a2a0.c)
  loads the saved background and border values and prepares their mutually
  exclusive menu checks.
- [Settings reader](../../../DecompiledSources/Tina16/functions/0000000001469CB0__FUN_01469cb0.c)
  reads those values from `TINA.INI`, section `Text Dialog Setup`.
- [Model-to-form loader](../../../DecompiledSources/Tina16/functions/000000000146A9A0__FUN_0146a9a0.c)
  applies popup-text, background, and border check state from a supplied text
  object.
- [Wrap lines](../../../DecompiledSources/Tina16/functions/000000000146C620__FUN_0146c620.c),
  [Transparent](../../../DecompiledSources/Tina16/functions/000000000146B9C0__FUN_0146b9c0.c),
  [Opaque](../../../DecompiledSources/Tina16/functions/000000000146BA00__FUN_0146ba00.c),
  [no border](../../../DecompiledSources/Tina16/functions/000000000146BDB0__FUN_0146bdb0.c),
  [solid border](../../../DecompiledSources/Tina16/functions/000000000146BE00__FUN_0146be00.c),
  [dotted border](../../../DecompiledSources/Tina16/functions/000000000146C1F0__FUN_0146c1f0.c),
  and [Popup text](../../../DecompiledSources/Tina16/functions/000000000146C6F0__FUN_0146c6f0.c)
  own their check-state changes.
- File commands have separate handlers for
  [Open](../../../DecompiledSources/Tina16/functions/000000000146C2D0__FUN_0146c2d0.c),
  [Save](../../../DecompiledSources/Tina16/functions/000000000146C460__FUN_0146c460.c),
  and [Save As](../../../DecompiledSources/Tina16/functions/000000000146C470__FUN_0146c470.c).
- Editor commands have separate handlers for
  [Cut](../../../DecompiledSources/Tina16/functions/000000000146C690__FUN_0146c690.c),
  [Copy](../../../DecompiledSources/Tina16/functions/000000000146C6B0__FUN_0146c6b0.c),
  [Paste](../../../DecompiledSources/Tina16/functions/000000000146C6D0__FUN_0146c6d0.c),
  and [Select all](../../../DecompiledSources/Tina16/functions/000000000146CA10__FUN_0146ca10.c).
- [Properties](../../../DecompiledSources/Tina16/functions/000000000146B080__FUN_0146b080.c)
  owns the text-properties dialog and its commit boundary.

## Resource evidence

- `TTPopUpBtn` is a captionless `TBitBtn` on the `Default` button page.
- Its embedded glyph is 32 by 16 pixels. `NumGlyphs = 2` divides it into two
  16 by 16 button-state frames. The frames show a small yellow pointer-like
  symbol. The glyph supports a compact command affordance; handler and popup
  resources establish the menu behavior.
- Popup commands: `Open...`, `Save...`, `Save As...`, `Cut`, `Copy`, `Paste`,
  `Select all`, `Wrap lines`, `Popup text`, `Background`, `Border`, and
  `Properties...`.
- `Cut`, `Copy`, `Paste`, and `Select all` have the recovered shortcuts
  Ctrl+X, Ctrl+C, Ctrl+V, and Ctrl+A.
- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Extracted glyph: [`0052_CSysTextDlg_CSysTextDlg_ButtonsNB_TPage_TTPopUpBtn_Glyph_Data.png`](../../../glyph/0052_CSysTextDlg_CSysTextDlg_ButtonsNB_TPage_TTPopUpBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available. The button has no caption or
  hint, so the glyph is its only recovered on-control cue.

## Analysis limits

- Native VCL menu placement can adjust a popup to remain on screen. The
  recovered handler establishes the requested screen point, not any later
  operating-system adjustment.
- No recovered application branch disables or hides a `TTPopupMnu` command
  before this click. Indirect VCL display and dismissal logic is not exposed as
  a direct graph edge.
- The knowledge-graph JSON export was absent during review. Graph node, event,
  and neighborhood checks used the canonical DuckDB database in read-only
  mode without changing it.
