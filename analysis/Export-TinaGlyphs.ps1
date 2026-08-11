[CmdletBinding()]
param(
    [Parameter()]
    [string] $TargetPath =
        'D:\GitHub\TIARA\analysis\proprietary\dumps\tina-runtime-rebuilt.exe',

    [Parameter()]
    [string] $ExpectedSha256 =
        '40A8F62B0B54C4C0609EF95129ACDEA1D25495E9C29B65716E2F8DFC521E2F26',

    [Parameter()]
    [string] $OutputPath = 'D:\GitHub\TIARA\glyph',

    [Parameter()]
    [string] $UndelphiRepository = 'https://github.com/ATRAPSLLC/undelphi.git',

    [Parameter()]
    [string] $UndelphiReference = 'v0.3.2',

    [Parameter()]
    [switch] $Force
)

$ErrorActionPreference = 'Stop'

$analysisRoot = $PSScriptRoot
$repositoryRoot = Split-Path -Parent $analysisRoot
$temporaryParent = Join-Path $repositoryRoot '.temp'
$temporaryRoot = Join-Path $temporaryParent 'undelphi-glyph-extraction'
$temporaryOutput = Join-Path $temporaryParent 'glyph-output'
$extractorPath = Join-Path $analysisRoot 'undelphi\TiaraGlyphExtractor.rs'
$patchPath = Join-Path $analysisRoot 'undelphi\undelphi-v0.3.2-tiara-rebuilt-pe.patch'
$examplePath = Join-Path $temporaryRoot 'examples\tiara_glyph_extractor.rs'

function Assert-SafePath
{
    param(
        [Parameter(Mandatory)]
        [string] $Path,

        [Parameter(Mandatory)]
        [string] $Parent
    )

    $resolvedParent = [System.IO.Path]::GetFullPath($Parent) +
        [System.IO.Path]::DirectorySeparatorChar
    $resolvedPath = [System.IO.Path]::GetFullPath($Path)
    if (-not $resolvedPath.StartsWith(
        $resolvedParent,
        [System.StringComparison]::OrdinalIgnoreCase))
    {
        throw "Path is outside the expected parent directory: $resolvedPath"
    }
}

if (-not (Test-Path -LiteralPath $TargetPath -PathType Leaf))
{
    throw "Rebuilt TINA executable not found: $TargetPath"
}
if (-not (Test-Path -LiteralPath $extractorPath -PathType Leaf))
{
    throw "Glyph extractor not found: $extractorPath"
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

Assert-SafePath -Path $temporaryRoot -Parent $temporaryParent
Assert-SafePath -Path $temporaryOutput -Parent $temporaryParent
Assert-SafePath -Path $OutputPath -Parent $repositoryRoot
if ((Test-Path -LiteralPath $OutputPath) -and -not $Force)
{
    throw "Output directory already exists. Use -Force to replace it: $OutputPath"
}

New-Item -ItemType Directory -Path $temporaryParent -Force | Out-Null

try
{
    foreach ($path in @($temporaryRoot, $temporaryOutput))
    {
        if (Test-Path -LiteralPath $path)
        {
            Assert-SafePath -Path $path -Parent $temporaryParent
            Remove-Item -LiteralPath $path -Recurse -Force
        }
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

    New-Item -ItemType Directory -Path $temporaryOutput -Force | Out-Null
    Copy-Item -LiteralPath $extractorPath -Destination $examplePath -Force
    $tsvLines = & cargo run --manifest-path (Join-Path $temporaryRoot 'Cargo.toml') `
        --release --jobs 1 --example tiara_glyph_extractor -- `
        $TargetPath $temporaryOutput
    if ($LASTEXITCODE -ne 0)
    {
        throw 'The glyph extractor failed.'
    }

    $records = @($tsvLines | ConvertFrom-Csv -Delimiter "`t")
    if ($records.Count -eq 0)
    {
        throw 'The glyph extractor did not find image resources.'
    }

    Add-Type -AssemblyName System.Drawing.Common
    $items = foreach ($record in $records)
    {
        $fileName = [string] $record.FileName
        $format = [string] $record.Format
        $originalFormat = $format
        $filePath = Join-Path $temporaryOutput $fileName
        $width = $null
        $height = $null
        $sourceFileToRemove = $null

        if ($format -ne 'unknown')
        {
            $image = [System.Drawing.Image]::FromFile($filePath)
            try
            {
                $width = $image.Width
                $height = $image.Height
                if ($format -eq 'bmp')
                {
                    $pngName = [System.IO.Path]::ChangeExtension($fileName, '.png')
                    $pngPath = Join-Path $temporaryOutput $pngName
                    $image.Save($pngPath, [System.Drawing.Imaging.ImageFormat]::Png)
                    $sourceFileToRemove = $filePath
                    $fileName = $pngName
                    $filePath = $pngPath
                    $format = 'png'
                }
            }
            finally
            {
                $image.Dispose()
            }
            if ($null -ne $sourceFileToRemove)
            {
                Remove-Item -LiteralPath $sourceFileToRemove -Force
            }
        }

        [ordered] @{
            FileName = $fileName
            Format = $format
            OriginalFormat = $originalFormat
            FormResource = [string] $record.FormResource
            FormClass = [string] $record.FormClass
            ComponentPath = [string] $record.ComponentPath
            ControlClass = [string] $record.ControlClass
            Property = [string] $record.Property
            Width = $width
            Height = $height
            SourceBytes = [int] $record.SourceBytes
            ExtractedBytes = (Get-Item -LiteralPath $filePath).Length
            SourceOffset = [int] $record.SourceOffset
            Sha256 = (Get-FileHash -LiteralPath $filePath -Algorithm SHA256).Hash.ToLowerInvariant()
        }
    }

    $manifest = [ordered] @{
        SchemaVersion = '1.0.0'
        SourcePath = 'analysis/proprietary/dumps/tina-runtime-rebuilt.exe'
        SourceSha256 = $actualSha256.ToLowerInvariant()
        ResourceCount = $items.Count
        Resources = @($items)
    }
    $manifestJson = $manifest | ConvertTo-Json -Depth 10
    $manifestPath = Join-Path $temporaryOutput 'manifest.json'
    $utf8Bom = [System.Text.UTF8Encoding]::new($true)
    [System.IO.File]::WriteAllText(
        $manifestPath,
        ($manifestJson -replace "(?<!`r)`n", "`r`n") + "`r`n",
        $utf8Bom
    )

    if (Test-Path -LiteralPath $OutputPath)
    {
        Assert-SafePath -Path $OutputPath -Parent $repositoryRoot
        Remove-Item -LiteralPath $OutputPath -Recurse -Force
    }
    Move-Item -LiteralPath $temporaryOutput -Destination $OutputPath -Force

    Write-Host "Glyph resources: $OutputPath"
    Write-Host "Resources: $($items.Count)"
}
finally
{
    foreach ($path in @($temporaryRoot, $temporaryOutput))
    {
        if (Test-Path -LiteralPath $path)
        {
            Assert-SafePath -Path $path -Parent $temporaryParent
            Remove-Item -LiteralPath $path -Recurse -Force
        }
    }
}
