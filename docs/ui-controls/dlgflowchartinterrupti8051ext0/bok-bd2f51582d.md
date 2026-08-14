# bOK

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | dlgflowchartInterrupti8051ext0 |
| Component path | dlgflowchartInterrupti8051ext0.bOK |
| Control class | TBitBtn |
| Caption | Supplied by the recovered `bkOK` button kind. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOKClick |
| Handler address | 00fc1870 |
| Graph node | `resource:dfm:dlgflowchartInterrupti8051ext0/dlgflowchartInterrupti8051ext0.bOK` |
| Recovered function node | `function:00fc1870` |
| Generated handler node | `concept:dfm-handler:TdlgflowchartInterrupti8051ext0/bOKClick` |
| Current graph layer | tina.exe |

## What happens when clicked

The parent creates this dialog for the 8051 external-interrupt kinds with byte
values `1` and `2`. The setup function copies the complete input record to form
offset `+0x730`. Thus, form offset `+0xaf0` is staged-record offset `+0x3c0`.

`FormShow` sets the interrupt-control combo box at `+0x6b0` from this staged
field. If the stored row is `-1`, it selects row `0`. The two recovered rows are
"Low level active" and "Falling edge active".

When the user clicks OK, `bOKClick` ignores `Sender`. It reads the combo box row
through its VCL item-index getter and stores the 32-bit row value at form offset
`+0xaf0`. The separate combo-change handler performs the same write, so the OK
handler also captures the current row when no change event occurred.

The handler has no decision, range check, error branch, retry, or rollback. It
always writes the value returned by the combo box. `FormShow` normally prevents
an initial value of `-1`, but `bOKClick` does not reject `-1` if another path
restores that value before the click.

The recovered `bkOK` kind supplies modal result `1`. The parent copies the
complete staged record back only after it receives this result. It then destroys
the dialog. The handler does not write to the parent record directly.

## Click flow

```mermaid
flowchart LR
    control["Click OK"] --> handler["bOKClick at 00fc1870"]
    handler --> readRow["Read the combo box row"]
    readRow --> storeRow["Store the row in staged record +0x3c0"]
    storeRow --> accept["bkOK supplies modal result 1"]
    accept --> commit["Parent copies the complete staged record"]
```

## Handler evidence

- Handler source: [FUN_00fc1870](../../../DecompiledSources/Tina16/functions/0000000000FC1870__FUN_00fc1870.c)
- Form-show source: [FUN_00fc17c0](../../../DecompiledSources/Tina16/functions/0000000000FC17C0__FUN_00fc17c0.c)
- Combo-change source: [FUN_00fc1840](../../../DecompiledSources/Tina16/functions/0000000000FC1840__FUN_00fc1840.c)
- Dialog setup source: [FUN_00fc16a0](../../../DecompiledSources/Tina16/functions/0000000000FC16A0__FUN_00fc16a0.c)
- Parent modal coordinator: [FUN_00fd1520](../../../DecompiledSources/Tina16/functions/0000000000FD1520__FUN_00fd1520.c)
- Resource source: [ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- Recovered role: Store the selected 8051 external-interrupt trigger mode for
  modal acceptance.
- Complexity: simple.
- Distinct outgoing calls: 0 recovered direct calls.

The DFM names class `TdlgflowchartInterrupti8051ext0`. Its runtime VMT uses
`TdlgFlowchartInterrupti8051ext0`; only the capitalization of `Flowchart`
differs. Delphi identifiers are not case-sensitive. The raw VMT at `00fc0d90`
maps the complete matching method set: `FormCloseQuery` to `00fc17a0`,
`FormShow` to `00fc17c0`, `FormCreate` to `00fc1820`,
`Cb_ext_int_controlChange` to `00fc1840`, and `bOKClick` to `00fc1870`.
The parent constructs the class through its VMT self pointer at `00fc0e58`.
These facts establish the method identity despite the unresolved graph event.

## Direct calls

- No direct call edge is present. The handler reads the combo box row through
  an indirect VCL virtual call at slot `+0x260`.

## Resource evidence

- Kind: `bkOK`.
- The DFM binds `OnClick` to `bOKClick`.
- The selector rows are "Low level active" and "Falling edge active".
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Interrupt 0 Type Control Bit at distance 65.
- Rank 2: TCON.0 bit,  ITpin=P3.2 at distance 191.

## Analysis limits

- The generated graph still connects this click to an unresolved concept
  because the extractor compares the DFM and VMT class names with different
  capitalization. The raw VMT and recovered method body supply the address used
  in this review.
- The recovered source does not name staged-record field `+0x3c0`. Its inverse
  `FormShow` mapping, selector resource, and parent copy path establish its
  external-interrupt trigger-mode role.
- The handler does not validate the combo row. The source does not establish a
  separate recovery path if the indirect VCL getter fails.
