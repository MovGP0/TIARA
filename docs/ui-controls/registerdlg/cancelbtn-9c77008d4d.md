# CancelBtn

> Analysis status: Recovered as far as the image allows; the custom handler is inside a class the protector kept.

## Control

| Property | Recovered value |
| --- | --- |
| Form | RegisterDlg |
| Component path | RegisterDlg.CancelBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Kind | bkCancel |
| Handler name | CancelBtnClick |
| Handler address | Not in the image - see below. |
| Graph node | `resource:dfm:RegisterDlg/RegisterDlg.CancelBtn` |
| Handler node | `concept:dfm-handler:TRegisterDlg/CancelBtnClick` |
| Graph layer | UI |

## What happens when clicked

`CancelBtn` sits on RegisterDlg - the licence dialog, captioned `Authorize`. It carries the registration fields, a menu for moving a licence between machines, and the contact details for doing it by hand.

The resource gives this button `Kind = bkCancel`, and what that means is recovered code rather than a guess. While the form is built, TBitBtn.SetKind (0082bc30) reads the kind and gives the button the modal result it stands for - here `mrCancel` (2) - along with its default or cancel state. When the button is pressed, TCustomButton.Click (00687f30) copies that result into the form it sits on, and only afterwards does TControl.Click (00650840) dispatch `CancelBtnClick`. So the press sets the form's modal result and ends the dialog with it whatever the custom handler does.

What `CancelBtnClick` itself does - whether it validates, what it writes, whether it can refuse to close - is not in the image.

## Click flow

```mermaid
flowchart TD
    control["CancelBtn (TBitBtn)"]
    handler["CancelBtnClick"]
    setkind["TBitBtn.SetKind (0082bc30), while the form is built"]
    setkind -->|"Kind = bkCancel"| held["the button holds mrCancel"]
    control -->|"pressed"| press["TCustomButton.Click (00687f30)"]
    held --> press
    press --> onform["the form holds mrCancel"]
    press --> dispatch["TControl.Click (00650840)"]
    dispatch -->|"OnClick"| handler
    onform --> close["the dialog ends with mrCancel"]
    handler -.->|"no address, no body, no edges"| gone["unknown"]
```

## Inputs

- The button's `Kind`, which the resource records as `bkCancel`. That is an input to the VCL path above and is known.
- Whatever `CancelBtnClick` reads from the form. Not known: the handler is not in the image.

## Decisions

- None in the VCL path: a cancel button sets its result and the dialog ends. Whether `CancelBtnClick` decides anything first is not known.

## State changes

- The form's modal result becomes `mrCancel`. That is recovered.
- Any other change is not known. Nothing in the image says what `CancelBtnClick` writes.

## Outputs

- The dialog ends with `mrCancel`, which is what its caller reads.

## Errors and no-op behaviour

- Not known. Whether `CancelBtnClick` can fail, and what it does when there is nothing to do, is not in the image.
- The Escape key reaches this button, since a cancel button is the form's cancel button by the same `Kind`.

## Why the handler is not in the image

`TRegisterDlg` is one of 26 form classes in this image whose event bindings resolve to nothing at all. Across the whole resource, 320 forms carry at least one binding: 293 resolve every one of theirs, 26 resolve none of theirs, and one resolves some. This form is in the second group - 14 bindings, 0 resolved.

The cause is known and is not a gap in the analysis. A Delphi event binding is followed by finding the class's published method table, which hangs off its VMT. For these 26 classes the image holds the class name only inside the DFM stream: there is no second instance of it to anchor a VMT, so no published method table can be found and no handler name can be turned into an address. The pages that would hold them are the ones the protector left encrypted. No further static work on this image will recover them.

## Evidence

- Resource: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- TBitBtn.SetKind, which maps the Kind the resource records onto the button's ModalResult and its default or cancel state: [DecompiledSources/Tina16/functions/000000000082BC30__FUN_0082bc30.c](../../../DecompiledSources/Tina16/functions/000000000082BC30__FUN_0082bc30.c)
- TCustomButton.Click, which writes that ModalResult into the parent form before the click is dispatched: [DecompiledSources/Tina16/functions/0000000000687F30__FUN_00687f30.c](../../../DecompiledSources/Tina16/functions/0000000000687F30__FUN_00687f30.c)
- TControl.Click, which dispatches the OnClick the resource names: [DecompiledSources/Tina16/functions/0000000000650840__FUN_00650840.c](../../../DecompiledSources/Tina16/functions/0000000000650840__FUN_00650840.c)
- The other controls on this form that do something: `RegisterDlg` (Authorize), `OKBtn` (OK), `PageCtrl` (TPageControl), `OrderNumEB` (TEdit), `EmailLB` (register@designsoftware.com), `WebLB` (http://www.designsoftware.com), `OrderNoEB` (TEdit), `InitTrMediaMnu` (1. Initialize transfer media).
- No extracted glyph is associated with this control.

## Analysis limits

- The caption, the hint, the control class and the labels near it are not evidence of behaviour and none of them was used as such here.
- Recovering `CancelBtnClick` needs the class table, which needs the protected pages. Watching the running program would settle what the control does without settling how, and for this form not attempted: it belongs to licensing, and pressing its controls on a real installation could move or destroy a licence.
