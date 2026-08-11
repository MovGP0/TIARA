[CmdletBinding()]
param(
    [string]$GraphPath = '.understand-anything/knowledge-graph.json',
    [string]$DatabasePath = '.understand-anything/knowledge-graph.duckdb',
    [string]$GlyphManifestPath = 'glyph/manifest.json',
    [switch]$RemoveGraphJson
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
$resolvedGraphPath = Resolve-ProjectPath -Path $GraphPath -ProjectRoot $projectRoot
$resolvedDatabasePath = Resolve-ProjectPath -Path $DatabasePath -ProjectRoot $projectRoot
$resolvedGlyphManifestPath = Resolve-ProjectPath `
    -Path $GlyphManifestPath `
    -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedGraphPath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedDatabasePath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedGlyphManifestPath -ProjectRoot $projectRoot

if (-not [System.IO.File]::Exists($resolvedGraphPath))
{
    throw "The knowledge graph does not exist: $resolvedGraphPath"
}
if (-not [System.IO.File]::Exists($resolvedGlyphManifestPath))
{
    throw "The glyph manifest does not exist: $resolvedGlyphManifestPath"
}

$duckDbCommand = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop
$sqlPath = [System.IO.Path]::Combine(
    $projectRoot,
    'analysis',
    'duckdb',
    'ImportKnowledgeGraph.sql'
)
if (-not [System.IO.File]::Exists($sqlPath))
{
    throw "The DuckDB import schema does not exist: $sqlPath"
}

$databaseDirectory = [System.IO.Path]::GetDirectoryName($resolvedDatabasePath)
[System.IO.Directory]::CreateDirectory($databaseDirectory) | Out-Null
$temporaryDirectory = [System.IO.Path]::Combine(
    $projectRoot,
    '.temp',
    'duckdb-import'
)
[System.IO.Directory]::CreateDirectory($temporaryDirectory) | Out-Null
$temporaryDatabasePath = [System.IO.Path]::Combine(
    $temporaryDirectory,
    'knowledge-graph.duckdb'
)
$backupDatabasePath = [System.IO.Path]::Combine(
    $temporaryDirectory,
    'previous-knowledge-graph.duckdb'
)

try
{
    [System.IO.File]::Delete($temporaryDatabasePath)
    [System.IO.File]::Delete($backupDatabasePath)
    $duckDbGraphPath = $resolvedGraphPath.Replace('\', '/').Replace("'", "''")
    $duckDbGlyphManifestPath = $resolvedGlyphManifestPath.Replace('\', '/').Replace("'", "''")
    & $duckDbCommand.Source $temporaryDatabasePath `
        -bail `
        -cmd "SET VARIABLE graph_path='$duckDbGraphPath';" `
        -cmd "SET VARIABLE glyph_manifest_path='$duckDbGlyphManifestPath';" `
        -f $sqlPath
    if ($LASTEXITCODE -ne 0)
    {
        throw "DuckDB graph import failed with exit code $LASTEXITCODE."
    }

    $integritySql = @'
SELECT concat_ws('|',
  (SELECT count(*) FROM nodes),
  (SELECT count(*) FROM edges),
  (SELECT count(*) FROM layers),
  (SELECT count(*) FROM edges e LEFT JOIN nodes s ON s.id = e.source WHERE s.id IS NULL),
  (SELECT count(*) FROM edges e LEFT JOIN nodes t ON t.id = e.target WHERE t.id IS NULL),
  (SELECT count(*) FROM layer_nodes ln LEFT JOIN nodes n ON n.id = ln.node_id WHERE n.id IS NULL),
  (SELECT count(*) FROM nodes n LEFT JOIN layer_nodes ln ON ln.node_id = n.id WHERE ln.node_id IS NULL),
  (SELECT count(*) FROM (SELECT node_id FROM layer_nodes GROUP BY node_id HAVING count(*) > 1))
);
'@
    $integrityResult = & $duckDbCommand.Source $temporaryDatabasePath `
        -readonly `
        -noheader `
        -list `
        -c $integritySql
    if ($LASTEXITCODE -ne 0)
    {
        throw "DuckDB graph validation failed with exit code $LASTEXITCODE."
    }

    $counts = ($integrityResult | Select-Object -Last 1).Split('|')
    if ($counts.Count -ne 8)
    {
        throw "DuckDB returned an invalid graph validation result."
    }
    if ([long]$counts[0] -eq 0 -or [long]$counts[1] -eq 0)
    {
        throw "DuckDB imported an empty graph."
    }
    if (
        [long]$counts[3] -ne 0 -or
        [long]$counts[4] -ne 0 -or
        [long]$counts[5] -ne 0 -or
        [long]$counts[6] -ne 0 -or
        [long]$counts[7] -ne 0
    )
    {
        throw "DuckDB imported dangling graph references."
    }

    if ([System.IO.File]::Exists($resolvedDatabasePath))
    {
        [System.IO.File]::Replace(
            $temporaryDatabasePath,
            $resolvedDatabasePath,
            $backupDatabasePath
        )
        [System.IO.File]::Delete($backupDatabasePath)
    }
    else
    {
        [System.IO.File]::Move($temporaryDatabasePath, $resolvedDatabasePath)
    }

    if ($RemoveGraphJson)
    {
        [System.IO.File]::Delete($resolvedGraphPath)
    }

    $databaseSize = [System.IO.FileInfo]::new($resolvedDatabasePath).Length
    Write-Output "DuckDB graph: $resolvedDatabasePath"
    Write-Output "Nodes: $($counts[0])"
    Write-Output "Edges: $($counts[1])"
    Write-Output "Layers: $($counts[2])"
    Write-Output "Bytes: $databaseSize"
    Write-Output "Source JSON removed: $($RemoveGraphJson.IsPresent)"
}
finally
{
    if ([System.IO.Directory]::Exists($temporaryDirectory))
    {
        $temporaryItems = Get-ChildItem `
            -LiteralPath $temporaryDirectory `
            -Recurse `
            -Force
        foreach ($temporaryItem in $temporaryItems)
        {
            $temporaryItem.Attributes = [System.IO.FileAttributes]::Normal
        }
        [System.IO.Directory]::Delete($temporaryDirectory, $true)
    }
}
