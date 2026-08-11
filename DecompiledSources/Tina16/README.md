# TINA 16 decompiled sources

This directory contains Ghidra output from the installed TINA 16 Demo executable.

## Input

- File: `C:\Program Files\DesignSoft\Tina 16 - Demo\tina.exe`
- SHA-256: `52CF92D1C7FD1F5A32718BB43BAC23F4A94689532E1D8F12BB8FF23885996B24`
- Architecture: x86-64

The installed executable is protected. Static analysis finds only the loader stub. The analysis process captured the mapped runtime image and rebuilt a section-aware PE for Ghidra.

## Contents

- `functions/`: one decompiled `.c` file for each successful function.
- `functions/function-index.csv`: address, symbol, file, status, and failure message for each analyzed function.
- `resources/`: extracted PE resources and `resource-inventory.csv`.

The function export covers the recovered main code section from `0x401000` through `0x1DB814F`:

- 89,229 indexed functions.
- 89,226 decompiled `.c` files.
- 3 recorded decompilation failures.

The Ghidra project, runtime dumps, rebuilt PE, alternate exports, and logs are not committed. They remain under ignored `analysis` paths.

## Reproduction helpers

- `analysis/Export-MinidumpModule.ps1`
- `analysis/Convert-MappedImageToPe.ps1`
- `analysis/Invoke-TinaGhidraExport.ps1`
- `analysis/ghidra-scripts/ExportFunctions.java`

The default Ghidra runner expects the ignored rebuilt PE with SHA-256 `40A8F62B0B54C4C0609EF95129ACDEA1D25495E9C29B65716E2F8DFC521E2F26`.
