# &Draw

## Control

| Property | Recovered value |
| --- | --- |
| Form | `HarmonicDistorsionDlg` |
| Component path | `HarmonicDistorsionDlg.Panel1.DrawBtn` |
| Control class | `TBitBtn` |
| Caption | `&Draw` |
| Initial enabled state | `False` |
| Hint, action, or image | Not present in the recovered resource. |
| Handler | `DrawBtnClick` at `01142fd0` |
| Graph node | `resource:dfm:HarmonicDistorsionDlg/HarmonicDistorsionDlg.Panel1.DrawBtn` |

## Purpose

`Draw` publishes the harmonic coefficients that the dialog has already
calculated. It does not run the transient analysis or Fourier calculation.
The button is disabled when the form is loaded. The separate
[`Calculate`](okbtn-933ad019f3.md) path builds the coefficient array, fills the
coefficient grid and harmonic-distortion result, and enables `Draw`. A change
to an analysis input invalidates that result and disables `Draw` again.

On a valid click, the handler creates a new Fourier-series graph in the main
workspace and sets the dialog's modal result to `mrOK`.

## Click behavior

1. The handler selects a label for the result series. If the dialog does not
   have an analysis-result object at form offset `+0x778`, it obtains the
   current default result object from the application. Otherwise, it copies
   the display string from the nested analysis-result object. The recovered
   names of these objects are not available.
2. It passes the stored coefficient array at `+0x798` to
   [`FUN_01143830`](../../../DecompiledSources/Tina16/functions/0000000001143830__FUN_01143830.c).
   This function uses the selected sample exponent at `+0x780` to calculate
   `2^exponent`. For harmonic indexes from zero through the selected number of
   harmonics at `+0x791`, it divides the real and imaginary coefficients by
   that sample count and appends the harmonic index, magnitude, and phase to a
   new result series.
3. In one dialog mode, identified only by the byte at `+0x1007b1`, the handler
   first calls the shared transient-graph routine with the active analysis
   object. That routine creates or refreshes a `Transient` graph. This is a
   conditional display side effect; it is not a new transient simulation.
4. The handler formats the stored base frequency at `+0x789` as text and
   passes the result series, that frequency text, and the selected format at `+0x792` to the
   shared graph builder
   [`FUN_013db650`](../../../DecompiledSources/Tina16/functions/00000000013DB650__FUN_013db650.c).
5. The graph builder creates a new Fourier THD graph and adds two result
   curves. The format index selects one of these proven pairs:

   | Format index | Graph results |
   | --- | --- |
   | `0` | Amplitude `D` and phase |
   | `1` | Amplitude `C` and phase |
   | `2` | Real and imaginary parts |
   | `3` | RMS amplitude and phase |
   | `4` | RMS real and imaginary parts |

   The converter stores the harmonic index as the horizontal value. The graph
   builder combines the formatted base-frequency text with the horizontal-axis
   label and the unit `[Hz]`; the source does not fully recover the label text
   or prove how the view maps an index to a displayed frequency. Amplitude
   results use volts and phase results use degrees. The builder supplies a
   format-specific `FourierTHD` graph title, attaches the graph to the main
   workspace, selects the new graph, and refreshes the main window.
6. Only after graph creation returns, the handler writes `1` to form offset
   `+0x508`. Recovered VCL code identifies this field as `ModalResult`; value
   `1` is `mrOK`. A modal instance therefore closes as accepted after a
   successful Draw click.

## Relationship to Calculate and Cancel

- `Calculate` collects and stores the current dialog inputs, calculates the
  coefficients, refreshes the grid and distortion label, and enables `Draw`.
  It does not set the form's modal result.
- `Draw` consumes those retained coefficients. It does not re-read the edit
  controls, validate them, or call the coefficient-calculation routines.
- A user can calculate and then choose the built-in
  [`Cancel`](cancelbtn-0f0bf7f9a7.md) action without publishing a Fourier
  graph. After Draw finishes, its `mrOK` result ends the modal interaction, so
  Cancel does not undo the graph that Draw has added.

## State, errors, and persistence

- The normal UI guard is the button's enabled state. The handler has no
  independent check for a missing or stale coefficient array.
- There is no explicit exception handler, transaction, or rollback in the
  Draw path. If conversion or graph construction raises an exception, the
  final `ModalResult := mrOK` write is not reached. The shared graph builder
  performs several workspace mutations, so the recovered source does not
  prove that a late failure removes every partial graph object.
- The handler does not check for an existing equivalent Fourier graph. A
  programmatic repeat can add another graph; the shared builder uses incremented
  graph-name suffixes.
- The click changes the live graph workspace and the dialog modal result. No
  file, registry, or database write occurs in this call path. The recovered
  source does not prove when the containing workspace is later saved.
- Neither the caption nor nearby labels prove the behavior. The evidence is
  the stored-array data flow through `FUN_01143830`, the format branches and
  graph insertion in `FUN_013db650`, and the final modal-result write.

## Click flow

```mermaid
flowchart TD
    click["Click Draw<br/>button is enabled only after Calculate"] --> label{"Analysis-result object<br/>at +0x778?"}
    label -->|No| defaultLabel["Get current default result label"]
    label -->|Yes| objectLabel["Copy nested result display label"]
    defaultLabel --> convert["FUN_01143830<br/>normalize stored complex coefficients by 2^sample exponent<br/>append index, magnitude, and phase"]
    objectLabel --> convert
    convert --> mode{"Special active-analysis mode<br/>byte +0x1007b1?"}
    mode -->|Yes| transient["Create or refresh Transient graph<br/>from active analysis object"]
    mode -->|No| frequency["Format stored base frequency text"]
    transient --> frequency
    frequency --> graph["FUN_013db650<br/>create Fourier THD graph and two format-specific curves<br/>include base-frequency text in horizontal-axis label"]
    graph --> refresh["Attach and select graph<br/>refresh main workspace"]
    refresh --> accept["Set form +0x508 to 1<br/>ModalResult = mrOK"]
    accept --> close["Modal dialog returns accepted"]
```

## Source evidence

- [`FUN_01142fd0`](../../../DecompiledSources/Tina16/functions/0000000001142FD0__FUN_01142fd0.c)
  is the bound `OnClick` handler. It reads retained fields, calls the converter
  and graph builder, and then writes modal result `1`.
- [`FUN_01143830`](../../../DecompiledSources/Tina16/functions/0000000001143830__FUN_01143830.c)
  constructs the harmonic result series from normalized complex coefficients.
- [`FUN_01142c20`](../../../DecompiledSources/Tina16/functions/0000000001142C20__FUN_01142c20.c)
  and [`FUN_011423a0`](../../../DecompiledSources/Tina16/functions/00000000011423A0__FUN_011423a0.c)
  are on the separate Calculate path. They produce and display the coefficients
  that Draw later consumes.
- [`FUN_011413d0`](../../../DecompiledSources/Tina16/functions/00000000011413D0__FUN_011413d0.c)
  invalidates an enabled Draw state after an input change and disables the
  button.
- The DFM resource supplies caption `&Draw`, initial `Enabled = False`, and no
  hint, action, image reference, embedded glyph, or built-in button kind.

## Analysis limits

- Recovered field names are unavailable. Offsets identify retained form state,
  not original Delphi identifiers.
- The source proves five format-index branches. It does not contain a guard for
  an out-of-range index in the Draw handler or shared graph builder.
- The special byte at `+0x1007b1` is shared with the dialog's Cancel and
  Calculate paths, but its original Delphi name is not recovered.
