# sbUpdate

> Analysis status: Recovered as far as the image allows; the custom handler is inside a class the protector kept.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DebugUndo |
| Component path | DebugUndo.sbUpdate |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Kind | Not present in the recovered resource. |
| Handler name | sbUpdateClick |
| Handler address | Not in the image - see below. |
| Graph node | `resource:dfm:DebugUndo/DebugUndo.sbUpdate` |
| Handler node | `concept:dfm-handler:TDebugUndo/sbUpdateClick` |
| Graph layer | UI |

## What happens when clicked

`sbUpdate` sits on DebugUndo - the debugger's undo bar.

The resource binds its `OnClick` to `sbUpdateClick`. That binding is all the image holds: `sbUpdateClick` has no address, no body and no call edges, so what the click does beyond reaching the handler is not recovered.

## Click flow

```mermaid
flowchart TD
    control["sbUpdate (TSpeedButton)"] -->|"OnClick"| handler["sbUpdateClick"]
    handler -.->|"no address, no body, no edges"| gone["unknown"]
```

## Inputs

- Whatever `sbUpdateClick` reads from the form. Not known: the handler is not in the image.

## Decisions

- Not known. No decision can be attributed to a handler that is not in the image, and the caption is not evidence of one.

## State changes

- Not not known. Nothing in the image says what `sbUpdateClick` writes.

## Outputs

- Not known.

## Errors and no-op behaviour

- Not known. Whether `sbUpdateClick` can fail, and what it does when there is nothing to do, is not in the image.

## Why the handler is not in the image

`TDebugUndo` is one of 26 form classes in this image whose event bindings resolve to nothing at all. Across the whole resource, 320 forms carry at least one binding: 293 resolve every one of theirs, 26 resolve none of theirs, and one resolves some. This form is in the second group - 1 bindings, 0 resolved.

The cause is known and is not a gap in the analysis. A Delphi event binding is followed by finding the class's published method table, which hangs off its VMT. For these 26 classes the image holds the class name only inside the DFM stream: there is no second instance of it to anchor a VMT, so no published method table can be found and no handler name can be turned into an address. The pages that would hold them are the ones the protector left encrypted. No further static work on this image will recover them.

## Evidence

- Resource: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- No extracted glyph is associated with this control.

## Analysis limits

- The caption, the hint, the control class and the labels near it are not evidence of behaviour and none of them was used as such here.
- Recovering `sbUpdateClick` needs the class table, which needs the protected pages. Watching the running program would settle what the control does without settling how, and for this form not attempted, the form not being reachable from the Schematic Editor menus.
