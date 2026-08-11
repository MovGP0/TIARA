# Current Mode

> Analysis status: Complete. The DFM bindings, recovered field table, change
> query, click handler, validation routine, and persistence path agree on this
> control's behavior.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AnalModeDlg |
| Form caption | Analysis Mode Selection |
| Component path | AnalModeDlg.ButtonPanel.ModeSelectionRG |
| Control class | TMyRadioGroup |
| Caption | ` Current Mode ` |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Items | Single; Temperature stepping; Parameter stepping; Worst Case; Monte Carlo |
| Handler name | ModeSelectionRGClick |
| Handler address | 01155ae0 |
| Graph node | `resource:dfm:AnalModeDlg/AnalModeDlg.ButtonPanel.ModeSelectionRG` |
| Handler node | `function:01155ae0` |
| Graph layer | UI |

## What happens when the selection changes

This radio group selects the analysis mode and the related parameter page. A
change uses two DFM events in sequence:

1. `ModeSelectionRGModifyQuery` validates and captures the mode that the user
   is leaving. If validation reports an error, it sets `CanModify` to false and
   the selected radio item does not change.
2. After an accepted change, `ModeSelectionRGClick` reads the new item index and
   synchronizes the form size, notebook visibility, and active page.

The click handler maps the five radio items as follows:

| Item index | Radio item | Notebook effect |
| ---: | --- | --- |
| 0 | Single | Hides `Notebook`. If it was visible, reduces the form height by the saved notebook height. |
| 1 | Temperature stepping | Shows `Notebook` and selects page 0, `tsTemperature`. |
| 2 | Parameter stepping | Shows `Notebook` and selects page 1, `tsParameter`. |
| 3 | Worst Case | Shows `Notebook` and selects page 2, `tsWorstCase`. |
| 4 | Monte Carlo | Shows `Notebook` and selects page 3, `tsMonteCarlo`. |

`FormShow` stores `Notebook.Height` at form offset `+0x7cc`. The click handler
uses this saved value when it changes between Single and a page-based mode. If
the notebook visibility already matches the new mode, the form is not resized.
When a resize is required, `FUN_01b1d750` applies the existing form width and
the adjusted height and keeps the form centered in its current screen bounds.

For every non-Single index, the handler shows `Notebook` and calls
`FUN_006d8180` with `ItemIndex - 1`. This exact subtraction proves the page
mapping. If an unexpected nonzero item index is outside the page range, the
page helper clears the active page. The normal DFM list supplies only indexes
0 through 4.

## Validation and model branches

`ModeSelectionRGClick` changes only the current UI layout. It does not copy the
new mode or the page values to the application settings. The associated
`OnModifyQuery` and OK path provide that model behavior:

- Before the user leaves the current radio item, `FUN_01155a80` temporarily
  disables the form and calls `FUN_01155500` with the current item index. It
  re-enables the form, allows the change only when no validation error was
  recorded, and then clears the temporary error flag.
- The OK handler calls the same validation and capture routine for the selected
  mode. Only a successful result copies the dialog's local analysis record to
  the shared application settings and stores the selected mode index.

The recovered mode-specific branches are:

| Mode | Proven capture or validation before leaving the mode or accepting OK |
| --- | --- |
| Single | Sets the derived case count to 1. |
| Temperature stepping | Captures start temperature, end temperature, point count, sweep type, and **Separate cases in diagram**. It rejects a temperature below -100 or above 500 and rejects equal start and end values. List sweep uses the stored list count; other sweep types use the point count. |
| Parameter stepping | Captures **Parallel stepping** and **Separate cases in diagram**. Combinational stepping derives the case count as the product of the parameter step counts. Parallel stepping uses the smallest parameter step count. |
| Worst Case | Captures **Number of cases**, **Draw nominal value**, and the Stochastic or Analytic method. The derived case count includes one extra case when nominal output is selected. |
| Monte Carlo | Captures **Percent of population**, **Number of cases**, and **Draw nominal values**. It rejects a population percentage below 0 or above 100. The derived case count includes one extra case when nominal output is selected. |

The invalid Temperature or Monte Carlo branches obtain a localized message,
show it once, and set the shared error flag. During a radio change, that flag
rejects the proposed selection. During OK, it prevents settings persistence.
The exact localized message text is not recovered.

## Inputs, state changes, and outputs

| Stage | Proven behavior |
| --- | --- |
| Change-query input | Current `ModeSelectionRG.ItemIndex` and the controls on the current mode page. |
| Change-query decision | A validation error rejects the proposed radio change; no error permits it. |
| Click input | New `ModeSelectionRG.ItemIndex`, current `Notebook.Visible`, current form width and height, and the saved notebook height. |
| UI state change | Hides the notebook for Single. Shows it and selects `ItemIndex - 1` for every other mode. Changes the form height only when notebook visibility changes. |
| Local model change | The change query captures the mode being left. The click handler itself does not write the local analysis record. |
| Persistent model change | None on selection alone. The OK handler persists the selected mode and local record only after successful validation. |
| Output | A compact Single-mode dialog or an expanded, centered dialog that shows the selected mode's parameter page. |

## Selection flow

