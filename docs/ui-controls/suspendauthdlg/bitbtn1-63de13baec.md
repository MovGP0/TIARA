# BitBtn1

> Analysis status: Blocked by an unresolved event-handler address.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SuspendAuthDlg |
| Component path | SuspendAuthDlg.BitBtn1 |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BitBtn1Click |
| Handler address | Not present in the recovered resource. |
| Graph node | `resource:dfm:SuspendAuthDlg/SuspendAuthDlg.BitBtn1` |
| Handler node | `concept:dfm-handler:TSuspendAuthDlg/BitBtn1Click` |
| Graph layer | tina.exe |

## What happens when clicked

The recovered DFM stream binds `SuspendAuthDlg.BitBtn1.OnClick` to the method name `BitBtn1Click`. The checked-in extractor could not resolve a code address from this event binding or from a `TSuspendAuthDlg` published-method table. The graph therefore contains an unresolved handler concept, not a recovered function.

A manual scan of the rebuilt runtime and its mapped image did not recover the missing table. The only `TSuspendAuthDlg` text is the class-name ShortString in the `TPF0` form stream at mapped-image RVA `03535a50`. No 64-bit pointer in the mapped image refers to that ShortString, so there is no recovered standard VMT class-name link for this class. The complete minidump also contains no second `TSuspendAuthDlg` occurrence.

The mapped image contains eight address-bearing Delphi published-method records named `BitBtn1Click`. Their code addresses are `00f0d410`, `00f91f40`, `00fd8430`, `010a05c0`, `010a0e20`, `01171a20`, `011acd00`, and `01b36460`. The read-only graph maps these records to `DFAxisCnf2Dlg`, `dlgFlowChartOptions`, `dlgFlowChartSetDevice`, `GetName`, `GetValue`, `Screen_form1`, `tables_form`, and `introduction_form`. None belongs to `SuspendAuthDlg`. A same-name record from another class is not evidence for this control.

The form caption is `Upload license to the Internet`. The form also contains the `OrderNumEB` editor and a warning that the program cannot be used after pressing OK until the license is downloaded again. The button has the built-in kind `bkOK`. These resources establish the dialog context and the button's OK presentation. They do not prove that the handler reads the order number, validates it, contacts a server, uploads or removes a license, closes the dialog, or reports an error.

No recovered source establishes the input checks, network endpoint, state change, success result, failure result, or no-op behavior of `BitBtn1Click`.

## Click flow

```mermaid
flowchart TD
    control["BitBtn1<br/>DFM Kind = bkOK"] -->|"OnClick"| binding["Handler name: BitBtn1Click"]
    binding --> address{"Code address resolved?"}
    address -->|"No"| gap["No recovered function source or callee path"]
    gap --> unknown["License and network effects remain unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- Extractor: [analysis/undelphi/TiaraUiEvidence.rs](../../../analysis/undelphi/TiaraUiEvidence.rs)
- Recovered role: Unknown because no handler function was resolved.
- Current graph summary: Unresolved Delphi event handler TSuspendAuthDlg.BitBtn1Click, referenced by 1 UI event.
- Current graph behavior: Unknown.
- Current graph evidence: The trigger edge preserves the DFM method name, but its handler address is null.
- Complexity: simple
- Distinct outgoing calls: None. The handler node is an unresolved concept.

## Direct calls

- No direct call edge is present. A call tree cannot start without a recovered handler address.

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Note that, after pressing OK you will not be able to use the program until you download your license again! at distance 156.
- Rank 2: Order number: at distance 218.

## Analysis limits

- The DFM provides the `BitBtn1Click` name but no code address.
- The rebuilt runtime SHA-256 value is `40A8F62B0B54C4C0609EF95129ACDEA1D25495E9C29B65716E2F8DFC521E2F26`. The manual scan found no standard VMT pointer to the only recovered `TSuspendAuthDlg` class-name ShortString.
- All eight valid published-method records named `BitBtn1Click` belong to other recovered form classes. No unassigned address-bearing record remains.
- RTTI and VMT resolution did not find a published method address for this event. The `FormCreate` and `FormHelp` events on the same `TSuspendAuthDlg` class also remain unresolved.
- The graph has no function node, source file, outgoing call, extracted glyph, network endpoint, or function annotation for this binding.
- A schema-complete function annotation cannot be created without an address and evidence-backed scalar fields.
- A later recovery requires another runtime capture that contains the `TSuspendAuthDlg` VMT or a proven class-alias registration. It must then identify the handler address and inspect its source and relevant callees before it can describe application behavior.
