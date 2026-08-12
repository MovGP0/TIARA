# Close the curve-list window

> Analysis status: Evidence-backed from the recovered control, handler, modeless opener, live curve synchronization, and form lifecycle.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CurveListFrm (`Show/hide curves`) |
| Component path | CurveListFrm.OKBtn |
| Control class | TBitBtn |
| Button kind | bkClose |
| Explicit DFM caption | Not present |
| Explicit DFM `ModalResult` | Not present |
| Handler name | OKBtnClick |
| Handler address | `0135edc0` |
| Form close handler | FormClose at `0135ef50` |
| Graph node | `resource:dfm:CurveListFrm/CurveListFrm.OKBtn` |
| Handler node | `function:0135edc0` |
| Graph layer | UI |

## What happens when clicked

`TCurveListFrm.OKBtnClick` contains one direct call. It requests closure through
the common VCL form-close routine. It does not read the filter controls or
`CurvesLB`. It also does not validate values, apply curve changes, write a
result, or save settings.

The recovered opener creates this window only when a current diagram exists
and no CurveListFrm instance is open. It then uses the recovered modeless
`Show` wrapper. The caller returns immediately. It does not wait for an OK or
Cancel result. Thus, the normal OK path uses the modeless branch of the VCL
close routine, not its modal-result branch.

The common close routine first calls the form's virtual close query. If that
query permits closure, VCL dispatches `TCurveListFrm.FormClose`. The form-close
handler clears the global CurveListFrm instance slot, runs the form-specific
cleanup, and sets `CloseAction` to value `2`. Recovered Delphi RTTI identifies
this value as `caFree`. VCL then schedules the modeless form for release. The
cleared global slot lets a later Show/hide curves command create a new instance.

## Curve and filter effects are live

OK is not a deferred apply point. The controls update the current diagram while
the form remains open:

- A `CurvesLB` click immediately sends the current checked and unchecked rows
  to the shared synchronization path.
- Check all and Check only first change the visible rows and then use the same
  synchronization path.
- A category-filter click rebuilds the visible checklist and then calls the
  synchronization path.
- A key-up event in the text filter calls the same rebuild and synchronization
  path.

When initialization is complete and a current diagram exists, the shared path
applies the visible checklist state, refreshes the diagram, and calls the
diagram-settings writer. The writer serializes the current diagram
configuration, including its curve settings. These actions occur before the
user clicks OK. `OKBtnClick` does not repeat them.

Category and text filtering do not directly mean "hide all filtered-out
curves." The rebuild puts only matching curves in the checklist. The live
synchronizer receives checked and unchecked rows from that visible subset.
Filtered-out curves are not explicit removal requests, so they retain their
current diagram state. A filter-only change can therefore rebuild the list and
run the refresh and settings path without changing curve visibility.

The filter text, the current category-control states, and four private
curve-list helper objects belong to the form. The OK close path does not copy
them to the opener. A new form rebuilds these values from its new context and
the application setting used by `FormShow`. By contrast, curve visibility that
was already applied to the current diagram remains after the form is released.
OK performs no separate file, registry, or document save operation.

## Ownership and cleanup

`FormCreate` allocates four helper objects in fields `+0x728`, `+0x730`,
`+0x738`, and `+0x740`. The cleanup reached from `FormClose` destroys these
four form-owned objects. It does not destroy the current diagram that received
the live curve changes.

The cleanup also coordinates with the Schematic Editor. If the editor exists
and the form's cleanup flag at `+0x758` is set, it ends the current editor
command. If the editor exists, it then requests the recovered editor UI update.
The controller-owned close path clears this flag before it closes the form, so
the form does not end the same command a second time.

This ownership model is consistent with modeless `Show`, a global singleton
slot, and `caFree`: the opener does not retain the form to inspect after OK.
There is no caller-side copy-back or success branch.

## Contrast with the hidden Cancel button

The sibling `CancelBtn` is a `TBitBtn` with `Kind = bkCancel` and
`Visible = false`. Its click handler contains the same single VCL close call as
OK. Both buttons therefore use the same close query, `FormClose`, cleanup, and
`caFree` release path.

There is no recovered OK-versus-Cancel transaction branch. In particular, the
hidden Cancel handler does not restore earlier curve visibility or undo settings
that the live synchronization path already serialized. The difference proven
by the DFM is the built-in button kind and visibility, not a different form
outcome. The visible `bkClose` button is the normal user route.

## No-op and error boundaries

- If the virtual close query rejects closure, VCL keeps the form open. The
  global instance slot and helper objects remain, and prior live diagram changes
  remain in effect.
- If the user made no changes, clicking OK only requests the normal close and
  cleanup path. It does not write diagram settings from this handler.
- If the common close routine observes the modal form-state flag, it writes the
  shared modal-result field instead of dispatching the modeless close event.
  The recovered opener does not use that mode, and the OK handler has no
  separate repeated-click guard.
- If no Schematic Editor exists, cleanup skips the editor-command and editor-UI
  branches. It still releases the four form-owned helper objects and requests
  `caFree`.
