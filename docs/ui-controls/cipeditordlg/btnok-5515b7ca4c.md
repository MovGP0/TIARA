# Replace the model's selected-inductor list

> Analysis status: Complete. The recovered form initialization, idle validation, OK handler, borrowed-list constructor path, and VCL button kinds establish the selection rule, direct model replacement, close behavior, and partial-mutation risk.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CipEditorDlg |
| Form caption | Select inductors |
| Component path | CipEditorDlg.btnOK |
| Control class | TBitBtn |
| Caption | Supplied by the built-in button kind. |
| Kind | bkOK |
| Handler name | btnOKClick |
| Handler address | 013fad30 |
| Graph node | `resource:dfm:CipEditorDlg/CipEditorDlg.btnOK` |
| Handler node | `function:013fad30` |
| Graph layer | UI |

## What happens when clicked

`FUN_013fad30` replaces an externally supplied string list with the currently selected rows from `lbxInductors`. It does not build a private result for a caller to copy later.

The handler performs these operations in this order:

1. It calls `Clear` on the destination `TStrings`-like object referenced through form field `+0x6e0`.
2. It reads `lbxInductors.Items.Count` from the list box at form field `+0x6b0`.
3. It visits every row from index zero to count minus one.
4. It calls `FUN_0068bca0` to test whether that row is selected.
5. For each selected row, it reads the row string from `lbxInductors.Items` and calls `Add` on the destination list.

The result contains only selected strings, in current list-box index order. It is not ordered by the sequence in which the user selected the rows. Unselected old model entries are removed because the destination is cleared first. An old entry that no longer matches a current candidate also disappears on OK.

## Candidate and selection validation

The dialog does not accept free-form text. Its form-creation path builds the candidates before the user can select them:

- `FUN_013faba0`, the form's `OnCreate` handler, enumerates the recovered global object collection.
- `FUN_013faae0` accepts only objects in recovered category `4` whose virtual type code is one of `0x0b`, `0x6e`, `0xcc`, `0xd6`, or `0xe0`.
- For an accepted object, it reads a non-empty display string and adds that string to `lbxInductors.Items`.
- Form creation then reads each existing destination-list string, finds the same string in the candidate list, and selects the matching row. An existing string with no candidate match is not represented in the UI.

Selection count is the only recovered acceptance rule. `FUN_013fae20`, the `TApplicationEvents.OnIdle` handler, counts selected rows and enables `btnOK` only when the count is greater than one. This normally prevents acceptance with zero or one selected inductor.

`btnOKClick` does not repeat that minimum-count test. If code invokes the handler while the button is disabled, or before the next idle update, it still clears the destination and writes exactly the selected set. Zero selected rows produce an empty destination; one selected row produces one entry.

The handler does not validate the selected strings again, test for duplicates, impose a maximum count, or ask for confirmation.

## Direct model ownership and persistence boundary

`FUN_014360e0` creates this dialog for an editor host and passes the host's model context plus a field index to `FUN_013fa970`. The dialog constructor resolves the indexed value through `FUN_01cfde70` and stores its address at form field `+0x6e0`. The dialog does not allocate a replacement list in `btnOKClick`; it dereferences this address and mutates the supplied list directly.

This means a successful click changes the caller-owned in-memory list before the dialog closes. There is no owner-side OK copy-back step in the recovered path, and there is no file, document, or configuration save call in the handler. Any durable persistence of the changed list belongs to the surrounding editor or a later save operation.

## Modal result, close behavior, and Cancel

The DFM gives `btnOK` the built-in `bkOK` kind. The recovered handler has no direct `ModalResult` write, Boolean return, validation-message branch, or close-veto branch. The form also has no recovered `OnCloseQuery` handler. After a normal handler return, the VCL button kind supplies the accepted modal result and closes the modal dialog.

`btnCancel` has built-in kind `bkCancel` and no `OnClick` handler. Form creation only reads the destination list to preselect rows. Therefore, Cancel before an OK attempt closes without clearing or rebuilding the caller-owned list.

Cancel is not a rollback mechanism for a failed OK attempt. The OK handler clears and appends directly to the external list and keeps no snapshot. If an exception interrupts that rebuild, the Cancel button has no code that can restore the old contents.

## Errors and partial mutation

`FUN_0068bca0` sends the native list-box `LB_GETSEL` message for each row. If Windows returns `LB_ERR` (`-1`), the helper raises a formatted indexed-list exception. The OK handler does not catch it.

The destination has already been cleared before the first selection query. An error can therefore leave it:

- empty, if the first query fails;
- partially rebuilt, if a later query fails; or
- partially rebuilt, if reading or adding a selected string raises after earlier rows were added.

