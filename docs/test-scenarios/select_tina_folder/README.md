# Select TINA Folder scenarios

Window key: `SelectTinaFolder`.

Implementation: [select_tina_folder](../../../crates/tiara-ui/src/select_tina_folder/mod.rs).
Application route: [window catalogue](../../../crates/tiara-ui/src/window_catalog.rs).

Review: **Reviewed** by Codex on 2026-09-26. The control inventory and the
expected file effects are sufficient for later test derivation. The scenarios
have not been run through the desktop UI. Current implementation gaps are
tracked by Bead **TIARA-v86ktpa**.

## Control inventory

| Control | Original resource | Current TIARA surface | Scenario |
| --- | --- | --- | --- |
| Earlier-installation list and browse row | `lbxInstalledTinas`, including `OnDblClick` | Model helpers exist, but the view does not show the list or browse row. | [Installation selection](installation-selection.md) (`TINA-FOLDER-INSTALL-001`) |
| Include Examples and Designs | `chkbxImportExamples` | Visible checkbox | [Include examples](include-examples.md) (`TINA-FOLDER-EXAMPLES-001`) |
| Go! | `btnOK`, `bkOK` | Visible, but disabled because the application does not supply an import request | [Go](go-button.md) (`TINA-FOLDER-GO-001`) |
| Cancel | `btnCancel`, `bkCancel` | Not present | [Cancel](cancel-button.md) (`TINA-FOLDER-CANCEL-001`) |
| Open Library Import.log: Yes | Success prompt result `mrYes` | Visible after a completed copy | [Open-log prompt](open-log-prompt.md) (`TINA-FOLDER-LOG-YES-001`) |
| Open Library Import.log: No | Non-Yes success prompt result | Visible after a completed copy | [Open-log prompt](open-log-prompt.md) (`TINA-FOLDER-LOG-NO-001`) |

The original instruction label and the current status text are output, not
action controls. The scenarios check them where they identify a state. The
`TApplicationEvents` component is not visible. Its idle handler controls the
original Go button state and is covered by the installation-selection and Go
scenarios.

## Evidence boundary

- The original form resource defines the list, checkbox, Go button, Cancel
  button, and idle handler in
  [ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json).
- The reviewed [Go control article](../../ui-controls/frmselecttinafolder/btnok-facb2736eb.md)
  establishes the import inventory, copy, log, and prompt paths.
- The reviewed [Import TINA Libraries and Designs article](../../ui-controls/schematiceditor/importuserlibs-c355d14e3b.md)
  establishes the caller and modal form route.
- The official 2025 TINA Design Suite v16 user manual was searched again on
  2026-09-26. It did not establish this migration dialog's control contract.
  See the [documentation source map](../tina-documentation.md).

Follow the [scenario standard](../README.md) and
[execution rules](../execution-rules.md). Do not derive an integration test
until its scenario ID is cited and the listed current gap is resolved or used
as an explicit failing assertion.
