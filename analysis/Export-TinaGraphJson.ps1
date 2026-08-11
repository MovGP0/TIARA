[CmdletBinding()]
param(
    [string]$DatabasePath = '.understand-anything/knowledge-graph.duckdb',
    [string]$OutputPath = '.understand-anything/knowledge-graph.json'
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
$resolvedDatabasePath = Resolve-ProjectPath -Path $DatabasePath -ProjectRoot $projectRoot
$resolvedOutputPath = Resolve-ProjectPath -Path $OutputPath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedDatabasePath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedOutputPath -ProjectRoot $projectRoot

if (-not [System.IO.File]::Exists($resolvedDatabasePath))
{
    throw "The DuckDB graph does not exist: $resolvedDatabasePath"
}

$duckDbCommand = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop
$schemaPath = [System.IO.Path]::Combine($projectRoot, 'graph.schema')
$outputDirectory = [System.IO.Path]::GetDirectoryName($resolvedOutputPath)
[System.IO.Directory]::CreateDirectory($outputDirectory) | Out-Null
$temporaryDirectory = [System.IO.Path]::Combine(
    $projectRoot,
    '.temp',
    'duckdb-export'
)
[System.IO.Directory]::CreateDirectory($temporaryDirectory) | Out-Null
$temporaryOutputPath = [System.IO.Path]::Combine(
    $temporaryDirectory,
    'knowledge-graph.json'
)
$backupOutputPath = [System.IO.Path]::Combine(
    $temporaryDirectory,
    'previous-knowledge-graph.json'
)

try
{
    [System.IO.File]::Delete($temporaryOutputPath)
    [System.IO.File]::Delete($backupOutputPath)
    & $duckDbCommand.Source $resolvedDatabasePath `
        -readonly `
        -noheader `
        -list `
        -c 'SELECT document FROM knowledge_graph_document;' |
        Out-File -LiteralPath $temporaryOutputPath -Encoding utf8NoBOM
    if ($LASTEXITCODE -ne 0)
    {
        throw "DuckDB graph export failed with exit code $LASTEXITCODE."
    }

    $isValid = Get-Content -Raw -LiteralPath $temporaryOutputPath |
        Test-Json -SchemaFile $schemaPath
    if (-not $isValid)
    {
        throw "The exported graph does not match graph.schema."
    }

    if ([System.IO.File]::Exists($resolvedOutputPath))
    {
        [System.IO.File]::Replace(
            $temporaryOutputPath,
            $resolvedOutputPath,
            $backupOutputPath
        )
        [System.IO.File]::Delete($backupOutputPath)
    }
    else
    {
        [System.IO.File]::Move($temporaryOutputPath, $resolvedOutputPath)
    }

    $outputSize = [System.IO.FileInfo]::new($resolvedOutputPath).Length
    Write-Output "Understand Anything JSON: $resolvedOutputPath"
    Write-Output "Bytes: $outputSize"
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
