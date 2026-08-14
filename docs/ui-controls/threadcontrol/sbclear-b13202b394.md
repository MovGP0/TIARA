# Clear

> Analysis status: Blocked by an unresolved event-handler address.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ThreadControl |
| Component path | ThreadControl.pcMain.tsManual.sbClear |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Clear |
| Text | Not present in the recovered resource. |
| Handler name | sbClearClick |
| Handler address | Not present in the recovered resource. |
| Graph node | `resource:dfm:ThreadControl/ThreadControl.pcMain.tsManual.sbClear` |
| Handler node | `concept:dfm-handler:TThreadControl/sbClearClick` |
| Graph layer | tina.exe |

## What happens when clicked

The recovered DFM stream binds this speed button to `TThreadControl.sbClearClick`. The extractor did not resolve a code address for the published method. The graph therefore contains an unresolved handler concept and no function source or call tree.

The `Clear` hint, the inspected two-state glyph, and the adjacent `lbManualList` list box provide a clearing context. They do not prove whether the handler removes the selected entry, clears the complete list, resets test output, stops active work, or asks for confirmation. Inputs, decisions, state changes, outputs, errors, and empty-list behavior remain unknown.

## Click flow

```mermaid
flowchart TD
    control["Clear speed button"] -->|OnClick from DFM| binding["TThreadControl.sbClearClick"]
    binding --> address{"Is a code address resolved?"}
    address -->|No| gap["No recovered source or call tree"]
    gap --> unknown["Clear target and empty-state behavior remain unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- Extractor: [analysis/undelphi/TiaraUiEvidence.rs](../../../analysis/undelphi/TiaraUiEvidence.rs)
- Recovered role: Unknown because no handler function was resolved.
- Current graph summary: Unresolved Delphi event handler TThreadControl.sbClearClick, referenced by 1 UI event.
- Current graph behavior: Unknown.
- Current graph evidence: The trigger edge preserves the DFM method name, but its handler address is null.
- Complexity: simple
- Distinct outgoing calls: None. The handler node is an unresolved concept.

## Direct calls

- No direct call edge is present. A call tree cannot start without a recovered handler address.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0490_ThreadControl_ThreadControl_pcMain_tsManual_sbClear_Glyph_Data.png`](../../../glyph/0490_ThreadControl_ThreadControl_pcMain_tsManual_sbClear_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The DFM provides the handler name but no code address. RTTI and VMT resolution did not produce a function in the recovered range.
- A repository-wide search found no recovered `TThreadControl` or `sbClearClick` implementation outside the resource and glyph evidence.
- The hint, glyph, and list-box context do not identify the clear scope or empty-state behavior.
- A recovered address or an independent runtime trace is required before this control can receive a function annotation or a behavior claim.
