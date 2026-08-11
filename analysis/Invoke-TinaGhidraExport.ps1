[CmdletBinding()]
param(
    [Parameter()]
    [string] $TargetPath =
        'D:\GitHub\TIARA\analysis\proprietary\dumps\tina-runtime-rebuilt.exe',

    [Parameter()]
    [string] $ExpectedSha256 =
        '40A8F62B0B54C4C0609EF95129ACDEA1D25495E9C29B65716E2F8DFC521E2F26',

    [Parameter()]
    [string] $AnalyzeHeadlessPath = 'C:\Users\Johann.Dirry\.local\bin\analyzeHeadless.cmd',

    [Parameter()]
    [string] $ProjectName = 'tina16_demo_rebuilt',

    [Parameter()]
    [ValidateRange(1, [int]::MaxValue)]
    [int] $MinimumFunctionCount = 100
)

$ErrorActionPreference = 'Stop'

$analysisRoot = $PSScriptRoot
$repositoryRoot = Split-Path -Parent $analysisRoot
$projectRoot = Join-Path $analysisRoot 'ghidra-projects'
$scriptRoot = Join-Path $analysisRoot 'ghidra-scripts'
$proprietaryRoot = Join-Path $analysisRoot 'proprietary'
$functionOutput = Join-Path $repositoryRoot 'DecompiledSources\Tina16\functions'
$logRoot = Join-Path $proprietaryRoot 'logs'
$projectFile = Join-Path $projectRoot "$ProjectName.gpr"
$programName = [System.IO.Path]::GetFileName($TargetPath)

if (-not (Test-Path -LiteralPath $TargetPath -PathType Leaf))
{
    throw "TINA executable not found: $TargetPath"
}

if (-not (Test-Path -LiteralPath $AnalyzeHeadlessPath -PathType Leaf))
{
    throw "Ghidra headless launcher not found: $AnalyzeHeadlessPath"
}

$actualSha256 = (Get-FileHash -LiteralPath $TargetPath -Algorithm SHA256).Hash
if ($actualSha256 -ne $ExpectedSha256)
{
    throw "Unexpected input SHA-256. Expected $ExpectedSha256 but found $actualSha256."
}

New-Item -ItemType Directory -Path $projectRoot -Force | Out-Null
New-Item -ItemType Directory -Path $functionOutput -Force | Out-Null
New-Item -ItemType Directory -Path $logRoot -Force | Out-Null

$commonArguments = @(
    '-scriptPath', $scriptRoot,
    '-postScript', 'ExportFunctions.java', $functionOutput, '00401000', '01DB814F',
    '-analysisTimeoutPerFile', '3600',
    '-max-cpu', '4',
    '-log', (Join-Path $logRoot 'ghidra-application.log'),
    '-scriptlog', (Join-Path $logRoot 'ghidra-script.log')
)

if (Test-Path -LiteralPath $projectFile -PathType Leaf)
{
    $operationArguments = @('-process', $programName)
}
else
{
    $operationArguments = @('-import', $TargetPath)
}

Write-Host "Target SHA-256: $actualSha256"
Write-Host "Ghidra project: $projectFile"
Write-Host "Function output: $functionOutput"

& $AnalyzeHeadlessPath $projectRoot $ProjectName @operationArguments @commonArguments
if ($LASTEXITCODE -ne 0)
{
    throw "Ghidra headless analysis failed with exit code $LASTEXITCODE."
}

$indexPath = Join-Path $functionOutput 'function-index.csv'
if (-not (Test-Path -LiteralPath $indexPath -PathType Leaf))
{
    throw "Ghidra completed without creating the function index: $indexPath"
}

$functionCount = @(Import-Csv -LiteralPath $indexPath).Count
if ($functionCount -lt $MinimumFunctionCount)
{
    throw (
        "Ghidra found only $functionCount functions. The required minimum is " +
        "$MinimumFunctionCount. The input can be packed or protected; do not treat this " +
        'bootstrap-only export as an application decompilation.'
    )
}

Write-Host "Function index: $indexPath"
