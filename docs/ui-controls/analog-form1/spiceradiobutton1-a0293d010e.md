# Spice Netlist File

> Analysis status: Recovered no-op click handler, radio-group resources, focus help, and later Build consumer reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Form caption | Filter design |
| Parent group | Build target |
| Component path | Analog_form1.TargetGroupBox6.SpiceRadioButton1 |
| Control class | TRadioButton |
| Caption | Spice Netlist File |
| Initial checked state | False |
| Handler name | SpiceRadioButton1Click |
| Handler address | 01234580 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.TargetGroupBox6.SpiceRadioButton1` |
| Handler node | `function:01234580` |
| Graph layer | UI |

## What happens when clicked

The application `OnClick` handler does nothing. [FUN_01234580](../../../DecompiledSources/Tina16/functions/0000000001234580__FUN_01234580.c) contains only `return`, has no parameters in use, makes no calls, and writes no state. It does not open a file dialog or create a netlist at click time.

The selection itself belongs to the VCL `TRadioButton` control. Selecting **Spice Netlist File** makes it the selected build-target radio option and excludes the two sibling targets in the same group: **Tina Schematic Diagram** and **Tina Schematic Macro**. The DFM initially checks the diagram option, not this SPICE option.

The selected state is consumed later, when the user clicks **Build** and the preceding filter-design stages succeed. [FUN_01228900](../../../DecompiledSources/Tina16/functions/0000000001228900__FUN_01228900.c) reads the Checked value of the SPICE radio at form offset `0x8c8`. When it is true, the function configures a save dialog for `Spice analysis file (*.CIR)`, proposes a `.CIR` path, and executes the dialog.

An accepted new path calls the SPICE writer. If the file already exists, the function asks `Do you really want to delete ...` and writes only when the response value is 6, the accepted response used by this code. Canceling the save dialog or refusing replacement performs no write. The outer Build handler does not receive an error status for these two choices and continues to its normal form-close request.

## Selection and later Build flow

```mermaid
flowchart TD
    radio["Select Spice Netlist File"] --> vcl["VCL selects this radio option<br/>and clears sibling selection"]
    vcl --> click["FUN_01234580<br/>SpiceRadioButton1Click"]
    click --> immediate["Immediate return<br/>No application state write or call"]
    vcl -. "Later Build click" .-> build["Run filter validation and construction stages"]
    build --> ready{"Build status is zero?"}
    ready -->|No| skip["Skip output dispatch<br/>Keep Filter Design open"]
    ready -->|Yes| dispatch["FUN_01228900<br/>Read selected build target"]
    dispatch --> selected{"SPICE radio Checked?"}
    selected -->|No| other["Use the selected TINA diagram<br/>or macro path"]
    selected -->|Yes| dialog["Configure and execute<br/>the CIR save dialog"]
    dialog --> accepted{"Did the user select a path?"}
    accepted -->|No| noWrite["Do not write a file"]
    accepted -->|Yes| exists{"Does the path already exist?"}
    exists -->|No| writer["FUN_01186930<br/>Write the SPICE netlist"]
    exists -->|Yes| confirm{"Replace the existing file?"}
    confirm -->|No| noWrite
    confirm -->|Yes| writer
```

## Handler and call evidence

- Click handler: [FUN_01234580](../../../DecompiledSources/Tina16/functions/0000000001234580__FUN_01234580.c).
- The complete recovered body is an immediate return.
- The graph contains the DFM `triggers` edge but no outgoing call edge from the handler.
- Recovered role: No-op `OnClick` callback for the SPICE netlist build-target radio button.
- Complexity: simple.
- Distinct outgoing calls: 0.

## Later output evidence

- [FUN_01228900](../../../DecompiledSources/Tina16/functions/0000000001228900__FUN_01228900.c) dispatches the selected output target. Its first branch reads the Checked value at `Analog_form1` offset `0x8c8`, configures the `*.CIR` filter and default extension, executes the save dialog, tests whether the selected file exists, and requests overwrite approval before it calls the writer.
- [FUN_01186930](../../../DecompiledSources/Tina16/functions/0000000001186930__FUN_01186930.c) writes the netlist. Recovered output includes an input voltage source, filter-section elements, a voltage divider, an op-amp subcircuit, an `.AC DEC 100` analysis, a voltage probe, and `.END`.
- The writer returns 3 if the shared filter-type code is not one of its four supported section types. It returns 0 after it finishes the normal output. `FUN_01228900` does not inspect this return value.
- The Build command [FUN_0122e740](../../../DecompiledSources/Tina16/functions/000000000122E740__FUN_0122e740.c) calls the output dispatcher only while the shared build status is zero. After output dispatch returns, it requests the normal VCL close path. Save-dialog cancel and overwrite refusal do not change that shared status in the recovered output helper.

## Focus help is a separate event

The radio also binds `OnEnter` to [FUN_01234ee0](../../../DecompiledSources/Tina16/functions/0000000001234EE0__FUN_01234ee0.c). When the control receives focus, that handler:

- sets the current help-context value to `0x21fc`;
- changes the form's help label at offset `0x988` to `Build target Spice Netlist File`;
- invokes a form virtual callback at slot `0x188`.

This focus event can occur as part of mouse or keyboard navigation, but it is not called by the no-op `OnClick` handler. The recovered source does not identify the final virtual callback more precisely.

## Direct calls

- No direct call edge is present for `function:01234580`.

## Resource evidence

- The DFM binds `SpiceRadioButton1.OnClick` to `SpiceRadioButton1Click` at `01234580` and `OnEnter` to `SpiceRadioButton1Enter` at `01234ee0`.
- `TargetGroupBox6` contains a `TMyRadioGroup` captioned `Build target`.
- The three child radio captions are `Tina Schematic Diagram`, `Tina Schematic Macro`, and `Spice Netlist File`.
- `Tina Schematic Diagram` is initially checked. The other two options are not.
- No hint, text property, image, embedded glyph, action, or modal result is present for this radio button.
- Recovered resource data: [ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json).

## No-op and error boundaries

- The click callback cannot fail through an application branch because it performs no operation.
- The application handler does not validate the filter, write a target flag, start Build, open the save dialog, or report an error.
- Validation and construction errors belong to the later Build command and prevent output dispatch.
- Save-dialog cancel and overwrite refusal are normal no-write paths. No message is shown for cancel.
- The writer has no local exception-recovery block. File-system errors can propagate from its file-writing helpers, but this source does not prove a command-specific error message.

## Analysis limits

- The application handler does not contain the VCL radio-selection implementation. The `TRadioButton` resource, shared parent group, mutually exclusive sibling options, and later Checked-property consumer establish the selection role without assigning it to `FUN_01234580`.
- The field mapping of offset `0x8c8` to this control is supported by the recovered Analog-form field table and the three resource target options. The original Delphi field declaration is not available.
- The output dispatcher ignores the writer's numeric return. The recovered source does not show whether another layer detects that value or reports a downstream file error.
