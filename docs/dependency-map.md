# TINA dependency map

## Purpose

This document maps the observed dependencies of TINA 16 Demo to clean-room Rust decisions.
It does not authorize the use or distribution of the installed TINA files.

The analysis uses these images:

- Installed image: `C:\Program Files\DesignSoft\Tina 16 - Demo\tina.exe`
- Installed image SHA-256: `52CF92D1C7FD1F5A32718BB43BAC23F4A94689532E1D8F12BB8FF23885996B24`
- Rebuilt runtime image SHA-256: `40A8F62B0B54C4C0609EF95129ACDEA1D25495E9C29B65716E2F8DFC521E2F26`
- Architecture: x86-64

The recovered-source context is in
[`DecompiledSources/Tina16/README.md`](../DecompiledSources/Tina16/README.md).

## Decision terms

| Decision | Meaning |
| --- | --- |
| Reuse | Use an existing dependency that is already suitable for TIARA. |
| Replace | Implement the behavior with a Rust crate or original Rust code. Do not use the installed binary. |
| Wrap | Call an operating-system or external interface through a narrow Rust adapter. |
| Remove | Do not reproduce the dependency or its behavior. |
| Further analysis | Define the observed interface and behavior before TIARA selects an implementation. |

## Evidence and limits

The inventory has four evidence classes:

1. The protected installed PE import directory contains 23 libraries. Each entry has one resolved import.
2. The rebuilt runtime image contains delay imports for Windows services and 227 entries from `VHDL_DLL2.DLL`.
3. A clean launch reached the `Schematic Editor` window on 2026-08-20. The process loaded 111 modules. Of these modules, 16 dependency modules came from the TINA installation directory, 94 came from Windows, and one was `tina.exe`.
4. Recovered source shows optional process and library loads that the idle launch did not exercise.

The runtime snapshot covers application start only. A feature can load more code when a user opens a document, starts an analysis, opens a secondary tool, or uses online help. A file in the installation directory is not a dependency unless an import, a load, a process start, or a proven call path refers to it.

## Static PE imports

### Windows libraries

The protected image imports these Windows libraries:

`advapi32.dll`, `comctl32.dll`, `comdlg32.dll`, `gdi32.dll`, `kernel32.dll`,
`msvcrt.dll`, `netapi32.dll`, `ole32.dll`, `oleacc.dll`, `oleaut32.dll`,
`psapi.dll`, `shell32.dll`, `SHFolder.dll`, `shlwapi.dll`, `user32.dll`,
`userenv.dll`, `version.dll`, `wininet.dll`, `winmm.dll`, and `winspool.drv`.

