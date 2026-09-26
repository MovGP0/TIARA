# Agent Instructions

This project uses **bd** (beads) for issue tracking. Run `bd prime` for full workflow context.

> **Architecture in one line:** Issues live in a local Dolt database
> (`.beads/dolt/`); cross-machine sync uses `bd dolt push/pull` (a
> git-compatible protocol), stored under `refs/dolt/data` on your git
> remote — separate from `refs/heads/*` where your code lives.
> `.beads/issues.jsonl` is a passive export, not the wire protocol.
>
> See [sync-concepts](https://github.com/gastownhall/beads/blob/main/docs/core-concepts/sync-concepts.md)
> for the one-screen overview and anti-patterns (don't treat JSONL as the
> source of truth; don't `bd import` during normal operation; don't
> reach for third-party Dolt hosting before trying the default).

## Quick Reference

```bash
bd ready              # Find available work
bd show <id>          # View issue details
bd update <id> --claim  # Claim work atomically
bd close <id>         # Complete work
bd dolt push          # Push beads data to remote
```

## Non-Interactive Shell Commands

**ALWAYS use non-interactive flags** with file operations to avoid hanging on confirmation prompts.

Shell commands like `cp`, `mv`, and `rm` may be aliased to include `-i` (interactive) mode on some systems, causing the agent to hang indefinitely waiting for y/n input.

**Use these forms instead:**
```bash
# Force overwrite without prompting
cp -f source dest           # NOT: cp source dest
mv -f source dest           # NOT: mv source dest
rm -f file                  # NOT: rm file

# For recursive operations
rm -rf directory            # NOT: rm -r directory
cp -rf source dest          # NOT: cp -r source dest
```

**Other commands that may prompt:**
- `scp` - use `-o BatchMode=yes` for non-interactive
- `ssh` - use `-o BatchMode=yes` to fail instead of prompting
- `apt-get` - use `-y` flag
- `brew` - use `HOMEBREW_NO_AUTO_UPDATE=1` env var

## Project Dependencies

TIARA is a Cargo workspace: the root package `tiara` is the application, and
it is built from two library crates.

```
tiara            the binary; wires tiara-ui to a window
  tiara-ui       every window, the menu, the schematic editor   (iced)
    tiara-core   file formats, the document, the library reader (no UI)
```

`tiara-core` knows nothing about the user interface and must stay that way:
it is where a format is read and a document is changed, so it can be tested
without a screen. Everything that draws is in `tiara-ui`.

Workspace-wide: **edition 2024, rust-version 1.85, MIT**. Versions are
pinned once in the root `Cargo.toml` under `[workspace.dependencies]` and
referred to as `foo.workspace = true`; add a version in one place only.

### Crates

| Crate | Used by | What for |
| --- | --- | --- |
| `iced` 0.13.1 | tiara-ui | The whole interface. Features `image`, `svg`, `tokio`. |
| `iced_aw` 0.12.2 | tiara-ui | `MenuBar` only, and only in `shared/window_shell.rs`. The schematic editor's menu is the port's own (`schematic_editor/menu.rs`) because it needs greying, accelerators and keyboard navigation that the widget does not give. |
| `rfd` 0.17.2 | tiara-ui | Native open/save dialogs. |
| `csv` 1.4.0 | tiara-ui | The test-bench tables. |
| `walkdir` 2.5.0 | tiara-ui | Walking a model folder. |
| `xmltree` 0.12.0 | tiara-ui | The XML the converters and the filter designer read. |
| `serde` + `serde_json` 1.0 | both | `.tsm`, preferences, and structured interchange. Native `.tsc` files are binary OBSS circuit containers, not JSON. |
| `glob` 0.3.3 | tiara-core | Finding circuit files. |
| `num-traits` 0.2.19 | tiara-core | Sample arithmetic in the WAV reader. |

### Sub-repositories

`external/RSpice` — [JaimeHW/RSpice](https://github.com/JaimeHW/RSpice), a
circuit simulator in Rust, added as a git submodule for the analysis
commands (`TIARA-hc4xzm1`). Clone it with the repository:

```bash
git clone --recurse-submodules <repo>
git submodule update --init --recursive   # if already cloned
```

**It is not a normal dependency, and it must not become one.** Its licence
is the RSpice Personal Use License: free for personal, educational and open
academic use, but it forbids redistribution -- "You may not redistribute,
re-host, sublicense, mirror, or otherwise make the source code or compiled
binaries available to third parties" -- and forbids integrating it into
commercial products. TIARA is MIT and is meant to be distributable, so a
binary with RSpice linked into it could not be shipped.

So it is wired in the same shape as everything else proprietary here: the
port defines what it needs, and the proprietary thing is found at build or
run time rather than embedded. `tiara-core` writes a SPICE netlist and
declares the trait a simulation backend implements. **Do not add
`rspice-core` to `tiara-core` or `tiara-ui`.**

RSpice offers three ways in, and which one is chosen decides whether a
build can be shipped:

| Route | Crate | Shipping |
| --- | --- | --- |
| Rust API | `rspice-core` — `Netlist::parse`, `Engine` | Links it in, so the binary carries it. Not distributable. |
| Separate process | `rspice-cli`, `rspice-automation-protocol` (a length-prefixed JSON transport) | TIARA writes a netlist and runs an RSpice the user installed. Nothing of RSpice is in TIARA's binary. |
| Python | `rspice-python` (`import rspice`) | For driving RSpice from Python, not for driving it from Rust. |

The separate-process route is the one that keeps TIARA distributable, and
it is the one that is built: `crates/tiara-core/src/simulator.rs` writes a
netlist, runs the program, and reads the table back.

Point it at an engine with **`TIARA_SPICE`** — the program itself or the
folder holding it. Without one it is also looked for on the path, beside the
application, and in `external/RSpice/target/release/`. When none is found
every command that has to be solved is greyed, the same way the measurement
card and the installed help already work; `Analysis > ERC...` stays offered,
because a rules check solves nothing.

```bash
cargo build --release --manifest-path external/RSpice/Cargo.toml -p rspice-cli
export TIARA_SPICE=external/RSpice/target/release
```

### PyO3

[PyO3](https://pyo3.rs/v0.29.2/) is **not** currently a dependency and is
not needed to use RSpice. `rspice-python` is itself a PyO3 extension module
so that Python can drive RSpice; a Rust caller uses `rspice-core` or the CLI
and never touches it.

TIARA would want PyO3 only to gain Python scripting **of its own** — an
interpreter inside the application, which the original has in its macro and
interpreter commands. If that is taken up, it belongs in a crate of its own
rather than in `tiara-core`, which must stay free of a Python runtime.

Note the name: only `rspice` is about circuits. `rsspice` and `rust-spice`
are NASA's SPICE Toolkit for space geometry -- ephemerides and eclipses --
and are a different thing entirely.

### How a circuit gets solved

The port solves circuits itself and hands anything beyond its own solvers to
an external simulator. Both paths end in the same `simulator::Table`, so
whatever draws one draws the other.

```
schematic_document   a sheet: parts, wires, and each part's pins
  netlist            what is joined to what, per pin
    spice_netlist    the circuit as SPICE reads it, plus a directive
      dc_solver      .OP, .TRAN, .DC - and diodes and transistors by search
      ac_solver      .AC, in complex admittances
      symbolic       the transfer function in s, and its poles and zeros
      algebra        the same with the component names left standing
      optimizer      one part changed until a node reaches a goal
      simulator      an external engine, for anything the above refuse
  digital_solver     gates settled by logic rather than voltages
  rules_check        the recovered ERC, fed from the netlist
    run_results      a run's table turned into curves to draw
```

Two rules hold throughout and are worth keeping:

- **Anything a solver cannot do is refused by name** — `D1 is beyond the
  built-in solver`, `a transistor`, `TEMP` — and falls through to the
  external simulator. A wrong answer is worse than no answer.
- **Tests work the expected value out rather than recording it.** A divider
  is checked against `1000 * 2.5 / (10 - 2.5)`, a transistor against
  `FORWARD_GAIN` itself, a diode by substituting the answer back into the
  diode equation. Numbers copied from a first run only prove the code still
  does what it did.

### What is read from an installation and never committed

The original's data files are proprietary and stay outside the repository
and outside the crates. The application reads them from the install path at
run time; tests that need them look for `TIARA_TINA_HOME` and skip quietly
when it is unset, so a clean checkout still passes.

```bash
export TIARA_TINA_HOME="C:\Program Files\DesignSoft\Tina 16 - Demo"
cargo test --workspace     # now the library-backed tests run too
```

| File | Read by | For |
| --- | --- | --- |
| every `.DDB` in the install folder (eleven here) | `ddb_device.rs`, `obss.rs`, `symbol_library.rs` | Device symbols and their pins. Find them by scanning for the extension — a hand-written list of them was wrong for a while. **Never commit or embed these.** |
| `Spicelib/*.tld` | `device_catalogue.rs` | The part catalogue. |
| `compregy.tcr` | `component_registry.rs` | Component bar entries. Its icons use TIARA SVGs, not installation bitmaps. |
| `COMPREGE.BMP` | `icon_strip.rs` | Analysis and format tests only; never a runtime UI icon. |
| `TINA*.CHM` | `schematic_editor/help.rs` | Help, which is opened rather than replaced. |
| `Spicelib/*.lib` | `model_library.rs` | SPICE models. **408 of the 674 are encrypted** (`<Encrypted Library>`); those are refused by name, never decrypted. |

Two more variables, both optional:

| Variable | What it points at |
| --- | --- |
| `TIARA_SPICE` | An external simulator, or the folder holding one. Without it, only the built-in solvers run. |
| `TIARA_GLYPHS` | Optional parent folder of editable `commands/*.svg` and `components/<registry id>.svg`. Valid overrides replace packaged TIARA SVGs individually after restart. Unknown icons show text. Never use bitmap icons or SVG wrappers around bitmaps. |

The same rule covers `DecompiledSources/`: Ghidra output is evidence, not
source, and nothing under it is compiled into a crate.

### Quality gates

All four must pass after every change:

```bash
cargo fmt --all -- --check
cargo check --workspace
cargo test --workspace
cargo clippy --workspace --all-targets -- -D warnings
```

Clippy runs with `pedantic`, `nursery`, `unwrap_used` and `expect_used`
enabled workspace-wide, denied as errors.

<!-- BEGIN BEADS INTEGRATION v:1 profile:minimal hash:46cd31e7 -->
## Beads Issue Tracker

This project uses **bd (beads)** for issue tracking. Run `bd prime` to see full workflow context and commands.

### Quick Reference

```bash
bd ready              # Find available work
bd show <id>          # View issue details
bd update <id> --claim  # Claim work
bd close <id>         # Complete work
```

### Rules

- Use `bd` for ALL task tracking — do NOT use TodoWrite, TaskCreate, or markdown TODO lists
- Run `bd prime` for detailed command reference and session close protocol
- Use `bd remember` for persistent knowledge — do NOT use MEMORY.md files

**Architecture in one line:** issues live in a local Dolt DB; sync uses `refs/dolt/data` on your git remote; `.beads/issues.jsonl` is a passive export. See https://github.com/gastownhall/beads/blob/main/docs/core-concepts/sync-concepts.md for details and anti-patterns.

## Agent Context Profiles

The managed Beads block is task-tracking guidance, not permission to override repository, user, or orchestrator instructions.

- **Conservative (default)**: Use `bd` for task tracking. Do not run git commits, git pushes, or Dolt remote sync unless explicitly asked. At handoff, report changed files, validation, and suggested next commands.
- **Minimal**: Keep tool instruction files as pointers to `bd prime`; use the same conservative git policy unless active instructions say otherwise.
- **Team-maintainer**: Only when the repository explicitly opts in, agents may close beads, run quality gates, commit, and push as part of session close. A current "do not commit" or "do not push" instruction still wins.

## Session Completion

This protocol applies when ending a Beads implementation workflow. It is subordinate to explicit user, repository, and orchestrator instructions.

1. **File issues for remaining work** - Create beads for anything that needs follow-up
2. **Run quality gates** (if code changed) - Tests, linters, builds
3. **Update issue status** - Close finished work, update in-progress items
4. **Handle git/sync by active profile**:
   ```bash
   # Conservative/minimal/default: report status and proposed commands; wait for approval.
   git status

   # Team-maintainer opt-in only, unless current instructions forbid it:
   git pull --rebase
   bd dolt push
   git push
   git status
   ```
5. **Hand off** - Summarize changes, validation, issue status, and any blocked sync/commit/push step

**Critical rules:**
- Explicit user or orchestrator instructions override this Beads block.
- Do not commit or push without clear authority from the active profile or the current user request.
- If a required sync or push is blocked, stop and report the exact command and error.
<!-- END BEADS INTEGRATION -->


<!-- BEGIN BEADS CODEX SETUP: generated by bd setup codex -->
## Beads Issue Tracker

Use Beads (`bd`) for durable task tracking in repositories that include it. Use the `beads` skill at `.agents/skills/beads/SKILL.md` (project install) or `~/.agents/skills/beads/SKILL.md` (global install) for Beads workflow guidance, then use the `bd` CLI for issue operations.

### Quick Reference

```bash
bd ready                # Find available work
bd show <id>            # View issue details
bd update <id> --claim  # Claim work
bd close <id>           # Complete work
bd prime                # Refresh Beads context
```

### Rules

- Use `bd` for all task tracking; do not create markdown TODO lists.
- Run `bd prime` when Beads context is missing or stale. Codex 0.129.0+ can load Beads context automatically through native hooks; use `/hooks` to inspect or toggle them.
- Keep persistent project memory in Beads via `bd remember`; do not create ad hoc memory files.

**Architecture in one line:** issues live in a local Dolt DB; sync uses `refs/dolt/data` on your git remote; `.beads/issues.jsonl` is a passive export. See https://github.com/gastownhall/beads/blob/main/docs/core-concepts/sync-concepts.md for details and anti-patterns.
<!-- END BEADS CODEX SETUP -->

## Knowledge Graph Construction

The Understand Anything graph is generated. The primary checked-in graph is
`.understand-anything/knowledge-graph.duckdb`. Do not edit the database or its
generated JSON export by hand. Use the repository scripts for database writes.
The database path is tracked by Git LFS through `.gitattributes`.

- Run `pwsh.exe -NoProfile -NoLogo -File analysis/Export-TinaUiEvidence.ps1`
  from the repository root before graph generation. The script verifies the
  SHA-256 hash of the ignored rebuilt `tina.exe` runtime image. It then clones
  the pinned `undelphi` v0.3.2 tag into `.temp`, applies
  `analysis/undelphi/undelphi-v0.3.2-tiara-rebuilt-pe.patch`, runs
  `analysis/undelphi/TiaraUiEvidence.rs`, and removes the temporary clone.
- The TIARA patch supplies the reconstructed PE section map that the rebuilt
  image no longer contains. `undelphi` then parses embedded Delphi `TPF0` form
  streams and uses Delphi RTTI and VMT method tables to resolve published event
  handlers. Resolve child-control events against the owning form class because
  Delphi stores these handlers on the form, not on `TButton` or another child
  class. The extractor rejects malformed form candidates. It records image
  indexes, image-list references, and embedded glyph or picture byte counts,
  but it does not store embedded image bytes in the evidence JSON.
- The UI extractor writes
  `DecompiledSources/Tina16/resources/dfm/ui-evidence.json`. This evidence file
  contains form and component trees, component classes, selected layout and UI
  properties, captions, hints, text, list items, actions, image metadata, event
  property names, handler names, and resolved code addresses where available.
- Run `pwsh.exe -NoProfile -NoLogo -File analysis/Export-TinaGlyphs.ps1`
  to extract embedded `Glyph.Data`, `Picture.Data`, and `Image.Data` resources.
  The script writes raster files to `glyph/`, converts Delphi BMP resources to
  PNG, preserves native icon or vector formats, and writes `glyph/manifest.json`.
  The manifest maps each file to its form, component, property, dimensions,
  source offset, byte counts, and SHA-256 hash. Use SVG only when the source is
  vector data. Do not trace a raster bitmap into an invented vector path.
- Run `python analysis/Build-TinaFunctionGraph.py` from the repository root.
- The script reads the recovered Ghidra source and resource files in
  `DecompiledSources/`.
- The script writes the intermediate
  `.understand-anything/knowledge-graph.json`.
- Run
  `pwsh.exe -NoProfile -NoLogo -File analysis/Build-TinaGraphDatabase.ps1 -RemoveGraphJson`
  to import the intermediate JSON into DuckDB and remove the large JSON file
  after a successful import.
- Run
  `pwsh.exe -NoProfile -NoLogo -File analysis/Export-TinaGraphJson.ps1`
  before starting the Understand Anything dashboard. The dashboard currently
  fetches and validates the complete `knowledge-graph.json`; it cannot query
  DuckDB directly. The JSON export is ignored by Git and can be removed after
  the dashboard stops.
- `graph.schema` defines the dashboard-compatible JSON format. It uses the
  top-level fields `version`, `project`, `nodes`, `edges`, `layers`, and the
  singular optional field `tour`.
- Each function node contains its recovered function name and its relative
  source-file path.
- Function call edges are directional. They show the caller and the callee.
- Each Delphi form and child component is a `resource` node. `contains` edges
  preserve the original component tree. Component metadata preserves captions,
  hints, control types, original properties, and the DFM creation mechanism.
- A `triggers` edge connects each UI event to its resolved function. If RTTI
  does not provide a code address in the recovered function range, the edge
  connects to an `unresolved-event-handler` concept node. Do not invent a
  function address for these handlers.
- Resolved event-handler function nodes list their form, component, event,
  handler, caption, hint, text, items, action, image, button-kind, and modal
  bindings. Tags identify click, mouse, and form lifecycle handlers where
  applicable.
- OnClick call-tree descriptions use one independent analysis pass for each
  resolved handler. Start at the handler, follow application-relevant outgoing
  calls, and inspect the recovered source at every proposed node. Add a role
  only when call-site data flow and UI, resource, string, API, or repeated-caller
  evidence establish a specific responsibility. Do not describe a function from
  its symbol, proximity, or a generic call-graph position. Store accepted roles
  in `ONCLICK_CALL_TREE_FUNCTIONS` in `Build-TinaFunctionGraph.py`.
- For resource-first analysis, query `ui_event_resource_evidence`,
  `ui_event_glyphs`, and `ui_event_nearby_labels` together. Inspect the
  extracted image when it exists. A glyph can confirm direction, save, open,
  stop, add, remove, or similar intent, but it cannot prove the target object
  or implementation by itself. Confirm that meaning in the handler body,
  call-tree data flow, a shared state consumer, or parallel controls.
- A handler can communicate through a field instead of a direct call. Follow
  proven readers of that field when they explain the control effect. Record the
  field by offset when its Delphi name is unknown. If the handler is one `RET`
  instruction, document it as a no-op only after the recovered bytes and call
  graph agree.
- Prioritize event analysis by evidence quality, not by a fixed control-class
  list. Direct evidence includes captions, hints, text, list items, actions,
  image metadata, built-in button kinds, modal results, selection state, and
  default or cancel state. `ui_event_nearby_labels` supplies up to five labels
  under the same parent in coordinate-distance order. Treat these labels as
  candidates. Proximity alone does not prove that a label describes a control.
- A button click is an `OnClick` trigger whose source node has the `ui-button`
  tag. This covers `TButton`, `TBitBtn`, `TSpeedButton`, and `TToolButton` and
  remains a useful convenience subset. Do not exclude check boxes, radio
  buttons, labels, lists, editors, or custom controls when their resources give
  stronger evidence.
- Layer membership is exclusive. Do not place one node in multiple layers.
- The `UI` layer contains application functions with direct UI evidence. This
  includes resolved DFM event handlers, application dialog construction, and
  caption or hint localization.
- The `Delphi VCL` layer contains recovered Delphi RTL and VCL infrastructure.
  This includes the known runtime hubs, native-control creation parameter
  builders, the common VCL parameter wrapper, and direct callers in those
  creation paths. A VCL creation function stays in this layer even though its
  metadata also identifies its UI role.
- The `tina.exe` layer contains all remaining functions, form and component
  resources, and unresolved-handler concept nodes.
- The generator derives these layers from recovered node evidence. Do not
  maintain a separate manual list in the generated graph.
- Complexity uses the count of distinct outgoing calls to other functions.
  Self-recursive calls do not increase this count. The generator calculates
  the 33.3 and 66.6 percentiles and assigns `simple`, `moderate`, or `complex`.
  Equal values stay in the same group, so the three groups can have different
  sizes.
- Imported Windows functions are separate nodes. Their metadata includes the
  DLL, API name, category, and observed behavior. Edges to these nodes use the
  `windows-api` call type.
- Other imported DLL functions are separate nodes. Edges to these nodes use
  the `external-dll` call type.
- Delphi and VCL code can prepare native window-class parameters without a
  direct recovered `CreateWindow` or `CreateWindowEx` symbol. Preserve these
  evidence-based paths. Known examples include `BUTTON`, `EDIT`, `COMBOBOX`,
  `LISTBOX`, `STATIC`, common-control classes, and Rich Edit classes.
- Do not describe an indirect Delphi or VCL path as a direct Win32 call unless
  the recovered code gives direct evidence.
- Preserve the recovered roles for the high-connectivity Delphi runtime
  functions `FUN_00414480`, `FUN_00414560`, `FUN_00410f20`, `FUN_00413520`,
  and `FUN_00414ad0`. They implement UnicodeString lifetime operations, nil-safe
  object destruction, and thread-local exception cleanup. They are runtime
  infrastructure hubs, not application features.

## UI Control Click Articles

- Run
  `pwsh.exe -NoProfile -NoLogo -File analysis/Bootstrap-TinaControlDocs.ps1`
  to create stable article paths under `docs/ui-controls/`. The bootstrap reads
  every `OnClick` row from DuckDB and creates one article per control, one form
  index, the root index, and `manifest.json`.
- The bootstrap only supplies recovered resource fields, graph identities,
  direct calls, source links, glyph links, nearby label candidates, and an
  initial Mermaid click-flow diagram. It does not claim that it knows the
  control's behavior. New articles have the status `Pending individual source
  review`.
- The bootstrap does not overwrite an existing article. This protects manual
  agent analysis. Use `-Force` only when all reviewed article changes are known
  to be disposable.
- Run
  `pwsh.exe -NoProfile -NoLogo -File analysis/Create-TinaControlDocumentationBeads.ps1`
  after bootstrapping. The script creates one child of `TIARA-diz.6.7` for each
  manifest row. It is resumable and identifies existing children by a stable
  external reference. `docs/ui-controls/beads.json` maps article paths to Bead
  IDs and status values.
- Assign one control article to one analysis agent. The agent must claim the
  matching Bead, use the Understand Explain graph neighborhood, read the
  recovered handler and relevant callees, and inspect UI resource and glyph
  evidence. Controls that share a Delphi handler still need separate articles
  because the handler can branch on `Sender`, control state, or form fields.
- When an agent establishes a function's responsibility, store the annotation
  in DuckDB table `function_annotations`. Use the Bead ID and control path as
  `bead_id` and `control_id`. Do not add a generic description merely because a
  function is in the call tree.
- Use `analysis/Import-TinaFunctionAnnotations.ps1` for annotation writes. The
  input is one temporary JSON object with `bead`, `control`, and a non-empty
  `functions` array. Put the input under `.temp/`, import it, and remove it. The
  accepted function fields are `address`, `recoveredRole`,
  `likelyDelphiName`, `framework`, `apiCategory`, `uiRole`, `behavior`,
  `evidence`, and `tags`.
- The importer replaces all rows for each input source file in one transaction.
  It combines no field silently: equal scalar values can repeat across sources,
  tags are combined by the graph loader, and conflicting scalar values stop the
  import. Run annotation imports serially. Do not run an import while another
  agent or graph rebuild writes the database.
- The graph generator reads annotations from DuckDB in `source_file` and
  address order. The database rebuild copies the annotation table into the new
  graph database and checks its row, source, and address counts before it
  replaces the tracked database.
- Replace the pending text only when the source and call path support a
  specific explanation. Describe inputs, decisions, state changes, outputs,
  error behavior, and no-op behavior where applicable. Keep unknown behavior
  explicit. Do not turn a caption, hint, glyph, or nearby label into an
  unsupported implementation claim.
- Each reviewed article must contain a Mermaid `flowchart` that matches the
  proven click path. Use fixed semantic node IDs and quoted labels. Keep the
  diagram small enough to show the control, handler, important decisions, and
  application-relevant callees.
- Close the control Bead only after the pending status is removed, the article
  is evidence-backed, local links exist, and Mermaid fences are balanced. If
  the handler address or responsibility cannot be recovered, record the exact
  gap in the Bead and leave it open.

After generation, validate the graph against `graph.schema` and the Understand
Anything core validator. The function-only reference contained 89,226 nodes and
229,190 call edges. Form, control, handler, containment, and event nodes and
edges increase the total. These counts can change when the recovered sources
change.

## Knowledge Graph DuckDB Schema

`analysis/duckdb/ImportKnowledgeGraph.sql` defines the database. The import
uses DuckDB native columns and nested types so repeated graph values compress
well. Array order is stored explicitly to make the JSON export deterministic.

- `graph_metadata` has one row. It stores `version`, `project`, and `analysis`.
- `storage_metadata` has one row. It stores `schema_version`, the source JSON
  SHA-256 value, source byte count, and import time.
- `function_annotations` stores source-file ownership, Bead and control IDs,
  function addresses, recovered scalar fields, and tag lists. Multiple sources
  can own the same address when their scalar fields agree.
- `rust_ui_traceability` maps validated UI screenshots and recovered handlers
  to Rust modules and symbols.
- `rust_port_mappings` maps each verified recovered Ghidra-C function source
  file to its Rust source file and optional Rust symbol. Use
  `analysis/Import-TinaRustPortMappings.ps1` with a temporary JSON source. Run
  mapping imports serially. The importer verifies both files, the graph address
  and source path, the deterministic function Bead ID, and the Rust trace
  comment before it writes the mapping.
- `nodes` has one row for each graph node. `ordinal` preserves JSON order. The
  other columns are the union of graph node fields, including `id`, `name`,
  `type`, `filePath`, `summary`, `tags`, `complexity`, UI evidence, Delphi
  evidence, and external API evidence.
- `edges` has one row for each graph edge. `ordinal` preserves JSON order. Its
  columns include `source`, `target`, `type`, `direction`, `weight`, call
  metadata, and UI event metadata.
- `layers` stores layer order, ID, name, and description.
- `layer_nodes` stores ordered many-to-many layer membership with `layer_id`,
  `node_ordinal`, and `node_id`. TIARA currently assigns each node to one
  layer.
- `tour_steps` stores ordered guided-tour JSON objects. It is empty until a
  tour is defined.
- `glyph_resources` stores the extracted-image manifest. It includes the file,
  format, form, component, property, dimensions, byte counts, offset, and hash.
- `graph_statistics` reports node, edge, layer, and tour-step counts.
- `function_annotation_statistics` reports annotation row, source, and distinct
  address counts.
- `node_layers` joins node IDs to layer IDs and names.
- `function_calls` contains the `calls` edge subset.
- `ui_events` contains the `triggers` edge subset with event and handler names.
- `ui_event_resource_evidence` joins every event edge to its control and handler
  nodes. It exposes text, list, action, image, modal, state, handler-address,
  resolution, and evidence-classification columns.
- `ui_event_nearby_labels` ranks up to five non-empty label candidates that
  share the event source's form and parent. `coordinate_distance` is the
  Manhattan distance between DFM `Left` and `Top` values.
- `ui_event_glyphs` joins UI event sources to extracted glyph resources and
  their resolved handler addresses.
- `button_clicks` is the `OnClick` and `ui-button` subset of
  `ui_event_resource_evidence`.
- `knowledge_graph_document` reconstructs the complete dashboard-compatible
  JSON document. `Export-TinaGraphJson.ps1` reads this view.

Use read-only queries for investigation. For example:

```powershell
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT * FROM graph_statistics;"
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT layer_name, count(*) FROM node_layers GROUP BY layer_name;"
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT source, target FROM function_calls WHERE source = 'function:010a5240';"
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT control_class, count(*), count(*) FILTER (WHERE hint <> '') FROM button_clicks GROUP BY control_class;"
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT control_class, count(*), count(*) FILTER (WHERE has_direct_resource_evidence) FROM ui_event_resource_evidence GROUP BY control_class;"
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT * FROM ui_event_nearby_labels WHERE control_node_id = 'resource:dfm:example.control' ORDER BY candidate_rank;"
duckdb .understand-anything/knowledge-graph.duckdb -readonly -c "SELECT handler_address, component_path, file_name FROM ui_event_glyphs WHERE lower(event_name) = 'onclick';"
```