- The handler has no local validation, retry, message, allocation, rollback, or
  exception handler. The recovered path does not restore live diagram state if
  close cleanup fails.
- Before this control can exist, the opener does nothing when a CurveListFrm is
  already open or the current diagram pointer is null.

## Click flow

```mermaid
flowchart TD
    edit["Earlier checklist or filter action"] --> live["Apply visible checklist state<br/>Refresh and serialize current diagram settings"]
    live -. "state is already live" .-> click["Visible OKBtn<br/>Kind = bkClose"]
    click -->|OnClick| handler["TCurveListFrm.OKBtnClick"]
    handler --> close["Request VCL form close"]
    close --> query{"Virtual close query permits closure?"}
    query -->|No| veto["Keep the form open<br/>Keep live diagram state"]
    query -->|Yes| formClose["TCurveListFrm.FormClose<br/>Clear global instance slot"]
    formClose --> cleanup["Destroy four form-owned helpers<br/>Coordinate editor cleanup"]
    cleanup --> action["Set CloseAction = caFree"]
    action --> release["VCL schedules the modeless form for release"]
    release --> retained["Previously applied curve visibility remains"]
```

## Handler and lifecycle evidence

- OK handler: [FUN_0135edc0](../../../DecompiledSources/Tina16/functions/000000000135EDC0__FUN_0135edc0.c)
- Common VCL close routine: [FUN_00805200](../../../DecompiledSources/Tina16/functions/0000000000805200__FUN_00805200.c)
- Form `OnClose`: [FUN_0135ef50](../../../DecompiledSources/Tina16/functions/000000000135EF50__FUN_0135ef50.c)
- Form-specific cleanup: [FUN_0135daa0](../../../DecompiledSources/Tina16/functions/000000000135DAA0__FUN_0135daa0.c)
- Form `OnCreate`: [FUN_0135d9d0](../../../DecompiledSources/Tina16/functions/000000000135D9D0__FUN_0135d9d0.c)
- Form `OnShow`: [FUN_0135edf0](../../../DecompiledSources/Tina16/functions/000000000135EDF0__FUN_0135edf0.c)
- Modeless curve-list opener: [FUN_01a8aa10](../../../DecompiledSources/Tina16/functions/0000000001A8AA10__FUN_01a8aa10.c)
- Modeless `Show` wrapper: [FUN_008059a0](../../../DecompiledSources/Tina16/functions/00000000008059A0__FUN_008059a0.c)
- Live curve synchronization: [FUN_0135ed00](../../../DecompiledSources/Tina16/functions/000000000135ED00__FUN_0135ed00.c)
- Checklist rebuild and filtering: [FUN_0135e310](../../../DecompiledSources/Tina16/functions/000000000135E310__FUN_0135e310.c)
- Diagram-settings writer: [FUN_01add6f0](../../../DecompiledSources/Tina16/functions/0000000001ADD6F0__FUN_01add6f0.c)
- Hidden Cancel handler: [FUN_0135ef80](../../../DecompiledSources/Tina16/functions/000000000135EF80__FUN_0135ef80.c)
- Controller-owned close guard: [FUN_0136b4a0](../../../DecompiledSources/Tina16/functions/000000000136B4A0__FUN_0136b4a0.c)
- Schematic Editor command cleanup: [FUN_01c6cf20](../../../DecompiledSources/Tina16/functions/0000000001C6CF20__FUN_01c6cf20.c)
- Recovered form evidence: [ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)

## Direct calls

- `FUN_00805200` - Runs the shared VCL close-query and close-action pipeline.

## Resource evidence

- `CurveListFrm` has caption `Show/hide curves` and binds `OnCreate`, `OnShow`,
  and `OnClose` handlers.
- `OKBtn` is a `TBitBtn` with `Kind = bkClose`, `NumGlyphs = 2`, and
  `TabOrder = 1`. The DFM does not hide it.
- The control has no explicit caption, hint, text, action, `ModalResult`, image
  reference, or embedded glyph. Its image comes from the built-in button kind,
  not from an extracted custom resource.
- The nearby `Curves:` label identifies the checklist region. It does not prove
  a separate OK commit action.

## Annotation ownership

This Bead annotates only `FUN_0135edc0`. `TIARA-diz.6.7.228` owns the form
lifecycle functions `FUN_0135ef50` and `FUN_0135daa0` and the opener
`FUN_01a8aa10`. `TIARA-diz.6.7.232` owns the shared filtering and live
synchronization functions. `TIARA-diz.6.7.231` owns the shared unchecked-row
collector. The common VCL close routine already has a canonical annotation.

## Analysis limits

- The DFM does not expose a run-time caption or modal-result value that the VCL
  supplies for `bkClose`. This article does not claim that the handler writes
  either property.
- No form-specific `OnCloseQuery` event is present. The exact virtual close
  query implementation is unresolved, so no application-specific veto rule is
  known.
- The settings writer serializes current diagram configuration. The later
  project or document file-save lifecycle is outside this click handler.
