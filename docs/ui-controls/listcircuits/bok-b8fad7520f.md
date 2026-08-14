# Close the circuit list with OK

> Analysis status: Recovered control, handler, modeless opener, form close handler, and VCL close path reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ListCircuits (`List Circuits`) |
| Component path | ListCircuits.bOK |
| Control class | TBitBtn |
| Button kind | bkOK |
| Explicit DFM caption | Not present |
| Explicit DFM `ModalResult` | Not present |
| Handler name | bOKClick |
| Handler address | `019d7840` |
| Graph node | `resource:dfm:ListCircuits/ListCircuits.bOK` |
| Handler node | `function:019d7840` |
| Handler graph layer | UI |

## What happens when clicked

`TListCircuits.bOKClick` contains one direct call. It requests closure of the
current `ListCircuits` form through the common VCL form-close routine. The
decompiler omits the implicit form argument at this call site, but the event
binding and the callee signature establish the form as the receiver.

The recovered opener creates one cached `ListCircuits` instance, fills its
ListBox from the supplied string list, and calls the modeless VCL `Show`
wrapper. If the form already exists, the opener refreshes the list and brings
the same form forward. The opener does not call `ShowModal` and does not wait
for an OK result.

For this modeless form, the common close routine first calls the form's virtual
close query. If the query permits closure, VCL dispatches
`TListCircuits.FormClose`. This handler clears the cached global form pointer
and sets `CloseAction` to value `2`, recovered as `caFree`. The common close
routine then posts the deferred VCL release message. A later request can create
a new `ListCircuits` instance because the cached pointer is already clear.

## OK does not commit a selected circuit

The OK handler does not read the ListBox, its current index, or the string list
stored by the opener. It does not open the selected circuit, copy a selection
to the caller, change the supplied list, or save state. The separate ListBox
double-click handler reads the selected row and passes its text to the
circuit-opening path. OK does not call that handler or its circuit-opening
callee.

The sibling Cancel handler has the same one-call implementation and reaches
the same close path. The recovered application code therefore shows no
OK-versus-Cancel transaction branch. The DFM `bkOK` kind identifies the
control's built-in VCL presentation and purpose, but it does not establish an
application commit. Because this form is modeless, no recovered opener reads a
modal result after closure.

## No-op and error boundaries

- If the virtual close query rejects closure, `FormClose` does not run. The
  form remains visible, and the cached global pointer remains set.
- If closure is accepted, `FormClose` clears the global pointer before the
  deferred release message destroys the form.
- The handler has no local condition, validation, retry, repeated-click guard,
  error message, or exception handler.
- If the close routine raises an exception, the handler has no local recovery.
- Clicking OK does not act on the selected row. With or without a selection,
  its recovered application action is the same close request.

## Click flow

```mermaid
flowchart TD
    control["bOK<br/>Kind = bkOK"] -->|OnClick| handler["TListCircuits.bOKClick"]
    handler --> close["Request VCL form close"]
    close --> query{"Virtual close query permits closure?"}
    query -->|No| veto["Keep form visible<br/>Keep cached form pointer"]
    query -->|Yes| formClose["TListCircuits.FormClose"]
    formClose --> clear["Clear cached form pointer<br/>Set CloseAction = caFree"]
    clear --> release["Post deferred VCL release"]
    release --> destroyed["Destroy this ListCircuits instance"]
```

## Handler and lifecycle evidence

- OK handler: [FUN_019d7840](../../../DecompiledSources/Tina16/functions/00000000019D7840__FUN_019d7840.c)
- Common VCL form-close routine: [FUN_00805200](../../../DecompiledSources/Tina16/functions/0000000000805200__FUN_00805200.c)
- Form `OnClose`: [FUN_019d7850](../../../DecompiledSources/Tina16/functions/00000000019D7850__FUN_019d7850.c)
- List population and retained source list: [FUN_019d7940](../../../DecompiledSources/Tina16/functions/00000000019D7940__FUN_019d7940.c)
- Modeless singleton opener: [FUN_01a56130](../../../DecompiledSources/Tina16/functions/0000000001A56130__FUN_01a56130.c)
- VCL modeless `Show` wrapper: [FUN_008059a0](../../../DecompiledSources/Tina16/functions/00000000008059A0__FUN_008059a0.c)
- Deferred VCL release helper: [FUN_00805ad0](../../../DecompiledSources/Tina16/functions/0000000000805AD0__FUN_00805ad0.c)
- Separate ListBox double-click handler: [FUN_019d7890](../../../DecompiledSources/Tina16/functions/00000000019D7890__FUN_019d7890.c)
- Recovered form evidence: [ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)

## Direct calls

- `FUN_00805200` - Runs the VCL close-query and close-action pipeline.

## Resource evidence and limits

- `ListCircuits` has the caption `List Circuits` and binds `OnCreate` and
  `OnClose` handlers.
- `bOK` is a `TBitBtn` with `Kind = bkOK`, `NumGlyphs = 2`, and
  `TabOrder = 1`.
- The control has no explicit DFM caption, hint, text, action, `ModalResult`,
  image reference, or extracted custom glyph.
- No same-parent label candidate is available.
- The DFM has no `OnCloseQuery` binding. The exact virtual close-query
  implementation is unresolved, so this article does not invent a veto rule.

## Annotation scope

This Bead annotates only the control-specific handler `FUN_019d7840`. The
shared VCL close routine and the form lifecycle functions remain evidence only.
