[CmdletBinding()]
param(
    [Parameter()]
    [string] $TargetPath =
        'D:\GitHub\TIARA\analysis\proprietary\dumps\tina-runtime-rebuilt.exe',

    [Parameter()]
    [string] $ExpectedSha256 =
        '40A8F62B0B54C4C0609EF95129ACDEA1D25495E9C29B65716E2F8DFC521E2F26',

    [Parameter()]
    [string] $OutputPath =
        'D:\GitHub\TIARA\DecompiledSources\Tina16\resources\dfm\ui-evidence.json',

    [Parameter()]
    [string] $UndelphiRepository = 'https://github.com/ATRAPSLLC/undelphi.git',

    [Parameter()]
    [string] $UndelphiReference = 'v0.3.2'
)

$ErrorActionPreference = 'Stop'

$analysisRoot = $PSScriptRoot
$repositoryRoot = Split-Path -Parent $analysisRoot
$temporaryParent = Join-Path $repositoryRoot '.temp'
$temporaryRoot = Join-Path $temporaryParent 'undelphi-ui-evidence'
$extractorPath = Join-Path $analysisRoot 'undelphi\TiaraUiEvidence.rs'
$patchPath = Join-Path $analysisRoot 'undelphi\undelphi-v0.3.2-tiara-rebuilt-pe.patch'
$examplePath = Join-Path $temporaryRoot 'examples\tiara_ui_evidence.rs'

function Assert-SafeTemporaryPath
{
    param(
        [Parameter(Mandatory)]
        [string] $Path
    )

    $resolvedTemporaryParent = [System.IO.Path]::GetFullPath($temporaryParent) +
        [System.IO.Path]::DirectorySeparatorChar
    $resolvedPath = [System.IO.Path]::GetFullPath($Path)
    if (-not $resolvedPath.StartsWith(
        $resolvedTemporaryParent,
        [System.StringComparison]::OrdinalIgnoreCase))
    {
        throw "Temporary path is outside the repository .temp directory: $resolvedPath"
    }
}

if (-not (Test-Path -LiteralPath $TargetPath -PathType Leaf))
{
    throw "Rebuilt TINA executable not found: $TargetPath"
}

if (-not (Test-Path -LiteralPath $extractorPath -PathType Leaf))
{
    throw "UI evidence extractor not found: $extractorPath"
}

if (-not (Test-Path -LiteralPath $patchPath -PathType Leaf))
{
    throw "undelphi compatibility patch not found: $patchPath"
}

$actualSha256 = (Get-FileHash -LiteralPath $TargetPath -Algorithm SHA256).Hash
if ($actualSha256 -ne $ExpectedSha256)
{
    throw "Unexpected input SHA-256. Expected $ExpectedSha256 but found $actualSha256."
}

Assert-SafeTemporaryPath -Path $temporaryRoot
New-Item -ItemType Directory -Path $temporaryParent -Force | Out-Null

try
{
    if (Test-Path -LiteralPath $temporaryRoot)
    {
        Remove-Item -LiteralPath $temporaryRoot -Recurse -Force
    }

    $env:GIT_TERMINAL_PROMPT = '0'
    & git clone --branch $UndelphiReference --depth 1 $UndelphiRepository $temporaryRoot
    if ($LASTEXITCODE -ne 0)
    {
        throw "Cannot clone undelphi reference $UndelphiReference."
    }

    & git -C $temporaryRoot apply --check $patchPath
    if ($LASTEXITCODE -ne 0)
    {
        throw 'The undelphi compatibility patch does not apply cleanly.'
    }

    & git -C $temporaryRoot apply $patchPath
    if ($LASTEXITCODE -ne 0)
    {
        throw 'Cannot apply the undelphi compatibility patch.'
    }

    Copy-Item -LiteralPath $extractorPath -Destination $examplePath -Force
    $jsonLines = & cargo run --manifest-path (Join-Path $temporaryRoot 'Cargo.toml') `
        --release --jobs 1 --example tiara_ui_evidence -- $TargetPath
    if ($LASTEXITCODE -ne 0)
    {
        throw 'The UI evidence extractor failed.'
    }

    $outputDirectory = Split-Path -Parent $OutputPath
    New-Item -ItemType Directory -Path $outputDirectory -Force | Out-Null
    $json = ($jsonLines -join "`r`n") + "`r`n"
    $utf8Bom = [System.Text.UTF8Encoding]::new($true)
    [System.IO.File]::WriteAllText($OutputPath, $json, $utf8Bom)

    $evidence = Get-Content -LiteralPath $OutputPath -Raw | ConvertFrom-Json -Depth 100
    if ($evidence.formCount -lt 300 -or $evidence.eventBindingCount -lt 4000)
    {
        throw (
            "UI evidence is incomplete: $($evidence.formCount) forms and " +
            "$($evidence.eventBindingCount) event bindings."
        )
    }

    Write-Host "UI evidence: $OutputPath"
    Write-Host "Forms: $($evidence.formCount)"
    Write-Host "Event bindings: $($evidence.eventBindingCount)"
}
finally
{
    if (Test-Path -LiteralPath $temporaryRoot)
    {
        Assert-SafeTemporaryPath -Path $temporaryRoot
        Remove-Item -LiteralPath $temporaryRoot -Recurse -Force
    }
}
