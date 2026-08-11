# &New ASM...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUAsmSelector |
| Component path | MCUAsmSelector.bNewASM |
| Control class | TButton |
| Caption | &New ASM... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bNewASMClick |
| Handler address | 01418c30 |
| Graph node | `resource:dfm:MCUAsmSelector/MCUAsmSelector.bNewASM` |
| Handler node | `function:01418c30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&New ASM..."] -->|OnClick| handler["FUN_01418c30"]
    handler --> call1["FUN_01417bc0"]
    handler --> call2["FUN_01418a70"]
    handler --> call3["FUN_01418bb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001418C30__FUN_01418c30.c](../../../DecompiledSources/Tina16/functions/0000000001418C30__FUN_01418c30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUAsmSelector.bNewASM.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:01417bc0` — FUN_01417bc0
- `function:01418a70` — FUN_01418a70
- `function:01418bb0` — FUN_01418bb0

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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
