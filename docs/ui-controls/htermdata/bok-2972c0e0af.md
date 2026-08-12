# bOK

`bOK` validates the staged timed-sequence text and, only after validation succeeds, replaces the caller's timed-sequence configuration with the edited lines and the **Enable** check-box state.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HTermData |
| Component path | HTermData.bOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOKClick |
| Handler address | 014b8d70 |
| Graph node | `resource:dfm:HTermData/HTermData.bOK` |
| Handler node | `function:014b8d70` |
| Graph layer | UI |

## What happens when clicked

The **Set...** command on the parent `HTerm` form creates this dialog, obtains the current application model, and calls `FUN_014b8c20` before showing it modally. That setup path decodes the model's timed-sequence list: item zero is the numeric enable flag, and the remaining items are sequence lines. It copies the remaining lines into the `eData` memo and applies the flag to `cbEnableTimedSeq`. The temporary decoded list is then destroyed. Edits are therefore dialog-local until **OK** performs the copy-back.

When clicked, `FUN_014b8d70` obtains the shared HDL working-session directory and builds a `serial.txt` path below it. It saves `eData.Lines` to that file with the default `TStrings` file encoding because no explicit encoding object is passed. It then calls `FUN_0160d4e0`, which creates a temporary VHDL session and asks `VHDL_DLL2.DLL::_HTerm_ParseDataFile` to parse the file in validation mode `1`.

If parsing succeeds, the handler reads `cbEnableTimedSeq.Checked` and calls `FUN_01778ec0` on the caller's timed-sequence object. That helper clears the stored list, copies all memo lines, converts the Boolean to numeric text, and inserts that text at item zero. This is the commit point. The caller does not perform another accepted-only copy after `ShowModal`; the click handler itself owns the mutation.

The `bkOK` resource kind supplies the standard VCL OK modal result after the click handler returns. The handler records the inverse validation result in a private close-veto byte. `THTermData.FormCloseQuery` allows the close only when that byte is clear, then clears it for the next close attempt. The recovered validator returns true after a valid parse. A parser failure raises an exception before normal completion, so the standard OK close does not proceed from that click.

## Clear, Load, Cancel, and errors

- **Clear** calls the memo line collection's clear method. It does not change the caller model.
- **Load** shows the form's open dialog. If accepted, it loads the selected file into the memo. Canceling that file dialog is a no-op. Loaded text is not parsed until **OK**.
- The dialog's **Cancel** button has `Kind = bkCancel` and no click handler. It closes through the normal modal path without calling `FUN_014b8d70`, so memo edits, loaded text, and the check-box change are discarded with the form.
- Parse errors are translated into specific reasons such as `invalid literal`, `comma expected`, `too many data`, `invalid list`, `only 8bit values accepted`, and `invalid time value`, then raised through the localized application error path. The OK handler has no retry or alternate parser.
- The handler tests for the temporary `serial.txt` file and requests deletion after use. Its compiler-generated cleanup companion repeats that cleanup during unwinding. The deletion result is not checked, so a failed deletion can leave the temporary file behind.
- Validation happens before caller mutation. However, the copy-back helper clears the caller's list before copying and inserting the enable flag. An exception during that commit has no rollback and can leave partial caller state.

## Caller, timer, and persistence effects

The parent **Set...** handler ignores the modal result after `ShowModal` and destroys the dialog. This is safe because only the OK path commits. The click does not start, stop, enable, or poll the `HTerm.Timer`, and it does not call the live terminal backend with the accepted sequence.

The committed model has two later consumers. The schematic serializer decodes it into the saved serial-monitor enabled value and text, while the schematic loader reconstructs the same encoded list from `ts_enabled` and `ts_text`. A later terminal compile/setup path calls `FUN_01778ce0`: when the stored flag is enabled, it materializes the sequence as another temporary `serial.txt` and passes it to `_HTerm_ParseDataFile` in runtime mode `0`. The separate `HTerm.Timer` then polls the active terminal backend. Thus **OK** updates in-memory configuration immediately, but project-file persistence and runtime application are deferred.

## Click flow

