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

    $expectedAnnotationCounts = @('0', '0', '0')
    if ([System.IO.File]::Exists($resolvedDatabasePath))
    {
        $annotationTableResult = & $duckDbCommand.Source $resolvedDatabasePath `
            -readonly `
            -noheader `
            -list `
            -c "SELECT count(*) FROM information_schema.tables WHERE table_schema = 'main' AND table_name = 'function_annotations';"
        if ($LASTEXITCODE -ne 0)
        {
            throw "DuckDB annotation-table inspection failed with exit code $LASTEXITCODE."
        }

        if (($annotationTableResult | Select-Object -Last 1) -eq '1')
        {
            $annotationCountResult = & $duckDbCommand.Source $resolvedDatabasePath `
                -readonly `
                -noheader `
                -list `
                -c "SELECT concat_ws('|', count(*), count(DISTINCT source_file), count(DISTINCT address)) FROM function_annotations;"
            if ($LASTEXITCODE -ne 0)
            {
                throw "DuckDB annotation count failed with exit code $LASTEXITCODE."
            }
            $expectedAnnotationCounts = ($annotationCountResult | Select-Object -Last 1).Split('|')

            $duckDbPreviousPath = $resolvedDatabasePath.Replace('\', '/').Replace("'", "''")
            $copyAnnotationSql = @"
ATTACH '$duckDbPreviousPath' AS previous_graph (READ_ONLY);
INSERT INTO function_annotations
SELECT * FROM previous_graph.function_annotations;
DETACH previous_graph;
CHECKPOINT;
"@
            & $duckDbCommand.Source $temporaryDatabasePath `
                -bail `
                -c $copyAnnotationSql
            if ($LASTEXITCODE -ne 0)
            {
                throw "DuckDB annotation copy failed with exit code $LASTEXITCODE."
            }
        }
    }

    $expectedTraceCounts = @('0', '0', '0')
    if ([System.IO.File]::Exists($resolvedDatabasePath))
    {
        $traceTableResult = & $duckDbCommand.Source $resolvedDatabasePath `
            -readonly `
            -noheader `
            -list `
            -c "SELECT count(*) FROM information_schema.tables WHERE table_schema = 'main' AND table_name = 'rust_ui_traceability';"
        if ($LASTEXITCODE -ne 0)
        {
            throw "DuckDB Rust UI trace-table inspection failed with exit code $LASTEXITCODE."
        }

        if (($traceTableResult | Select-Object -Last 1) -eq '1')
        {
            $traceCountResult = & $duckDbCommand.Source $resolvedDatabasePath `
                -readonly `
                -noheader `
                -list `
                -c "SELECT concat_ws('|', count(*), count(DISTINCT source_file), count(DISTINCT screenshot_path)) FROM rust_ui_traceability;"
            if ($LASTEXITCODE -ne 0)
            {
                throw "DuckDB Rust UI trace count failed with exit code $LASTEXITCODE."
            }
            $expectedTraceCounts = ($traceCountResult | Select-Object -Last 1).Split('|')

            $duckDbPreviousPath = $resolvedDatabasePath.Replace('\', '/').Replace("'", "''")
            $copyTraceSql = @"
ATTACH '$duckDbPreviousPath' AS previous_graph (READ_ONLY);
INSERT INTO rust_ui_traceability
SELECT * FROM previous_graph.rust_ui_traceability;
DETACH previous_graph;
CHECKPOINT;
"@
            & $duckDbCommand.Source $temporaryDatabasePath `
                -bail `
                -c $copyTraceSql
            if ($LASTEXITCODE -ne 0)
            {
                throw "DuckDB Rust UI trace copy failed with exit code $LASTEXITCODE."
            }
        }
    }

    $expectedPortMappingCounts = @('0', '0', '0', '0', '0')
    if ([System.IO.File]::Exists($resolvedDatabasePath))
    {
        $portMappingTableResult = & $duckDbCommand.Source $resolvedDatabasePath `
            -readonly `
            -noheader `
            -list `
            -c "SELECT count(*) FROM information_schema.tables WHERE table_schema = 'main' AND table_name = 'rust_port_mappings';"
        if ($LASTEXITCODE -ne 0)
        {
            throw "DuckDB Rust port-mapping table inspection failed with exit code $LASTEXITCODE."
        }

        if (($portMappingTableResult | Select-Object -Last 1) -eq '1')
        {
            $portMappingCountResult = & $duckDbCommand.Source $resolvedDatabasePath `
                -readonly `
                -noheader `
                -list `
                -c "SELECT concat_ws('|', count(*), count(DISTINCT source_file), count(DISTINCT function_address), count(DISTINCT ghidra_source_path), count(DISTINCT rust_source_path)) FROM rust_port_mappings;"
            if ($LASTEXITCODE -ne 0)
            {
                throw "DuckDB Rust port-mapping count failed with exit code $LASTEXITCODE."
            }
            $expectedPortMappingCounts = ($portMappingCountResult | Select-Object -Last 1).Split('|')

            $duckDbPreviousPath = $resolvedDatabasePath.Replace('\', '/').Replace("'", "''")
            $copyPortMappingSql = @"
ATTACH '$duckDbPreviousPath' AS previous_graph (READ_ONLY);
INSERT INTO rust_port_mappings
SELECT * FROM previous_graph.rust_port_mappings;
DETACH previous_graph;
CHECKPOINT;
"@
            & $duckDbCommand.Source $temporaryDatabasePath `
                -bail `
                -c $copyPortMappingSql
            if ($LASTEXITCODE -ne 0)
            {
                throw "DuckDB Rust port-mapping copy failed with exit code $LASTEXITCODE."
            }
        }
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
  (SELECT count(*) FROM (SELECT node_id FROM layer_nodes GROUP BY node_id HAVING count(*) > 1)),
  (SELECT count(*) FROM function_annotations),
  (SELECT count(DISTINCT source_file) FROM function_annotations),
  (SELECT count(DISTINCT address) FROM function_annotations),
  (SELECT count(*) FROM rust_ui_traceability),
  (SELECT count(DISTINCT source_file) FROM rust_ui_traceability),
  (SELECT count(DISTINCT screenshot_path) FROM rust_ui_traceability),
  (SELECT count(*) FROM rust_port_mappings),
  (SELECT count(DISTINCT source_file) FROM rust_port_mappings),
  (SELECT count(DISTINCT function_address) FROM rust_port_mappings),
  (SELECT count(DISTINCT ghidra_source_path) FROM rust_port_mappings),
  (SELECT count(DISTINCT rust_source_path) FROM rust_port_mappings)
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
    if ($counts.Count -ne 19)
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
    if (
        [long]$counts[8] -ne [long]$expectedAnnotationCounts[0] -or
        [long]$counts[9] -ne [long]$expectedAnnotationCounts[1] -or
        [long]$counts[10] -ne [long]$expectedAnnotationCounts[2]
    )
    {
        throw "DuckDB did not preserve the function annotation table."
    }
    if (
        [long]$counts[11] -ne [long]$expectedTraceCounts[0] -or
        [long]$counts[12] -ne [long]$expectedTraceCounts[1] -or
        [long]$counts[13] -ne [long]$expectedTraceCounts[2]
    )
    {
        throw "DuckDB did not preserve the Rust UI traceability table."
    }
    if (
        [long]$counts[14] -ne [long]$expectedPortMappingCounts[0] -or
        [long]$counts[15] -ne [long]$expectedPortMappingCounts[1] -or
        [long]$counts[16] -ne [long]$expectedPortMappingCounts[2] -or
        [long]$counts[17] -ne [long]$expectedPortMappingCounts[3] -or
        [long]$counts[18] -ne [long]$expectedPortMappingCounts[4]
    )
    {
        throw "DuckDB did not preserve the Rust port-mapping table."
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
    Write-Output "Function annotations: $($counts[8])"
    Write-Output "Annotation sources: $($counts[9])"
    Write-Output "Rust UI trace rows: $($counts[11])"
    Write-Output "Rust UI trace sources: $($counts[12])"
    Write-Output "Rust port mappings: $($counts[14])"
    Write-Output "Mapped Ghidra functions: $($counts[16])"
    Write-Output "Mapped Rust files: $($counts[18])"
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
