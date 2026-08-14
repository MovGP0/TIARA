# &Rounded corner

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Insert.mnShape.mnArrow.mnArrowRoundedCorner |
| Control class | TMenuItem |
| Caption | &Rounded corner |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | InsertShape |
| Handler address | 01c97500 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Insert.mnShape.mnArrow.mnArrowRoundedCorner` |
| Handler node | `function:01c97500` |
| Graph layer | UI |

## What happens when clicked

If shape insertion is allowed, the handler compares Sender with the eight shape-menu fields, constructs the matching line, arrow variant, polygon, rectangle, ellipse, or arc tool, and activates it. Each bound control selects the shape named by its own menu resource.

## Click flow

```mermaid
flowchart TD
    control["&Rounded corner"] -->|"OnClick"| handler["InsertShape (01c97500)"]
    handler --> guard{"Shape insertion allowed and Sender recognized?"}
    guard -->|"No"| noChange["Keep current command"]
    guard -->|"Yes"| action["Construct and activate the Sender-selected shape tool"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97500__FUN_01c97500.c](../../../DecompiledSources/Tina16/functions/0000000001C97500__FUN_01c97500.c)
- Recovered role: Activate the shape tool selected by Sender.
- Current graph summary: Handles 8 Delphi UI events: SchematicEditor.MainMenu.Insert.mnShape.mnLine.OnClick, SchematicEditor.MainMenu.Insert.mnShape.mnArrow.mnArrowLinear.OnClick, SchematicEditor.MainMenu.Insert.mnShape.mnArrow.mnArrowRoundedCorner.OnClick.
- Current graph behavior: If shape insertion is allowed, the handler compares Sender with the eight shape-menu fields, constructs the matching line, arrow variant, polygon, rectangle, ellipse, or arc tool, and activates it. Each bound control selects the shape named by its own menu resource.
- Current graph evidence: The recovered body has explicit Sender comparisons against form fields and distinct constructor or mode paths before one shared command-activation call. The DFM bindings enumerate Line, three Arrow variants, Polygon, Rectangle, Ellipse, and Arc.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:004113d0` — FUN_004113d0
- `function:0136cce0` — FUN_0136cce0
- `function:0136cf80` — FUN_0136cf80
- `function:0136d9f0` — FUN_0136d9f0
- `function:0136dcb0` — FUN_0136dcb0
- `function:01c6cee0` — FUN_01c6cee0
- `function:01c6d670` — FUN_01c6d670
- `function:01c8cee0` — FUN_01c8cee0

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

- Recovered field offsets cannot be mapped independently to constructor class names, so numeric class identities are not claimed.

