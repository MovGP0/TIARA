# Delete the selected HDL watch

> Analysis status: Complete source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pmPopupWatches.mnDeleteWatch |
| Control class | TMenuItem |
| Caption | &Delete Watch |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDeleteWatchClick |
| Handler address | 0109f7b0 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pmPopupWatches.mnDeleteWatch` |
| Handler node | `function:0109f7b0` |
| Graph layer | UI |

## How the popup selects the target

The command operates on the watch-tree item under the right-click point. The
tree's `OnMouseDown` handler clears form field `+0xA28`, performs a hit test,
and finds the tree node at the mouse coordinates. If the right-click is not on
an item label or icon, it disables popup item index 1, which is **Delete
Watch**. For a valid item hit, it enables this command, stores the node pointer
at `+0xA28`, and selects that node in the tree.

`mnDeleteWatchClick` does not query the tree selection again. It uses this
stored popup target. This distinction matters if the handler is invoked by
code or a keyboard route without the normal right-click: a null `+0xA28`
causes an immediate no-op.

## What happens when clicked

`FUN_0109f7b0` reads the selected node's attached data object and its display
string. Watch rows use a `name:value` text form. `FUN_0109f6f0` finds the first
colon and returns the text before it, so the value and type display after the
colon do not participate in deletion.

The handler passes this watch key to `FUN_00f7d200`. The debugger manager owns
the current watch names in a Delphi string list at manager offset `+0x28`.
`FUN_00f7d200` performs an exact list lookup. If it finds the key, it deletes
that one index. If it does not find the key, the list is unchanged.

After the list operation, the handler destroys the data object attached to the
selected tree node and calls the canonical watch reload with refresh argument
`1`. It does not delete the visual tree row directly. The reload serializes the
complete remaining watch-name list, sends it to the delayed
`VHDL_DLL2.DLL::_Dbg_SetWatchItems` export, calls `_Dbg_LoadWatch`, and rebuilds
the Watches tree from the returned debugger data.

The normal result is that the selected watch and its displayed value disappear
and all remaining values are reloaded from the HDL debugger backend.

## Selection, UI, and backend state

- The popup's mouse handler selects the right-clicked row before this command
  runs. The delete handler has no independent current-selection fallback.
- The watch key is the prefix before the first `:`. A colon in the displayed
  value does not affect the key because only the first colon is used.
- The local session list changes before the DLL synchronization. The backend
  receives the complete remaining set; there is no separate DLL delete call.
- The tree is rebuilt from backend output. The click does not explicitly
  restore the deleted row, its focus, or its expansion state.
- The handler frees the selected node's attached data object before reload. It
  does not free the tree node itself through a direct tree method.

## No selection, malformed data, and failures

- If the stored popup node is null, the handler only finalizes its empty local
  string and returns. It does not change the session list, call the backend, or
  refresh the tree.
- There is no confirmation dialog, undo entry, recycle area, or secondary
  check before deletion.
- The key extractor assumes the generated `name:value` format. It has no
  explicit missing-colon or empty-name validation. A key that is not in the
  session list leaves the list unchanged, but the handler still frees the
  selected data object and requests a reload.
- The handler has no local exception handler or rollback. A failure after the
  list deletion but before or during `_Dbg_SetWatchItems` or `_Dbg_LoadWatch`
  can leave the local list changed while the visible tree or DLL state is
  stale.
- The reload only rebuilds from a non-null backend result. The recovered path
  does not show a user-facing error if `_Dbg_LoadWatch` returns no data.

## Persistence boundary

This is a current debugger-session mutation. The click changes the manager's
in-memory watch list and synchronizes that list with `VHDL_DLL2.DLL`. It does
not write a project field, source file, settings file, INI value, registry
value, or recent-list entry.

HDL debugger setup can import an initial serialized watch list through
`FUN_0109e3d0`, but this deletion handler does not write its modified list back
to that source. The recovered click path therefore does not prove that the
deletion survives debugger destruction, project reload, or application
restart.

## Relation to Add and Delete All

| Command | Target and list mutation | Refresh behavior |
| --- | --- | --- |
| Add Watch... | Accepts a nonempty name from a modal dialog and adds it only if absent | Reloads only when the Watches debug page is active |
| Delete Watch | Uses the valid popup tree node, extracts its key, and deletes one exact list entry | Reloads immediately after the selected-node path |
| Delete All Watches | Clears the complete session list without a selection | Reloads immediately |

**Delete Watch** shares the canonical reload with both sibling commands. It
does not call either sibling handler.

## Click flow

```mermaid
flowchart TD
    rightClick["Right-click Watches tree"] --> hit{"Pointer is on a watch item?"}
    hit -->|No| disabled["Clear popup target and disable Delete Watch"]
    hit -->|Yes| target["Store and select the tree node; enable Delete Watch"]
    target --> click["Delete Watch click: FUN_0109f7b0"]
    click --> selected{"Stored popup target exists?"}
    selected -->|No| noOp["Return without list or backend changes"]
    selected -->|Yes| key["FUN_0109f6f0: take text before first colon"]
    key --> lookup{"FUN_00f7d200 finds the exact key?"}
    lookup -->|Yes| remove["Delete one entry from the session watch list"]
    lookup -->|No| unchanged["Leave session list unchanged"]
    remove --> dispose["Destroy selected node data object"]
    unchanged --> dispose
    dispose --> sync["FUN_0109d7c0: send complete remaining list to VHDL_DLL2"]
    sync --> load{"_Dbg_LoadWatch returns data?"}
    load -->|Yes| rebuild["Rebuild the Watches tree and values"]
    load -->|No| noData["No user error; recovered reload has no rebuild branch"]
