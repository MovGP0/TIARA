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
    throw "The Rust port-mapping source does not exist: $resolvedSourcePath"
}
if (-not [System.IO.File]::Exists($resolvedDatabasePath))
{
    throw "The DuckDB database does not exist: $resolvedDatabasePath"
}

$document = Get-Content -Raw -LiteralPath $resolvedSourcePath | ConvertFrom-Json
if ($null -eq $document.records -or $document.records.Count -eq 0)
{
    throw 'The Rust port-mapping source contains no records.'
}

foreach ($record in $document.records)
{
    foreach ($relativePath in @($record.ghidraSourcePath, $record.rustSourcePath))
    {
        $resolvedArtifactPath = Resolve-ProjectPath `
            -Path $relativePath `
            -ProjectRoot $projectRoot
        Assert-ProjectPath -Path $resolvedArtifactPath -ProjectRoot $projectRoot
        if (-not [System.IO.File]::Exists($resolvedArtifactPath))
        {
            throw "A mapped source file does not exist: $relativePath"
        }
    }

    $resolvedRustPath = Resolve-ProjectPath `
        -Path $record.rustSourcePath `
        -ProjectRoot $projectRoot
    $rustSource = [System.IO.File]::ReadAllText($resolvedRustPath)
    $normalizedAddress = $record.functionAddress -replace '^0x', ''
    if ($rustSource -notmatch [Regex]::Escape($normalizedAddress))
    {
        throw "The Rust source does not reference function address $($record.functionAddress): $($record.rustSourcePath)"
    }
    $rustSymbolProperty = $record.PSObject.Properties['rustSymbol']
    $rustSymbol = if ($null -eq $rustSymbolProperty)
    {
        $null
    }
    else
    {
        $rustSymbolProperty.Value
    }
    if (
        $null -ne $rustSymbol -and
        $rustSymbol -ne '' -and
        $rustSource -notmatch [Regex]::Escape($rustSymbol)
    )
    {
        throw "The Rust source does not contain mapped symbol $rustSymbol`: $($record.rustSourcePath)"
    }
}

$duckDbCommand = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop
$duckDbSourcePath = $resolvedSourcePath.Replace('\', '/').Replace("'", "''")

$importSql = @"
BEGIN TRANSACTION;

CREATE TABLE IF NOT EXISTS rust_port_mappings (
  source_file VARCHAR NOT NULL,
  bead_id VARCHAR NOT NULL,
  function_address VARCHAR NOT NULL,
  ghidra_source_path VARCHAR NOT NULL,
  rust_source_path VARCHAR NOT NULL,
  rust_symbol VARCHAR,
  mapping_kind VARCHAR NOT NULL,
  notes VARCHAR,
  PRIMARY KEY (source_file, function_address, rust_source_path)
);

ALTER TABLE rust_port_mappings
ALTER COLUMN rust_symbol DROP NOT NULL;

CREATE OR REPLACE TEMP TABLE incoming_rust_port_mappings AS
SELECT
  parse_filename(document.filename) AS source_file,
  record.beadId AS bead_id,
  lower(regexp_replace(record.functionAddress, '^0x', '', 'i')) AS function_address,
  record.ghidraSourcePath AS ghidra_source_path,
  record.rustSourcePath AS rust_source_path,
  nullif(json_extract_string(to_json(record), '$.rustSymbol'), '') AS rust_symbol,
  record.mappingKind AS mapping_kind,
  json_extract_string(to_json(record), '$.notes') AS notes
FROM read_json_auto(
  '$duckDbSourcePath',
  format = 'unstructured',
  filename = true
) AS document,
UNNEST(document.records) AS item(record);

SELECT CASE
  WHEN count(*) = 0 THEN error('The Rust port-mapping import contains no rows.')
  ELSE count(*)
END
FROM incoming_rust_port_mappings;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust port-mapping row has an invalid required value.')
  ELSE count(*)
END
FROM incoming_rust_port_mappings
WHERE source_file IS NULL OR trim(source_file) = ''
  OR bead_id IS NULL OR trim(bead_id) = ''
  OR NOT regexp_full_match(function_address, '[0-9a-f]{8,16}')
  OR lower(bead_id) <> concat('tiara-f', function_address)
  OR ghidra_source_path IS NULL OR trim(ghidra_source_path) = ''
  OR rust_source_path IS NULL OR trim(rust_source_path) = ''
  OR mapping_kind NOT IN ('implementation', 'library-adapter', 'shared-implementation');

SELECT CASE
  WHEN count(*) > 0 THEN error('The Rust port-mapping import contains duplicate mappings.')
  ELSE count(*)
END
FROM (
  SELECT function_address, rust_source_path
  FROM incoming_rust_port_mappings
  GROUP BY function_address, rust_source_path
  HAVING count(*) > 1
) AS duplicate_mappings;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust port mapping references an unknown Ghidra function or source file.')
  ELSE count(*)
END
FROM incoming_rust_port_mappings AS mapping
LEFT JOIN nodes AS function
  ON function.type = 'function'
  AND function.address = mapping.function_address
  AND function.filePath = mapping.ghidra_source_path
WHERE function.id IS NULL;

SELECT CASE
  WHEN count(*) > 0 THEN error('A Rust port mapping conflicts with an existing source-owned mapping.')
  ELSE count(*)
END
FROM incoming_rust_port_mappings AS incoming
JOIN rust_port_mappings AS existing
  ON existing.function_address = incoming.function_address
  AND existing.rust_source_path = incoming.rust_source_path
  AND existing.source_file <> incoming.source_file;

DELETE FROM rust_port_mappings
WHERE source_file IN (SELECT DISTINCT source_file FROM incoming_rust_port_mappings);

INSERT INTO rust_port_mappings
SELECT * FROM incoming_rust_port_mappings;

CREATE OR REPLACE VIEW rust_port_mapping_statistics AS
SELECT
  count(*) AS mapping_row_count,
  count(DISTINCT source_file) AS source_count,
  count(DISTINCT function_address) AS function_count,
  count(DISTINCT ghidra_source_path) AS ghidra_file_count,
  count(DISTINCT rust_source_path) AS rust_file_count
FROM rust_port_mappings;

UPDATE storage_metadata SET schema_version = 4;

COMMIT;

SELECT concat_ws('|',
  (SELECT count(*) FROM rust_port_mappings),
  (SELECT count(DISTINCT source_file) FROM rust_port_mappings),
  (SELECT count(DISTINCT function_address) FROM rust_port_mappings),
  (SELECT count(DISTINCT ghidra_source_path) FROM rust_port_mappings),
  (SELECT count(DISTINCT rust_source_path) FROM rust_port_mappings)
);
"@

$result = & $duckDbCommand.Source $resolvedDatabasePath `
    -bail `
    -noheader `
    -list `
    -c $importSql
if ($LASTEXITCODE -ne 0)
{
    throw "DuckDB Rust port-mapping import failed with exit code $LASTEXITCODE."
}

$counts = ($result | Select-Object -Last 1).Split('|')
if ($counts.Count -ne 5)
{
    throw 'DuckDB returned an invalid Rust port-mapping import result.'
}

Write-Output "DuckDB Rust port mappings: $resolvedDatabasePath"
Write-Output "Rows: $($counts[0])"
Write-Output "Sources: $($counts[1])"
Write-Output "Functions: $($counts[2])"
Write-Output "Ghidra files: $($counts[3])"
Write-Output "Rust files: $($counts[4])"