```mermaid
flowchart TD
    open["Parent Set... command"] --> stage["Decode model: item 0 is Enable; remaining items are sequence lines"]
    stage --> edit["Stage lines in eData and flag in Enable check box"]
    edit --> click["Click OK"]
    click --> temp["Save memo lines to working serial.txt"]
    temp --> validate{"VHDL parser accepts validation mode 1?"}
    validate -->|No| error["Raise localized parse error; do not commit or close"]
    validate -->|Yes| commit["Clear model list, copy lines, insert Enable as item 0"]
    commit --> cleanup["Request temporary-file deletion"]
    cleanup --> modal["bkOK supplies OK modal result"]
    modal --> query{"Close-veto byte is clear?"}
    query -->|No| stay["Veto this close and reset the byte"]
    query -->|Yes| close["Close and destroy dialog"]
    close --> deferred["Later schematic save or terminal setup consumes committed state"]
    edit --> cancel["Click Cancel"]
    cancel --> discard["Close without copy-back; discard staged edits"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B8D70__FUN_014b8d70.c](../../../DecompiledSources/Tina16/functions/00000000014B8D70__FUN_014b8d70.c)
- Dialog setup: [DecompiledSources/Tina16/functions/00000000014B8C20__FUN_014b8c20.c](../../../DecompiledSources/Tina16/functions/00000000014B8C20__FUN_014b8c20.c)
- Parent modal launcher: [DecompiledSources/Tina16/functions/00000000014BA580__FUN_014ba580.c](../../../DecompiledSources/Tina16/functions/00000000014BA580__FUN_014ba580.c)
- Parser validator: [DecompiledSources/Tina16/functions/000000000160D4E0__FUN_0160d4e0.c](../../../DecompiledSources/Tina16/functions/000000000160D4E0__FUN_0160d4e0.c)
- Parse-error mapping: [DecompiledSources/Tina16/functions/000000000160D2F0__FUN_0160d2f0.c](../../../DecompiledSources/Tina16/functions/000000000160D2F0__FUN_0160d2f0.c)
- Model decoder: [DecompiledSources/Tina16/functions/0000000001779060__FUN_01779060.c](../../../DecompiledSources/Tina16/functions/0000000001779060__FUN_01779060.c)
- Model copy-back: [DecompiledSources/Tina16/functions/0000000001778EC0__FUN_01778ec0.c](../../../DecompiledSources/Tina16/functions/0000000001778EC0__FUN_01778ec0.c)
- Runtime consumer: [DecompiledSources/Tina16/functions/0000000001778CE0__FUN_01778ce0.c](../../../DecompiledSources/Tina16/functions/0000000001778CE0__FUN_01778ce0.c)
- Close query: [DecompiledSources/Tina16/functions/00000000014B8FC0__FUN_014b8fc0.c](../../../DecompiledSources/Tina16/functions/00000000014B8FC0__FUN_014b8fc0.c)
- Exception cleanup companion: [DecompiledSources/Tina16/functions/00000000014B8F20__FUN_014b8f20.c](../../../DecompiledSources/Tina16/functions/00000000014B8F20__FUN_014b8f20.c)
- Recovered role: Validate and commit staged timed-sequence settings.
- Current graph summary: Handles 1 Delphi UI event: HTermData.bOK.OnClick.
- Current graph behavior: Writes memo text to a temporary file, validates it through the HTerm DLL parser, encodes the accepted memo lines and enable flag into the caller model, and permits the standard modal close.
- Current graph evidence: The handler data flow, paired setup/decoder, caller modal launcher, close query, serializer/load consumers, runtime parser consumer, and DFM button kinds establish the staged and accepted-only boundaries.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00416cd0` — FUN_00416cd0
- `function:00440a20` — FUN_00440a20
- `function:004412f0` — FUN_004412f0
- `function:015fcb30` — FUN_015fcb30
- `function:0160d4e0` — FUN_0160d4e0
- `function:01778ec0` — FUN_01778ec0

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Sequence:  at distance 450.
- Rank 2: Example:  at distance 770.

## Analysis limits

- The exact Delphi names of private fields at form offsets `+0x708`, `+0x710`, `+0x718`, and `+0x720` are not recovered. Their roles above come from their writers and consumers.
- The sequence grammar is inside `VHDL_DLL2.DLL`. The recovered client exposes only its error categories, validation/runtime mode values, and file boundary.
- No explicit text encoding is supplied to the Delphi string-list file methods. The exact default encoding depends on the runtime configuration and is not recovered here.
- The handler does not mark the schematic modified or save it. The confirmed serializer and loader prove that the model can be persisted later, not that this click itself writes the project.
