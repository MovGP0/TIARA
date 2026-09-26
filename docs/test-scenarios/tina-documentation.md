# TINA documentation used for scenarios

Start at the official [documentation page](https://www.tina.com/document/).
Check the relevant manual page before writing an expected result. Keep manual
claims distinct from observed behavior and TIARA-specific design requirements.

## Sources inspected on 2026-09-22

### TINA Design Suite v16 user manual

The official page links the [2025 PDF](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf).
The downloaded file has SHA-256
`46E92AB3BF04548FE227F1E7F1B61F60657E21D55E8C587D393B9834C1EE5A75`.
Printed page numbers differ from PDF page positions. The page references below
were checked against the page text and, for the main editor passages, rendered
pages. Do not copy the manual or its images into committed fixtures.

| Section | Printed page | PDF page | Scenario use |
| --- | --- | --- | --- |
| 3.7 | Not visually checked | 60 | Escape cancellation |
| 4.1.1 | 50 | 61 | Context-menu cancellation and selected-component deletion |
| 4.3, toolbar | 56 | 67 | Selection and drag |
| 4.4 | 59-60 | 70-71 | Placement, grid and displayed values |
| 4.4.1 | 60-61 | 71-72 | Wire gestures and cancellation |

The manual does not supply TIARA menu coordinates, new artwork, history
granularity or host docking behavior. These need live evidence or explicit
TIARA requirements. A search of this manual did not establish the schematic
Undo/Redo contract; those scenarios cite the live comparison instead.

A second search on 2026-09-26 did not find the **Select Tina folder** dialog,
**Import TINA Libraries and Designs**, **Include Examples and Designs**, or
`Library Import.log`. The Select TINA Folder scenarios therefore use the
recovered resource and reviewed handler paths as their requirement basis. They
keep keyboard focus and live localized-message behavior as explicit test gaps.

### Interpreter manual linked from the v16 documentation page

The linked [Interpreter manual](https://designsoft.biz/home/distrib/en/tina9doc/TINA_Interpreter_Manual.pdf)
has a 2010 copyright and is not a v16-specific reference. Its calculation and
signal examples can inform future Interpreter scenarios, subject to a version
check. The inspected document did not establish the Numerical format dialog's
OK, Cancel or Set Default behavior. Those scenarios remain source-derived
drafts and need the installed Help or a live comparison. Do not cite this manual
as proof of their numeric defaults, validation order or partial commits.

## Next source selection

For each remaining window, select the applicable official user, PCB or
Interpreter manual and the installed Help topic. Record the title, edition,
section and page in the scenario. If no passage specifies a control, say so and
record the live experiment needed. A source link alone does not make a scenario
reviewed or executable.
