[CmdletBinding()]
param(
    [Parameter(Mandatory)]
    [string]$SourcePath,
    [string]$DatabasePath = '.understand-anything/knowledge-graph.duckdb',
    [switch]$ReplaceAll
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

if ([System.IO.Directory]::Exists($resolvedSourcePath))
{
    $sourcePattern = [System.IO.Path]::Combine($resolvedSourcePath, '*.json')
    $sourceFiles = @(Get-ChildItem -LiteralPath $resolvedSourcePath -Filter '*.json' -File)
}
elseif ([System.IO.File]::Exists($resolvedSourcePath))
{
    $sourcePattern = $resolvedSourcePath
    $sourceFiles = @([System.IO.FileInfo]::new($resolvedSourcePath))
}
else
{
    throw "The annotation source does not exist: $resolvedSourcePath"
}

if ($sourceFiles.Count -eq 0)
{
    throw "The annotation source contains no JSON files: $resolvedSourcePath"
}
if (-not [System.IO.File]::Exists($resolvedDatabasePath))
{
    throw "The DuckDB database does not exist: $resolvedDatabasePath"
}

$duckDbCommand = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop
$duckDbSourcePattern = $sourcePattern.Replace('\', '/').Replace("'", "''")
$replaceStatement = if ($ReplaceAll)
{
    'DELETE FROM function_annotations;'
}
else
{
    @'
DELETE FROM function_annotations
WHERE source_file IN (SELECT DISTINCT source_file FROM incoming_annotations);
'@
}

$importSql = @"
BEGIN TRANSACTION;

CREATE TABLE IF NOT EXISTS function_annotations (
  source_file VARCHAR NOT NULL,
  bead_id VARCHAR NOT NULL,
  control_id VARCHAR NOT NULL,
  address VARCHAR NOT NULL,
  recovered_role VARCHAR,
  likely_delphi_name VARCHAR,
  framework VARCHAR,
  api_category VARCHAR,
  ui_role VARCHAR,
  behavior VARCHAR,
  evidence VARCHAR,
  tags VARCHAR[] NOT NULL,
  PRIMARY KEY (source_file, address)
);

CREATE OR REPLACE TEMP TABLE incoming_annotations AS
SELECT
  parse_filename(document.filename) AS source_file,
  document.bead AS bead_id,
  document.control AS control_id,
  lower(regexp_replace(annotation.address, '^0x', '', 'i')) AS address,
  CAST(annotation.recoveredRole AS VARCHAR) AS recovered_role,
  CAST(annotation.likelyDelphiName AS VARCHAR) AS likely_delphi_name,
  CAST(annotation.framework AS VARCHAR) AS framework,
  CAST(annotation.apiCategory AS VARCHAR) AS api_category,
  CAST(annotation.uiRole AS VARCHAR) AS ui_role,
  CAST(annotation.behavior AS VARCHAR) AS behavior,
  CAST(annotation.evidence AS VARCHAR) AS evidence,
  coalesce(annotation.tags, []::VARCHAR[]) AS tags
FROM read_json_auto(
  '$duckDbSourcePattern',
  format = 'unstructured',
  filename = true,
  union_by_name = true
) AS document,
UNNEST(document.functions) AS item(annotation);

SELECT CASE
  WHEN count(*) = 0 THEN error('The annotation import contains no rows.')
  ELSE count(*)
END
FROM incoming_annotations;

SELECT CASE
  WHEN count(*) > 0 THEN error('An annotation row has an invalid source, address, or tag value.')
  ELSE count(*)
END
FROM incoming_annotations
WHERE source_file IS NULL
  OR trim(source_file) = ''
  OR bead_id IS NULL
  OR trim(bead_id) = ''
  OR control_id IS NULL
  OR trim(control_id) = ''
  OR NOT regexp_full_match(address, '[0-9a-f]{1,16}')
  OR list_count(list_filter(tags, tag -> tag IS NULL OR trim(tag) = '')) > 0;

SELECT CASE
  WHEN count(*) > 0 THEN error('An annotation source contains a duplicate function address.')
  ELSE count(*)
END
FROM (
  SELECT source_file, address
  FROM incoming_annotations
  GROUP BY source_file, address
  HAVING count(*) > 1
) AS duplicate_annotations;

$replaceStatement

CREATE OR REPLACE TEMP TABLE candidate_annotations AS
SELECT * FROM function_annotations
UNION ALL
SELECT * FROM incoming_annotations;

SELECT CASE
  WHEN count(*) > 0 THEN error('Function annotation fields conflict across sources.')
  ELSE count(*)
END
FROM (
  SELECT address, field_name
  FROM candidate_annotations
  UNPIVOT (field_value FOR field_name IN (
    recovered_role,
    likely_delphi_name,
    framework,
    api_category,
    ui_role,
    behavior,
    evidence
  ))
  WHERE field_value IS NOT NULL AND trim(field_value) <> ''
  GROUP BY address, field_name
  HAVING count(DISTINCT field_value) > 1
) AS conflicts;

INSERT INTO function_annotations
SELECT * FROM incoming_annotations;

CREATE OR REPLACE VIEW function_annotation_statistics AS
SELECT
  count(*) AS annotation_row_count,
  count(DISTINCT source_file) AS source_count,
  count(DISTINCT address) AS address_count
FROM function_annotations;

UPDATE storage_metadata SET schema_version = 2;

COMMIT;

SELECT concat_ws('|',
  (SELECT count(*) FROM function_annotations),
  (SELECT count(DISTINCT source_file) FROM function_annotations),
  (SELECT count(DISTINCT address) FROM function_annotations)
);
"@

$result = & $duckDbCommand.Source $resolvedDatabasePath `
    -bail `
    -noheader `
    -list `
    -c $importSql
if ($LASTEXITCODE -ne 0)
{
    throw "DuckDB annotation import failed with exit code $LASTEXITCODE."
}

$counts = ($result | Select-Object -Last 1).Split('|')
if ($counts.Count -ne 3)
{
    throw 'DuckDB returned an invalid annotation import result.'
}

Write-Output "DuckDB annotations: $resolvedDatabasePath"
Write-Output "Rows: $($counts[0])"
Write-Output "Sources: $($counts[1])"
Write-Output "Addresses: $($counts[2])"
