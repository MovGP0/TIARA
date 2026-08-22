# Rust Port Mappings

Use `rust_port_mappings` to record a verified port from one recovered Ghidra-C
function file to one or more Rust source files. Do not use a trace comment by
itself as proof that a port is complete. Validate the Rust behavior and close
the matching function Bead first.

Create a temporary JSON file under `.temp/`:

```json
{
  "records": [
    {
      "beadId": "TIARA-f014ef000",
      "functionAddress": "014ef000",
      "ghidraSourcePath": "DecompiledSources/Tina16/functions/00000000014EF000__FUN_014ef000.c",
      "rustSourcePath": "crates/tiara-ui/src/advanced_analysis_options/mod.rs",
      "rustSymbol": "open_library_manager",
      "mappingKind": "implementation",
      "notes": "Verified Advanced Analysis Options port."
    }
  ]
}
```

`rustSymbol` is optional. `mappingKind` must be `implementation`,
`library-adapter`, or `shared-implementation`.

Import one file at a time:

```powershell
pwsh.exe -NoProfile -NoLogo -File analysis/Import-TinaRustPortMappings.ps1 `
  -SourcePath .temp/port-mappings.json
```

The importer checks these items before it writes the rows:

- Both mapped files exist in the repository.
- The address and Ghidra-C path identify one function node in DuckDB.
- The Bead ID is `TIARA-f` plus the normalized function address.
- The Rust file contains the function address.
- The Rust file contains `rustSymbol` when this field has a value.

The import replaces all rows that have the same temporary source file name.
Remove the temporary JSON file after a successful import and count check. The
graph database rebuild copies the table and verifies its row, source, function,
Ghidra-file, and Rust-file counts before it replaces the tracked database.