Decision: **wrap or replace**. Use `std`, `iced`, and `rfd` first. Use the
[`windows`](https://github.com/microsoft/windows-rs) crate only for behavior that has no portable Rust interface. The `windows` crate uses `MIT OR Apache-2.0`. TIARA must not redistribute Windows system DLLs.

The rebuilt runtime image also has delay imports from `DWMAPI.DLL`, `imm32.dll`,
`msimg32.dll`, `rpcrt4.dll`, `Shcore.dll`, `uxtheme.dll`, `windowscodecs.dll`,
and `wtsapi32.dll`. The same wrap-or-replace decision applies to each library.
The rebuilt image also repeats imports from `advapi32.dll`, `kernel32.dll`,
`shell32.dll`, and `user32.dll`.

### Application libraries

| Dependency | Static evidence | Decision | Rust replacement and license |
| --- | --- | --- | --- |
| `klu_sparse_dll.dll` | Imports `klu_solve`. The DLL exports the real KLU factor and solve interface. | Replace | Use [`faer`](https://codeberg.org/sarah-quinones/faer) for pure-Rust sparse matrices and sparse LU. MIT. |
| `klu_complex_sparse_dll.dll` | Imports `klu_z_solve`. The DLL exports the complex KLU factor and solve interface. | Replace | Use `faer` complex sparse LU after numeric parity tests. MIT. |
| `sparse_dll.dll` | Imports `_SMPnewMatrix`. The DLL exports 56 SPICE matrix operations. | Replace | Use a TIARA-owned matrix adapter over `faer`. Do not preserve the proprietary ABI. MIT. |
| `VHDL_DLL2.DLL` | The rebuilt image has 227 delay-import entries. The graph resolves 226 named external nodes. | Further analysis | No complete permissive Rust simulator is selected. See [Further analysis](#further-analysis). |

## Application-local runtime modules

This table lists every dependency module loaded from the TINA directory during the clean launch. It does not list `tina.exe` itself.

| Module | Observed role or provenance | Decision | Replacement or reason |
| --- | --- | --- | --- |
| `BORLNDMM.DLL` | Embarcadero memory manager, version 24.0. | Remove | Rust ownership and the Rust allocator replace it. |
| `CC64240MT.DLL` | Embarcadero C++ runtime, version 18.0. | Remove | Pure Rust code does not need this runtime. |
| `CC64260MT.DLL` | Embarcadero C++ runtime, version 20.0. | Remove | Pure Rust code does not need this runtime. |
| `IndyCore260.bpl` | Indy network components. | Replace | Use [`reqwest`](https://github.com/seanmonstar/reqwest) for HTTP and [`rustls`](https://github.com/rustls/rustls) for TLS when network behavior is required. Both offer a permissive license choice. |
| `IndySystem260.bpl` | Indy platform and socket support. | Replace | Use Rust networking APIs and the same `reqwest` and `rustls` stack. |
| `klu_complex_sparse_dll.dll` | Complex sparse factor and solve functions. | Replace | Use `faer` and verify complex result parity. |
| `klu_sparse_dll.dll` | Real sparse factor and solve functions. | Replace | Use `faer` and verify ordering, singular-matrix, and result parity. |
| `Rockey4ND_X64.dll` | Rockey hardware-license interface. It exports `Rockey`. | Remove | TIARA will not reproduce a TINA license or hardware-lock check. No disassembly is required. |
| `rtl240.bpl` | Delphi runtime library, version 24.0. | Remove | Rust `std` and selected Rust crates replace the Delphi runtime. |
| `rtl260.bpl` | Delphi runtime library, version 26.0. | Remove | Rust `std` and selected Rust crates replace the Delphi runtime. |
| `sparkey.dll` | Software-license interface. It exports `SparKey`. | Remove | TIARA will not reproduce a TINA license check. No disassembly is required. |
| `sparse_dll.dll` | SPICE sparse-matrix interface. | Replace | Use a TIARA-owned adapter over `faer`. |
| `SpiceModels.dll` | It exports 17 BSIM3v3.2 and JFET setup, load, temperature, truncation, and convergence functions. | Further analysis | Define the device-model inputs, outputs, units, state, and error behavior before implementation. |
| `vcl260.bpl` | Delphi VCL controls and Windows UI integration. | Replace | Reuse the existing `iced` UI architecture. Use `windows` only for a proven platform gap. |
| `vclimg260.bpl` | Delphi VCL image and media support. | Replace | Use `iced` image support and [`image`](https://github.com/image-rs/image) for required codecs. `image` uses `MIT OR Apache-2.0`. |
| `VCRUNTIME140.dll` | Microsoft C++ runtime for native TINA libraries. | Remove | Pure Rust replacements do not need this runtime. |
| `VHDL_DLL2.DLL` | TINA VHDL Simulator 4.1. It exports 519 functions. | Further analysis | Its interface covers more than VHDL parsing. See [Further analysis](#further-analysis). |

The two KLU DLLs and `sparse_dll.dll` depend on the Delphi 24 and C++ 18 runtimes.
`VHDL_DLL2.DLL` depends on the Delphi 26, VCL 26, Indy 26, and C++ 20 runtimes.
These transitive relationships explain why both runtime generations are present.

## Windows runtime module inventory

The clean launch loaded these 94 Windows-provided modules:

`advapi32.dll`, `apphelp.dll`, `bcryptPrimitives.dll`, `cfgmgr32.dll`,
`clbcatq.dll`, `combase.dll`, `COMCTL32.dll`, `comdlg32.dll`, `coml2.dll`,
`CoreMessaging.dll`, `CoreUIComponents.dll`, `CRYPT32.dll`, `CRYPTBASE.DLL`,
`cscapi.dll`, `dataexchange.dll`, `DEVOBJ.dll`, `dhcpcsvc.DLL`, `DWMAPI.DLL`,
`dxcore.dll`, `edputil.dll`, `GDI32.dll`, `gdi32full.dll`, `GLU32.dll`,
`HHCtrl.OCX`, `hid.dll`, `iertutil.dll`, `IMAGEHLP.DLL`, `IMM32.DLL`,
`Iphlpapi.dll`, `kernel.appcore.dll`, `KERNEL32.DLL`, `KERNELBASE.dll`,
`mpr.dll`, `MSASN1.dll`, `Msctf.dll`, `Msftedit.DLL`, `msimg32.dll`,
`msls31.dll`, `msvcp_win.dll`, `msvcrt.dll`, `netapi32.dll`, `NETUTILS.DLL`,
`NetworkExplorer.dll`, `NSI.dll`, `ntdll.dll`, `ntmarta.dll`, `ole32.dll`,
`oleacc.dll`, `oleaut32.dll`, `oledlg.dll`, `opengl32.dll`, `profapi.dll`,
`PROPSYS.dll`, `psapi.dll`, `RICHED20.DLL`, `RPCRT4.dll`, `sechost.dll`,
`SECUR32.DLL`, `security.dll`, `SETUPAPI.DLL`, `shcore.dll`, `SHELL32.dll`,
`SHFolder.dll`, `shlwapi.dll`, `srvcli.dll`, `SspiCli.dll`, `sxs.dll`,
`textinputframework.dll`, `TextShaping.dll`, `twinapi.appcore.dll`,
`ucrtbase.dll`, `urlmon.dll`, `user32.dll`, `userenv.dll`, `USP10.dll`,
`uxtheme.dll`, `version.dll`, `virtdisk.dll`, `win32u.dll`,
`Windows.StateRepositoryPS.dll`, `Windows.Storage.dll`, `winhttp.dll`,
`wininet.dll`, `winmm.dll`, `winspool.drv`, `WINSTA.dll`, `WINTRUST.dll`,
`wintypes.dll`, `wkscli.dll`, `Wldp.dll`, `ws2_32.dll`, `wsock32.dll`, and
`wtsapi32.dll`.

Decision for each module: **wrap or replace**. These modules are the Windows, VCL, Indy, OpenGL, HTML Help, and native-library closure of the observed process. TIARA must not take a direct dependency on a module only because TINA loaded it. Use a portable Rust interface first. Use the `windows` crate for a required Windows-only function.

## Optional source-proven dependencies

| Dependency | Recovered evidence | Decision | Replacement and license |
| --- | --- | --- | --- |
| `7z.exe` | [`FUN_00b02f00`](../DecompiledSources/Tina16/functions/0000000000B02F00__FUN_00b02f00.c) starts it to extract a help file and reports an extraction error. | Replace | Use [`sevenz-rust2`](https://github.com/hasenbanck/sevenz-rust2) behind a TIARA archive interface. Apache-2.0. |
| `libeay32.dll` | [`FUN_00c998b0`](../DecompiledSources/Tina16/functions/0000000000C998B0__FUN_00c998b0.c) loads it dynamically. | Replace | Use `rustls` and RustCrypto components only for proven behavior. Do not retain OpenSSL 1.0 ABI calls. |
| `ssleay32.dll` or `libssl32.dll` | [`FUN_00c99940`](../DecompiledSources/Tina16/functions/0000000000C99940__FUN_00c99940.c) loads the first name and falls back to the second name. [`FUN_00c99a40`](../DecompiledSources/Tina16/functions/0000000000C99A40__FUN_00c99a40.c) resolves SSL, TLS, X.509, digest, cipher, and key functions. | Replace | Use `reqwest` with `rustls` for HTTP/TLS. Use focused RustCrypto crates if a non-TLS cryptographic operation is proven. |

The OpenSSL loader asks for obsolete SSLv2 and SSLv3 entry points as optional symbols. TIARA must not reproduce obsolete protocol support.

## Rust dependency decisions

### Current direct dependencies

`cargo metadata --locked` resolved these direct third-party packages on 2026-08-20:

| Package | Resolved version | License | Decision |
| --- | ---: | --- | --- |
| `csv` | 1.4.0 | Unlicense or MIT | Reuse for text table import and export. |
| `glob` | 0.3.4 | MIT or Apache-2.0 | Reuse for file discovery. |
| `iced` | 0.13.1 | MIT | Reuse as the UI replacement. Review an upgrade to 0.14 separately. |
| `iced_aw` | 0.12.2 | MIT | Reuse for the menu UI that TIARA already enables. |
| `rfd` | 0.17.2 | MIT | Reuse for native file dialogs. |
| `walkdir` | 2.5.0 | Unlicense or MIT | Reuse for recursive file discovery. |
| `xmltree` | 0.12.0 | MIT | Reuse for the current XML behavior. |

The locked Cargo resolution contains 427 non-workspace packages. No package has empty license metadata. Every SPDX expression has at least one permissive path, or it combines permissive licenses. The expressions include MIT, Apache-2.0, BSD-2-Clause, BSD-3-Clause, ISC, Zlib, BSL-1.0, CC0-1.0, Unicode-3.0, 0BSD, and Unlicense choices. Distribution must still include all notices that a selected license requires.

### Selected candidates

The following status was checked from crates.io metadata and the official project repository on 2026-08-20.

| Candidate | Checked release | Maintenance evidence | License decision | Intended use |
| --- | ---: | --- | --- | --- |
| [`iced`](https://github.com/iced-rs/iced) | 0.14.0 | The official repository has a current stable release. | MIT; compatible. | VCL and common UI replacement. |
| [`windows`](https://github.com/microsoft/windows-rs) | 0.62.2 | Microsoft maintains the official Rust projections for Windows APIs. | MIT or Apache-2.0; compatible. | Narrow Windows-only adapters. |
| [`faer`](https://codeberg.org/sarah-quinones/faer) | 0.24.4 | The current release was published on 2026-06-24. It has sparse matrix data structures and sparse LU. | MIT; compatible. | Real and complex sparse matrices and linear solves. |
| [`reqwest`](https://github.com/seanmonstar/reqwest) | 0.13.4 | The current release was published on 2026-05-25. | MIT or Apache-2.0; compatible. | HTTP client behavior. |
| [`rustls`](https://github.com/rustls/rustls) | 0.23.43 | The current release was published on 2026-07-29. The project documents supported versions and security maintenance. | Apache-2.0, ISC, or MIT; compatible. | TLS without the OpenSSL 1.0 DLL interface. |
| [`image`](https://github.com/image-rs/image) | 0.25.10 | The official project lists active maintainers and current format support. | MIT or Apache-2.0; compatible. | Image codecs that `iced` does not provide directly. |
| [`sevenz-rust2`](https://github.com/hasenbanck/sevenz-rust2) | 0.21.5 | The current release was published on 2026-08-16. | Apache-2.0; compatible. | In-process 7z extraction. |

Do not add a candidate until a TIARA feature needs it. This map is a selection record, not a request to increase the dependency closure.

### Evaluated but not selected

| Project | Reason |
| --- | --- |
| [`VHDL-LS/rust_hdl`](https://github.com/VHDL-LS/rust_hdl) | It is an active Rust VHDL language front end under MPL-2.0. It is not a VHDL simulator. Evaluate it only after TIARA defines its VHDL source-analysis boundary. |
| [`GHDL`](https://github.com/ghdl/ghdl) | It is a capable VHDL simulator, but its core and runtime have GPL obligations. Do not link or bundle it in the MIT TIARA application without a separate architecture and license decision. |
| [`spice-rs`](https://github.com/ferrite-systems/spice-rs) | The project calls itself experimental, has no release, and reports 199 of 226 validation circuits passing. It also uses an LGPL-2.1-or-later sparse dependency. Do not use it as the TIARA simulation foundation. |
| [`ngspice`](https://github.com/imr/ngspice) | It has a mature shared-library interface, but it is C code with a file-level mixed license history. Keep it as an external behavior reference. A future wrapper needs a separate distribution and license review. |

## Further analysis

### `VHDL_DLL2.DLL`

Further analysis is required because the name does not describe the full boundary. The DLL exports 519 functions. TINA delay-imports 227 entries. The imported interface covers these areas:

- VHDL compile, elaboration, and simulation control
- Verilog and VHDL keyword and source services
- digital node values, transactions, rollback, and time
- debugger state, breakpoints, watches, stack frames, and symbols
- MCU compile, register, RAM, breakpoint, and animation services
- VHDL-AMS and SystemC integration
- hardware terminal, PMBus, EEPROM, sensor, and package services

Before implementation, group the 227 imported entries by feature. Trace their callers and callback data. Record the input types, output types, ownership, state transitions, time units, error behavior, and thread behavior. The replacement decision can then be split into small original Rust services. Parsing and simulation must remain separate decisions.

### `SpiceModels.dll`

Further analysis is required because the DLL contains device physics and convergence behavior. Its 17 exports implement BSIM3v3.2 and JFET setup, load, matrix-load, AC-load, temperature, initial-condition, truncation, and convergence operations.

Before implementation, trace every load and resolved export call. Record the model parameter set, default values, units, matrix stamps, state-vector layout, temperature behavior, convergence limits, truncation rules, and error returns. Then implement the behavior from public device-model specifications and independent tests. Do not copy the DLL code or ABI.

## Final decisions

- Reuse the current permissive Rust workspace dependencies.
- Replace the Delphi, VCL, Indy, C++ runtime, sparse-solver, archive, image, and old OpenSSL dependencies with the selected Rust components or original Rust code.
- Wrap Windows only at proven platform boundaries.
- Remove TINA license-enforcement dependencies.
- Keep `VHDL_DLL2.DLL` and `SpiceModels.dll` as explicit further-analysis items.
- Do not adopt a GPL or unproven experimental simulation engine into the MIT application.