```mermaid
flowchart TD
    attempt["User selects another Current Mode item"] --> query["FUN_01155a80<br/>OnModifyQuery"]
    query --> capture["FUN_01155500<br/>Capture and validate the current mode"]
    capture --> valid{"Validation error recorded?"}
    valid -->|Yes| reject["Show localized error<br/>Set CanModify = false"]
    valid -->|No| accept["Set CanModify = true<br/>Apply new item index"]
    accept --> click["FUN_01155ae0<br/>OnClick"]
    click --> single{"New item index = 0?"}
    single -->|Yes| wasVisible{"Notebook was visible?"}
    wasVisible -->|Yes| shrink["Reduce height by saved Notebook.Height<br/>and recenter form"]
    wasVisible -->|No| hide["Keep current form size"]
    shrink --> hideNotebook["Hide Notebook"]
    hide --> hideNotebook
    single -->|No| wasHidden{"Notebook was hidden?"}
    wasHidden -->|Yes| expand["Increase height by saved Notebook.Height<br/>and recenter form"]
    wasHidden -->|No| show["Keep current form size"]
    expand --> showNotebook["Show Notebook"]
    show --> showNotebook
    showNotebook --> selectPage["Select page at ItemIndex - 1"]
    selectPage --> page{"Page index in range?"}
    page -->|Yes| mapped["1 Temperature<br/>2 Parameter<br/>3 Worst Case<br/>4 Monte Carlo"]
    page -->|No| clear["Clear active page"]

    classDef rejected fill:#ffebee,stroke:#c62828,color:#1b1b1b;
    classDef accepted fill:#e8f5e9,stroke:#2e7d32,color:#1b1b1b;
    class reject rejected;
    class accept,hideNotebook,mapped accepted;
```

## Handler evidence

- Click handler: [FUN_01155ae0](../../../DecompiledSources/Tina16/functions/0000000001155AE0__FUN_01155ae0.c)
- Change query: [FUN_01155a80](../../../DecompiledSources/Tina16/functions/0000000001155A80__FUN_01155a80.c)
- Mode capture and validation: [FUN_01155500](../../../DecompiledSources/Tina16/functions/0000000001155500__FUN_01155500.c)
- Form initialization: [FUN_01155220](../../../DecompiledSources/Tina16/functions/0000000001155220__FUN_01155220.c)
- OK persistence path: [FUN_011559e0](../../../DecompiledSources/Tina16/functions/00000000011559E0__FUN_011559e0.c)
- VCL visibility setter: [FUN_0064dbe0](../../../DecompiledSources/Tina16/functions/000000000064DBE0__FUN_0064dbe0.c)
- Page selection helper: [FUN_006d8180](../../../DecompiledSources/Tina16/functions/00000000006D8180__FUN_006d8180.c)
- Centered bounds helper: [FUN_01b1d750](../../../DecompiledSources/Tina16/functions/0000000001B1D750__FUN_01b1d750.c)
- Likely Delphi click method: `TAnalModeDlg.ModeSelectionRGClick`.
- Likely Delphi change-query method: `TAnalModeDlg.ModeSelectionRGModifyQuery`.
- Complexity: complex.
- Distinct outgoing calls: 3.

The recovered field table maps `ModeSelectionRG` to form offset `+0x6d0` and
`Notebook` to `+0x6d8`. `Notebook` contains four pages in this order:
`tsTemperature`, `tsParameter`, `tsWorstCase`, and `tsMonteCarlo`. The handler
reads the radio group's item index at control offset `+0x4a8` and the notebook
visibility byte at control offset `+0xa9`.

## Direct calls from the click handler

- `function:0064dbe0` - Changes `Notebook.Visible`. It is a no-op when the
  requested visibility already matches the control state.
- `function:006d8180` - Selects a page by index when the index is valid. It
  clears the active page for an invalid index.
- `function:01b1d750` - Applies the requested form size while centering its new
  bounds. The click handler calls it only when notebook visibility changes.

## Resource evidence

- The radio items are **Single**, **Temperature stepping**, **Parameter
  stepping**, **Worst Case**, and **Monte Carlo**.
- The notebook page order matches the four non-Single radio items after the
  handler subtracts one from the selected item index.
- `Notebook.ActivePage` is `tsTemperature` in the recovered DFM. Runtime mode
  selection can replace it.
- The mode pages contain controls whose captions match the captured fields,
  including temperatures, case counts, stepping choices, population, draw
  nominal options, and Worst Case method.
- No hint, image reference, glyph, or same-parent label candidate is present.

## Error and no-op behavior

- Invalid current Temperature or Monte Carlo values reject a radio change
  before the click handler runs.
- The click handler has no error message or local exception handler.
- Selecting Single while the notebook is already hidden does not resize the
  form. Selecting a page mode while the notebook is already visible also does
  not resize it.
- The click handler still reapplies the requested notebook visibility. The VCL
  setter does nothing when the value is unchanged.
- An unexpected nonzero item index outside the page range shows the notebook
  but clears its active page.

## Analysis limits

- The source proves the valid numeric ranges and that a localized message is
  shown. It does not recover the message text.
- The internal field at `+0x88d` is a derived count used by the analysis
  record. Its mode branches prove how the value is calculated, but its original
  Delphi field name is not recovered.
- This article describes persistence only to distinguish it from the click
  effect. The OK control has its own article and is not modified here.
