[CmdletBinding()]
param(
    [Parameter(Mandatory)]
    [string] $OriginalPePath,

    [Parameter(Mandatory)]
    [string] $MappedImagePath,

    [Parameter(Mandatory)]
    [string] $OutputPath
)

$ErrorActionPreference = 'Stop'

function Get-AlignedValue
{
    param(
        [Parameter(Mandatory)]
        [uint32] $Value,

        [Parameter(Mandatory)]
        [uint32] $Alignment
    )

    return [uint32] ([Math]::Ceiling($Value / [double] $Alignment) * $Alignment)
}

function Get-AsciiName
{
    param(
        [Parameter(Mandatory)]
        [byte[]] $Bytes,

        [Parameter(Mandatory)]
        [int] $Offset
    )

    $length = 0
    while ($length -lt 8 -and $Bytes[$Offset + $length] -ne 0)
    {
        $length++
    }

    return [System.Text.Encoding]::ASCII.GetString($Bytes, $Offset, $length)
}

$resolvedOriginalPath = (Resolve-Path -LiteralPath $OriginalPePath).Path
$resolvedMappedPath = (Resolve-Path -LiteralPath $MappedImagePath).Path
$resolvedOutputPath = [System.IO.Path]::GetFullPath($OutputPath)
$outputDirectory = Split-Path -Parent $resolvedOutputPath
if ($outputDirectory)
{
    New-Item -ItemType Directory -Path $outputDirectory -Force | Out-Null
}

$originalBytes = [System.IO.File]::ReadAllBytes($resolvedOriginalPath)
$mappedBytes = [System.IO.File]::ReadAllBytes($resolvedMappedPath)

if ([System.Text.Encoding]::ASCII.GetString($originalBytes, 0, 2) -ne 'MZ')
{
    throw "The original file does not have an MZ header: $resolvedOriginalPath"
}

$peOffset = [System.BitConverter]::ToInt32($originalBytes, 0x3c)
if ([System.Text.Encoding]::ASCII.GetString($originalBytes, $peOffset, 4) -ne "PE`0`0")
{
    throw "The original file does not have a PE header: $resolvedOriginalPath"
}

$fileHeaderOffset = $peOffset + 4
$sectionCount = [System.BitConverter]::ToUInt16($originalBytes, $fileHeaderOffset + 2)
$optionalHeaderSize = [System.BitConverter]::ToUInt16($originalBytes, $fileHeaderOffset + 16)
$optionalHeaderOffset = $fileHeaderOffset + 20
$optionalHeaderMagic = [System.BitConverter]::ToUInt16($originalBytes, $optionalHeaderOffset)
if ($optionalHeaderMagic -ne 0x20b)
{
    throw ('Expected a PE32+ optional header but found 0x{0:X4}.' -f $optionalHeaderMagic)
}

$fileAlignment = [System.BitConverter]::ToUInt32($originalBytes, $optionalHeaderOffset + 36)
$imageSize = [System.BitConverter]::ToUInt32($originalBytes, $optionalHeaderOffset + 56)
$headersSize = [System.BitConverter]::ToUInt32($originalBytes, $optionalHeaderOffset + 60)
$sectionTableOffset = $optionalHeaderOffset + $optionalHeaderSize

if ($mappedBytes.LongLength -lt $imageSize)
{
    throw "The mapped image is smaller than the PE image size $imageSize."
}

$sections = [System.Collections.Generic.List[object]]::new()
[uint32] $nextRawOffset = Get-AlignedValue -Value $headersSize -Alignment $fileAlignment

for ($index = 0; $index -lt $sectionCount; $index++)
{
    $sectionHeaderOffset = $sectionTableOffset + ($index * 40)
    $name = Get-AsciiName -Bytes $originalBytes -Offset $sectionHeaderOffset
    $virtualSize = [System.BitConverter]::ToUInt32($originalBytes, $sectionHeaderOffset + 8)
    $virtualAddress = [System.BitConverter]::ToUInt32($originalBytes, $sectionHeaderOffset + 12)
    $characteristics = [System.BitConverter]::ToUInt32($originalBytes, $sectionHeaderOffset + 36)
    $rawSize = Get-AlignedValue -Value $virtualSize -Alignment $fileAlignment

    $sections.Add([pscustomobject]@{
        Name = $name
        HeaderOffset = $sectionHeaderOffset
        VirtualAddress = $virtualAddress
        VirtualSize = $virtualSize
        RawOffset = $nextRawOffset
        RawSize = $rawSize
        Characteristics = ('0x{0:X8}' -f $characteristics)
    })

    $nextRawOffset += $rawSize
}

$outputBytes = [byte[]]::new($nextRawOffset)
[System.Array]::Copy($originalBytes, 0, $outputBytes, 0, $headersSize)

foreach ($section in $sections)
{
    if ([uint64] $section.VirtualAddress + $section.VirtualSize -gt $mappedBytes.LongLength)
    {
        throw "Section $($section.Name) extends beyond the mapped image."
    }

    if ($section.VirtualSize -gt 0)
    {
        [System.Array]::Copy(
            $mappedBytes,
            [int] $section.VirtualAddress,
            $outputBytes,
            [int] $section.RawOffset,
            [int] $section.VirtualSize)
    }

    [System.BitConverter]::GetBytes([uint32] $section.RawSize).CopyTo(
        $outputBytes,
        $section.HeaderOffset + 16)
    [System.BitConverter]::GetBytes([uint32] $section.RawOffset).CopyTo(
        $outputBytes,
        $section.HeaderOffset + 20)
}

$checksumOffset = $optionalHeaderOffset + 64
[System.Array]::Clear($outputBytes, $checksumOffset, 4)

$dataDirectoryOffset = $optionalHeaderOffset + 112
$securityDirectoryOffset = $dataDirectoryOffset + (4 * 8)
[System.Array]::Clear($outputBytes, $securityDirectoryOffset, 8)

[System.IO.File]::WriteAllBytes($resolvedOutputPath, $outputBytes)

$metadata = [ordered]@{
    OriginalPePath = $resolvedOriginalPath
    OriginalPeSha256 = (Get-FileHash -LiteralPath $resolvedOriginalPath -Algorithm SHA256).Hash
    MappedImagePath = $resolvedMappedPath
    MappedImageSha256 = (Get-FileHash -LiteralPath $resolvedMappedPath -Algorithm SHA256).Hash
    OutputPath = $resolvedOutputPath
    OutputSha256 = (Get-FileHash -LiteralPath $resolvedOutputPath -Algorithm SHA256).Hash
    ImageSize = $imageSize
    FileSize = $outputBytes.LongLength
    Sections = $sections
}

$metadataPath = "$resolvedOutputPath.json"
$metadataJson = ($metadata | ConvertTo-Json -Depth 4) -replace "(?<!`r)`n", "`r`n"
[System.IO.File]::WriteAllText(
    $metadataPath,
    $metadataJson + "`r`n",
    [System.Text.UTF8Encoding]::new($true))

[pscustomobject] $metadata |
    Select-Object OutputPath, OutputSha256, ImageSize, FileSize |
    Format-List
