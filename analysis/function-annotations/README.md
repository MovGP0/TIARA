# Function annotations

Function annotations are stored in the tracked DuckDB database at
`.understand-anything/knowledge-graph.duckdb`. Do not add tracked JSON fragments
to this directory.

To add or replace one Bead's annotations, create a temporary JSON file under
`.temp/`. Use the Bead ID as the file name, for example
`.temp/function-annotations/TIARA-diz.6.7.28.json`.

```json
{
  "bead": "TIARA-diz.6.7.28",
  "control": "ExampleForm.ExampleButton",
  "functions": [
    {
      "address": "01234567",
      "recoveredRole": "Specific application responsibility",
      "likelyDelphiName": "TExampleForm.ExampleButtonClick",
      "apiCategory": "Application UI",
      "uiRole": "ui-example-command",
      "behavior": "Explains inputs, decisions, state changes, and outputs.",
      "evidence": "Names the source statements, resource evidence, call-site data flow, and relevant API calls.",
      "tags": [
        "application-ui",
        "ui-event-handler",
        "click-handler"
      ]
    }
  ]
}
```

Only add a function when its responsibility is clear from recovered source and
context. Do not add generic call-graph descriptions. Omit fields that the
evidence does not establish. The graph generator accepts `recoveredRole`,
`likelyDelphiName`, `framework`, `apiCategory`, `uiRole`, `behavior`,
`evidence`, and `tags`.

Import the temporary file from the repository root:

```powershell
pwsh.exe -NoProfile -NoLogo -File analysis/Import-TinaFunctionAnnotations.ps1 `
  -SourcePath .temp/function-annotations/TIARA-diz.6.7.28.json
```

The importer replaces the rows owned by that source file in one transaction.
It rejects duplicate source addresses and conflicting scalar fields across
sources. The graph loader combines distinct tags. Run imports serially, and do
not import while a graph rebuild writes the database. Remove the temporary file
after a successful import.
