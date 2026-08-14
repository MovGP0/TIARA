# Load WAV file...

> Analysis status: Reviewed against the WAV open-dialog and path-update flow.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlNotebook.pctrlMode.tsSoundInput.btnLoadWAV |
| Control class | TButton |
| Caption | Load WAV file... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnLoadWAVClick |
| Handler address | 01127910 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlNotebook.pctrlMode.tsSoundInput.btnLoadWAV` |
| Handler node | `function:01127910` |
| Graph layer | UI |

## What happens when clicked

The handler shows the form's WAV open dialog. Cancel leaves the current path and
audio state unchanged. When a file is selected, the Absolute path check box
decides whether the edit control receives the selected path or a path relative to
the current project directory. The handler then gives the full selected path to
the sound-input loader, refreshes that loader, and selects the first recovered
channel-mode control while clearing the other two. The nearby Max voltage label
is not part of this click path.

## Click flow

```mermaid
flowchart LR
    control["Load WAV file"] -->|"OnClick"| handler["FUN_01127910"]
    handler --> dialog["Show WAV open dialog"]
    dialog --> accepted{"File selected?"}
    accepted -->|"No"| unchanged["Keep current WAV state"]
    accepted -->|"Yes"| path{"Absolute path selected?"}
    path -->|"No"| relative["Store relative display path"]
    path -->|"Yes"| absolute["Store selected full path"]
    relative --> load["Load full path and refresh channel state"]
    absolute --> load
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001127910__FUN_01127910.c](../../../DecompiledSources/Tina16/functions/0000000001127910__FUN_01127910.c)
- Recovered role: Select and load the WAV source for sound-input mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlNotebook.pctrlMode.tsSoundInput.btnLoadWAV.OnClick.
- Current graph behavior: Shows the WAV dialog, formats the displayed path, loads the selection, and resets channel choices.
- Current graph evidence: The handler checks the dialog result and Absolute path control before setting the path edit and calling the sound-loader update methods.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00441d00` — FUN_00441d00
- `function:0064de00` — VCL control text setter with change suppression
- `function:00724270` — FUN_00724270
- `function:01112a40` — FUN_01112a40
- `function:011143a0` — FUN_011143a0
- `function:01c8a3c0` — FUN_01c8a3c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Max voltage at distance 313.

## Analysis limits

- The source proves the path and loader updates but does not expose lower-level WAV decode errors.
- The nearby Max voltage label is only a layout candidate.
