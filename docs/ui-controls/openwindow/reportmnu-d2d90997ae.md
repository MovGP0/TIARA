# Report

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | OpenWindow |
| Component path | OpenWindow.ListPopupMnu.ReportMnu |
| Control class | TMenuItem |
| Caption | Report |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ReportMnuClick |
| Handler address | 014bf0d0 |
| Graph node | `resource:dfm:OpenWindow/OpenWindow.ListPopupMnu.ReportMnu` |
| Handler node | `function:014bf0d0` |
| Graph layer | UI |

## What happens when clicked

`FUN_014bf0d0` calls a virtual setter on the FileList object at form field `+0x6e8` with value `3`. In Delphi VCL `TViewStyle`, value `3` is `vsReport`. The command therefore changes the existing file-list presentation to report view. FormCreate defines the report columns as **Name**, **Size**, and **Date**.

The handler has no separate operation that clears or repopulates the item collection, changes the current folder, or refreshes the preview. It does not test `Sender` or compare the current style. It has no local error or rollback branch. The recovered graph has no direct call edge because the setter is an indirect VMT call.

## Click flow

```mermaid
flowchart TD
    Click["Click Report"] --> Handler["FUN_014bf0d0"]
    Handler --> FileList["Read FileList field +0x6e8"]
    FileList --> Setter["Call virtual view-style setter with value 3"]
    Setter --> Layout["Display Name, Size, and Date report columns"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014BF0D0__FUN_014bf0d0.c](../../../DecompiledSources/Tina16/functions/00000000014BF0D0__FUN_014bf0d0.c)
- Recovered role: Switch the OpenWindow FileList to Delphi `vsReport` presentation.
- Current graph summary: Handles 1 Delphi UI event: OpenWindow.ListPopupMnu.ReportMnu.OnClick.
- Current graph behavior: Invokes the FileList view-style setter with `TViewStyle` ordinal `3`; the report layout uses the three columns created during form initialization.
- Current graph evidence: The handler reads form field `+0x6e8` and makes one indirect VMT call with value `3`. `FUN_014bdd20` uses the same field as a TListView and creates Name, Size, and Date columns; the paired List command passes value `2`.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present because the recovered operation is an indirect TListView VMT call at slot `+0x330`.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The setter's recovered Delphi symbol is not available. The standard `TViewStyle` ordinal, paired handler, and initialized columns establish the report mapping.
- The handler does not expose whether VCL repaints immediately or posts a native list-view message internally.