```

## Handler and call-path evidence

- Delete handler: [FUN_0109f7b0](../../../DecompiledSources/Tina16/functions/000000000109F7B0__FUN_0109f7b0.c)
- Selected watch-key extractor: [FUN_0109f6f0](../../../DecompiledSources/Tina16/functions/000000000109F6F0__FUN_0109f6f0.c)
- Single-watch list deletion: [FUN_00f7d200](../../../DecompiledSources/Tina16/functions/0000000000F7D200__FUN_00f7d200.c)
- Watch-tree popup target resolver: [FUN_0109e120](../../../DecompiledSources/Tina16/functions/000000000109E120__FUN_0109e120.c)
- Canonical watch-list synchronization and reload: [FUN_0109d7c0](../../../DecompiledSources/Tina16/functions/000000000109D7C0__FUN_0109d7c0.c)
- Initial serialized-watch import: [FUN_0109e3d0](../../../DecompiledSources/Tina16/functions/000000000109E3D0__FUN_0109e3d0.c)
- Serialized-watch parser: [FUN_00f7da90](../../../DecompiledSources/Tina16/functions/0000000000F7DA90__FUN_00f7da90.c)
- **Add Watch...** sibling: [FUN_0109e250](../../../DecompiledSources/Tina16/functions/000000000109E250__FUN_0109e250.c)
- **Delete All Watches** sibling: [FUN_0109f780](../../../DecompiledSources/Tina16/functions/000000000109F780__FUN_0109f780.c)
- Resource evidence: [ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)

The recovered data at address `0109F774` is the UTF-16 colon used by
`FUN_0109f6f0`. The popup resource order identifies item index 1 as
`mnDeleteWatch`.

## Resource evidence

- The popup contains **Add Watch...**, **Delete Watch**, a separator, and
  **Delete All Watches**, in that order.
- The watch display is a `TTreeView` on the Watches debugger page.
- This menu item has no hint, glyph, image reference, checked state, shortcut,
  or action binding in the recovered resource.

## Analysis limits and annotation ownership

- The selected node and attached record use recovered field offsets. Their
  original Delphi field and record type names are not available.
- The colon-delimited display proves the watch-key boundary, but the complete
  backend value and type formatting grammar is outside this handler.
- The backend exports are delayed imports from `VHDL_DLL2.DLL`; their internal
  implementation and error reporting are not recovered here.
- The graph generator canonically owns `FUN_0109d7c0`. `TIARA-diz.6.7.600`
  owns the clear-all mutator `FUN_00f7d290`. The broad popup mouse handler
  remains evidence only. This control owns `FUN_0109f7b0`, `FUN_0109f6f0`,
  and `FUN_00f7d200`.
