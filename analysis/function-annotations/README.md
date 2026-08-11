# Function annotation fragments

Control-document agents put one JSON fragment in this directory for each Bead.
Use the Bead ID as the file name, for example
`TIARA-diz.6.7.28.json`.

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

Fragments are loaded in file-name order. Tags are combined. Two fragments can
repeat the same field only when they use the same value. The graph build stops
on conflicting descriptions so the orchestrator can resolve them before the
DuckDB rebuild.
