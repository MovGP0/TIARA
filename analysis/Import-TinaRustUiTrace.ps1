[CmdletBinding()]
param(
    [Parameter(Mandatory)]
    [string]$SourcePath,
    [string]$DatabasePath = '.understand-anything/knowledge-graph.duckdb'
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

function Resolve-ProjectPath
{
    param(
        [Parameter(Mandatory)]
        [string]$Path,
        [Parameter(Mandatory)]
        [string]$ProjectRoot
    )

    if ([System.IO.Path]::IsPathRooted($Path))
    {
        return [System.IO.Path]::GetFullPath($Path)
    }

    return [System.IO.Path]::GetFullPath(
        [System.IO.Path]::Combine($ProjectRoot, $Path)
    )
}

function Assert-ProjectPath
{
    param(
        [Parameter(Mandatory)]
        [string]$Path,
        [Parameter(Mandatory)]
        [string]$ProjectRoot
    )

    $prefix = $ProjectRoot + [System.IO.Path]::DirectorySeparatorChar
    if (-not $Path.StartsWith($prefix, [System.StringComparison]::OrdinalIgnoreCase))
    {
        throw "The path must stay inside the project: $Path"
    }
}

$projectRoot = [System.IO.Path]::GetFullPath(
    [System.IO.Path]::Combine($PSScriptRoot, '..')
)
$resolvedSourcePath = Resolve-ProjectPath -Path $SourcePath -ProjectRoot $projectRoot
$resolvedDatabasePath = Resolve-ProjectPath -Path $DatabasePath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedSourcePath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedDatabasePath -ProjectRoot $projectRoot

if (-not [System.IO.File]::Exists($resolvedSourcePath))
{
    throw "The Rust UI trace source does not exist: $resolvedSourcePath"
}
if (-not [System.IO.File]::Exists($resolvedDatabasePath))
{
    throw "The DuckDB database does not exist: $resolvedDatabasePath"
}

$document = Get-Content -Raw -LiteralPath $resolvedSourcePath | ConvertFrom-Json
if ($null -eq $document.records -or $document.records.Count -eq 0)
{
    throw 'The Rust UI trace source contains no records.'
}

foreach ($record in $document.records)
{
    foreach ($relativePath in @($record.screenshotPath, $record.rustModulePath))
    {
        $resolvedArtifactPath = Resolve-ProjectPath `
            -Path $relativePath `
            -ProjectRoot $projectRoot
        Assert-ProjectPath -Path $resolvedArtifactPath -ProjectRoot $projectRoot
        if (-not [System.IO.File]::Exists($resolvedArtifactPath))
        {
            throw "A traced artifact does not exist: $relativePath"
        }
    }

    if ($null -ne $record.ghidraSourcePath -and $record.ghidraSourcePath -ne '')
    {
        $resolvedGhidraPath = Resolve-ProjectPath `
            -Path $record.ghidraSourcePath `
            -ProjectRoot $projectRoot
        Assert-ProjectPath -Path $resolvedGhidraPath -ProjectRoot $projectRoot
        if (-not [System.IO.File]::Exists($resolvedGhidraPath))
        {
            throw "A traced Ghidra source does not exist: $($record.ghidraSourcePath)"
        }
    }
}

$duckDbCommand = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop
$duckDbSourcePath = $resolvedSourcePath.Replace('\', '/').Replace("'", "''")

$importSql = @"
BEGIN TRANSACTION;

CREATE TABLE IF NOT EXISTS rust_ui_traceability (
  source_file VARCHAR NOT NULL,
  trace_id VARCHAR NOT NULL,
  bead_id VARCHAR NOT NULL,
  screenshot_path VARCHAR NOT NULL,
  form_resource VARCHAR NOT NULL,
  component_path VARCHAR NOT NULL,
  handler_address VARCHAR,
  ghidra_source_path VARCHAR,
  rust_crate VARCHAR NOT NULL,
  rust_module_path VARCHAR NOT NULL,
  rust_symbol VARCHAR NOT NULL,
  implementation_scope VARCHAR NOT NULL,
  notes VARCHAR,
  PRIMARY KEY (source_file, trace_id)
);

CREATE OR REPLACE TEMP TABLE incoming_rust_ui_trace AS
SELECT
  parse_filename(document.filename) AS source_file,
  record.traceId AS trace_id,
  document.bead AS bead_id,
  record.screenshotPath AS screenshot_path,
  record.formResource AS form_resource,
  record.componentPath AS component_path,
  nullif(lower(regexp_replace(record.handlerAddress, '^0x', '', 'i')), '')
    AS handler_address,
  nullif(record.ghidraSourcePath, '') AS ghidra_source_path,
  record.rustCrate AS rust_crate,
  record.rustModulePath AS rust_module_path,
  record.rustSymbol AS rust_symbol,
  record.implementationScope AS implementation_scope,
  record.notes AS notes
FROM read_json_auto(
  '$duckDbSourcePath',
  format = 'unstructured',
  filename = true
) AS document,
UNNEST(document.records) AS item(record);

SELECT CASE
  WHEN count(*) = 0 THEN error('The Rust UI trace import contains no rows.')
  ELSE count(*)
END
FROM incoming_rust_ui_trace;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust UI trace row has an invalid required value.')
  ELSE count(*)
END
FROM incoming_rust_ui_trace
WHERE source_file IS NULL OR trim(source_file) = ''
  OR trace_id IS NULL OR trim(trace_id) = ''
  OR bead_id IS NULL OR trim(bead_id) = ''
  OR screenshot_path IS NULL OR trim(screenshot_path) = ''
  OR form_resource IS NULL OR trim(form_resource) = ''
  OR component_path IS NULL OR trim(component_path) = ''
  OR rust_crate IS NULL OR trim(rust_crate) = ''
  OR rust_module_path IS NULL OR trim(rust_module_path) = ''
  OR rust_symbol IS NULL OR trim(rust_symbol) = ''
  OR implementation_scope IS NULL OR trim(implementation_scope) = ''
  OR (
    handler_address IS NOT NULL
    AND NOT regexp_full_match(handler_address, '[0-9a-f]{1,16}')
  );

SELECT CASE
  WHEN count(*) > 0 THEN error('The Rust UI trace import contains duplicate trace IDs.')
  ELSE count(*)
END
FROM (
  SELECT source_file, trace_id
  FROM incoming_rust_ui_trace
  GROUP BY source_file, trace_id
  HAVING count(*) > 1
) AS duplicate_traces;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust UI trace references an unknown DFM component.')
  ELSE count(*)
END
FROM incoming_rust_ui_trace AS trace
LEFT JOIN nodes AS component
  ON component.formResource = trace.form_resource
  AND component.componentPath = trace.component_path
WHERE component.id IS NULL;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust UI trace references an unknown Ghidra function or source file.')
  ELSE count(*)
END
FROM incoming_rust_ui_trace AS trace
LEFT JOIN nodes AS handler
  ON handler.type = 'function'
  AND handler.address = trace.handler_address
  AND handler.filePath = trace.ghidra_source_path
WHERE trace.handler_address IS NOT NULL
  AND handler.id IS NULL;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust UI trace handler is not linked to its DFM component.')
  ELSE count(*)
END
FROM incoming_rust_ui_trace AS trace
LEFT JOIN ui_event_resource_evidence AS event
  ON event.form_resource = trace.form_resource
  AND event.component_path = trace.component_path
  AND event.handler_address = trace.handler_address
WHERE trace.handler_address IS NOT NULL
  AND event.control_node_id IS NULL;

DELETE FROM rust_ui_traceability
WHERE source_file IN (SELECT DISTINCT source_file FROM incoming_rust_ui_trace);

INSERT INTO rust_ui_traceability
SELECT * FROM incoming_rust_ui_trace;

CREATE OR REPLACE VIEW rust_ui_traceability_statistics AS
SELECT
  count(*) AS trace_row_count,
  count(DISTINCT source_file) AS source_count,
  count(DISTINCT screenshot_path) AS screenshot_count
FROM rust_ui_traceability;

UPDATE storage_metadata SET schema_version = 4;

COMMIT;

SELECT concat_ws('|',
  (SELECT count(*) FROM rust_ui_traceability),
  (SELECT count(DISTINCT source_file) FROM rust_ui_traceability),
  (SELECT count(DISTINCT screenshot_path) FROM rust_ui_traceability)
);
"@

$result = & $duckDbCommand.Source $resolvedDatabasePath `
    -bail `
    -noheader `
    -list `
    -c $importSql
if ($LASTEXITCODE -ne 0)
{
    throw "DuckDB Rust UI trace import failed with exit code $LASTEXITCODE."
}

$counts = ($result | Select-Object -Last 1).Split('|')
if ($counts.Count -ne 3)
{
    throw 'DuckDB returned an invalid Rust UI trace import result.'
}

Write-Output "DuckDB Rust UI trace: $resolvedDatabasePath"
Write-Output "Rows: $($counts[0])"
Write-Output "Sources: $($counts[1])"
Write-Output "Screenshots: $($counts[2])"