There is no transaction, temporary list, rollback, or user-facing error message in this handler. An exception exits before the normal end of the click. The recovered application code does not establish whether the VCL keeps the dialog open after that exception, so this article does not claim an exact post-error modal state.

## Initialization, OK, and Cancel flow

```mermaid
flowchart TD
    open["Create Select inductors dialog"] --> candidates["Build supported inductor candidate strings"]
    candidates --> restore["Preselect candidates found in the supplied destination list"]
    restore --> count["On idle: count selected rows"]
    count --> enough{"More than one selected?"}
    enough -->|No| disabled["Keep OK disabled"]
    enough -->|Yes| enabled["Enable OK"]
    restore --> cancel["Click Cancel"]
    cancel --> unchanged["Close with the supplied list unchanged"]
    enabled --> click["Click OK"]
    click --> clear["Clear the supplied destination list"]
    clear --> rows{"Another list-box row?"}
    rows -->|No| accept["Return normally; bkOK closes accepted"]
    rows -->|Yes| query["Query the row's selected state"]
    query --> error{"LB_GETSEL failed?"}
    error -->|Yes| partial["Raise exception; destination is empty or partial"]
    error -->|No, unselected| rows
    error -->|No, selected| add["Add the row string to the destination"]
    add --> rows
    accept --> memory["Caller-owned in-memory list now matches selected rows"]
    memory --> later["Any durable save occurs outside this handler"]
```

## Handler evidence

- OK handler: [FUN_013fad30](../../../DecompiledSources/Tina16/functions/00000000013FAD30__FUN_013fad30.c)
- Form initialization: [FUN_013faba0](../../../DecompiledSources/Tina16/functions/00000000013FABA0__FUN_013faba0.c)
- Candidate filter and insertion: [FUN_013faae0](../../../DecompiledSources/Tina16/functions/00000000013FAAE0__FUN_013faae0.c)
- Candidate type test: [FUN_013faa60](../../../DecompiledSources/Tina16/functions/00000000013FAA60__FUN_013faa60.c)
- Idle selection-count gate: [FUN_013fae20](../../../DecompiledSources/Tina16/functions/00000000013FAE20__FUN_013fae20.c)
- VCL selected-row query: [FUN_0068bca0](../../../DecompiledSources/Tina16/functions/000000000068BCA0__FUN_0068bca0.c)
- VCL selected-row setter used during initialization: [FUN_0068bd10](../../../DecompiledSources/Tina16/functions/000000000068BD10__FUN_0068bd10.c)
- Dialog constructor: [FUN_013fa970](../../../DecompiledSources/Tina16/functions/00000000013FA970__FUN_013fa970.c)
- Editor-host construction path: [FUN_014360e0](../../../DecompiledSources/Tina16/functions/00000000014360E0__FUN_014360e0.c)
- Indexed-value resolver: [FUN_01cfde70](../../../DecompiledSources/Tina16/functions/0000000001CFDE70__FUN_01cfde70.c)
- Recovered role: Replaces the supplied destination string list with the selected inductor candidate strings.
- Input: `lbxInductors.Items`, each row's selected state, and the supplied destination list at form field `+0x6e0`.
- Decisions: Per-row selection controls addition. The greater-than-one gate is maintained by the idle handler, not repeated by the click handler.
- State change: Clears the external list, then appends selected row strings in list-box order.
- Output: A directly mutated in-memory destination list and, after normal return, the VCL `bkOK` accepted close.
- Complexity: moderate
- Distinct outgoing calls: 2 recovered direct calls. The `TStrings` operations are virtual calls and do not appear as graph call edges.

## Direct calls

- `function:0068bca0` - Returns the selected state for a list-box row and raises an indexed-list exception on `LB_ERR`. Its canonical annotation remains in `TIARA-diz.6.7.35` and is not duplicated here.
- `function:00414480` - Finalizes the temporary Delphi UnicodeString used while reading selected row strings.

## Resource evidence

- The form caption is `Select inductors`.
- `lbxInductors` is the only editable selection control on the form.
- `btnOK` is a 75 by 25 `TBitBtn` with `Kind = bkOK` and no separate caption, hint, or extracted glyph.
- `btnCancel` is a matching `TBitBtn` with `Kind = bkCancel` and no event handler.
- Neither button has a separately recovered `ModalResult` property; their built-in kinds provide the modal semantics.
- No same-parent label candidate is available.

## Evidence limits

- The five recovered type codes establish the candidate filter, but their original Delphi enum names are not present.
- The source proves direct mutation of the constructor-resolved string list. It does not identify the later file or document save owner.
- The exact VCL modal state after an uncaught click exception is not recovered.
