# Normal mode

> Analysis status: Recovered radio selection and normal-mode transition reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PyMainForm |
| Component path | PyMainForm.MainMenu.File1.mnRunApp.mnBackToMain |
| Control class | TMenuItem |
| Caption | Normal mode |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnBackToMainClick |
| Handler address | 01471080 |
| Graph node | `resource:dfm:PyMainForm/PyMainForm.MainMenu.File1.mnRunApp.mnBackToMain` |
| Handler node | `function:01471080` |
| Graph layer | UI |

## What happens when clicked

The handler checks the **Normal mode** radio item, disables two related properties through a shared menu-state helper, and requests application mode 0. If mode 0 is already active, the mode loader is a no-op.

For a real transition, the shared mode routine selects Python-file filters and the Python extension, creates a new blank document, then loads `Examples\Python\programs\bubblesort.py` into the editor. It stores that path and updates the caption. This transition discards the current editor text without a save prompt in the recovered path.

## Click flow

```mermaid
flowchart TD
    control["Click Normal mode"] --> check["Check the radio item"]
    check --> flags["Set the related UI flags to false"]
    flags --> changed{"Mode differs from 0?"}
    changed -->|No| noAction["Keep the current document"]
    changed -->|Yes| configure["Select Python filters and create a blank document"]
    configure --> sample["Load bubblesort.py and update the caption"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001471080__FUN_01471080.c](../../../DecompiledSources/Tina16/functions/0000000001471080__FUN_01471080.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PyMainForm.MainMenu.File1.mnRunApp.mnBackToMain.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:007e2d20` — FUN_007e2d20
- `function:01471040` — FUN_01471040
- `function:01471260` — FUN_01471260

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
- The original name of the component changed by the shared UI-flag helper is not recovered.
