[CmdletBinding()]
param(
    [Parameter(Mandatory)]
    [string] $DumpPath,

    [Parameter(Mandatory)]
    [string] $ModuleName,

    [Parameter(Mandatory)]
    [string] $OutputPath
)

$ErrorActionPreference = 'Stop'

$minidumpSignature = 0x504d444d
$moduleListStreamType = 4
$memory64ListStreamType = 9
$moduleRecordSize = 108
$copyBufferSize = 1MB

function Read-MinidumpString
{
    param(
        [Parameter(Mandatory)]
        [System.IO.BinaryReader] $Reader,

        [Parameter(Mandatory)]
        [uint32] $RelativeVirtualAddress
    )

    $savedPosition = $Reader.BaseStream.Position
    try
    {
        $Reader.BaseStream.Position = $RelativeVirtualAddress
        $byteLength = $Reader.ReadUInt32()
        $bytes = $Reader.ReadBytes($byteLength)
        return [System.Text.Encoding]::Unicode.GetString($bytes)
    }
    finally
    {
        $Reader.BaseStream.Position = $savedPosition
    }
}

function Get-RequiredStream
{
    param(
        [Parameter(Mandatory)]
        [object[]] $Streams,

        [Parameter(Mandatory)]
        [uint32] $StreamType
    )

    $stream = $Streams | Where-Object { $_.Type -eq $StreamType } | Select-Object -First 1
    if ($null -eq $stream)
    {
        throw "The minidump does not contain stream type $StreamType."
    }

    return $stream
}

$resolvedDumpPath = (Resolve-Path -LiteralPath $DumpPath).Path
$outputDirectory = Split-Path -Parent $OutputPath
if ($outputDirectory)
{
    New-Item -ItemType Directory -Path $outputDirectory -Force | Out-Null
}

$inputStream = [System.IO.File]::Open(
    $resolvedDumpPath,
    [System.IO.FileMode]::Open,
    [System.IO.FileAccess]::Read,
    [System.IO.FileShare]::Read)
$reader = [System.IO.BinaryReader]::new($inputStream)

try
{
    if ($reader.ReadUInt32() -ne $minidumpSignature)
    {
        throw "Not a minidump file: $resolvedDumpPath"
    }

    $null = $reader.ReadUInt32()
    $streamCount = $reader.ReadUInt32()
    $streamDirectoryRva = $reader.ReadUInt32()
    $null = $reader.ReadUInt32()
    $null = $reader.ReadUInt32()
    $null = $reader.ReadUInt64()

    $streams = [System.Collections.Generic.List[object]]::new()
    $reader.BaseStream.Position = $streamDirectoryRva
    for ($index = 0; $index -lt $streamCount; $index++)
    {
        $streams.Add([pscustomobject]@{
            Type = $reader.ReadUInt32()
            DataSize = $reader.ReadUInt32()
            Rva = $reader.ReadUInt32()
        })
    }

    $moduleListStream = Get-RequiredStream -Streams $streams -StreamType $moduleListStreamType
    $reader.BaseStream.Position = $moduleListStream.Rva
    $moduleCount = $reader.ReadUInt32()
    $selectedModule = $null

    for ($index = 0; $index -lt $moduleCount; $index++)
    {
        $recordStart = $reader.BaseStream.Position
        $baseAddress = $reader.ReadUInt64()
        $imageSize = $reader.ReadUInt32()
        $null = $reader.ReadUInt32()
        $timestamp = $reader.ReadUInt32()
        $nameRva = $reader.ReadUInt32()
        $modulePath = Read-MinidumpString -Reader $reader -RelativeVirtualAddress $nameRva

        if ([System.IO.Path]::GetFileName($modulePath) -ieq $ModuleName)
        {
            $selectedModule = [pscustomobject]@{
                BaseAddress = $baseAddress
                ImageSize = $imageSize
                Timestamp = $timestamp
                ModulePath = $modulePath
            }
        }

        $reader.BaseStream.Position = $recordStart + $moduleRecordSize
    }

    if ($null -eq $selectedModule)
    {
        throw "Module not found in minidump: $ModuleName"
    }

    $memoryListStream = Get-RequiredStream -Streams $streams -StreamType $memory64ListStreamType
    $reader.BaseStream.Position = $memoryListStream.Rva
    $memoryRangeCount = $reader.ReadUInt64()
    $memoryDataRva = $reader.ReadUInt64()
    $memoryRanges = [System.Collections.Generic.List[object]]::new()
    $nextFileOffset = $memoryDataRva

    for ([uint64] $index = 0; $index -lt $memoryRangeCount; $index++)
    {
        $startAddress = $reader.ReadUInt64()
        $dataSize = $reader.ReadUInt64()
        $memoryRanges.Add([pscustomobject]@{
            StartAddress = $startAddress
            DataSize = $dataSize
            FileOffset = $nextFileOffset
        })
        $nextFileOffset += $dataSize
    }

    $moduleStart = [uint64] $selectedModule.BaseAddress
    $moduleEnd = $moduleStart + [uint64] $selectedModule.ImageSize
    $resolvedOutputPath = [System.IO.Path]::GetFullPath($OutputPath)
    $outputStream = [System.IO.File]::Open(
        $resolvedOutputPath,
        [System.IO.FileMode]::Create,
        [System.IO.FileAccess]::Write,
        [System.IO.FileShare]::None)

    [uint64] $capturedBytes = 0
    try
    {
        $outputStream.SetLength($selectedModule.ImageSize)
        $buffer = [byte[]]::new($copyBufferSize)

        foreach ($range in $memoryRanges)
        {
            $rangeStart = [uint64] $range.StartAddress
            $rangeEnd = $rangeStart + [uint64] $range.DataSize
            $copyStart = [Math]::Max($moduleStart, $rangeStart)
            $copyEnd = [Math]::Min($moduleEnd, $rangeEnd)

            if ($copyStart -ge $copyEnd)
            {
                continue
            }

            $inputStream.Position = [int64] ($range.FileOffset + ($copyStart - $rangeStart))
            $outputStream.Position = [int64] ($copyStart - $moduleStart)
            [uint64] $remainingBytes = $copyEnd - $copyStart

            while ($remainingBytes -gt 0)
            {
                $requestedBytes = [int] [Math]::Min($buffer.Length, $remainingBytes)
                $readBytes = $inputStream.Read($buffer, 0, $requestedBytes)
                if ($readBytes -eq 0)
                {
                    throw 'The minidump ended before the module copy completed.'
                }

                $outputStream.Write($buffer, 0, $readBytes)
                $remainingBytes -= [uint64] $readBytes
                $capturedBytes += [uint64] $readBytes
            }
        }
    }
    finally
    {
        $outputStream.Dispose()
    }

    $metadata = [ordered]@{
        ModuleName = $ModuleName
        ModulePath = $selectedModule.ModulePath
        BaseAddress = ('0x{0:X16}' -f $moduleStart)
        ImageSize = [uint64] $selectedModule.ImageSize
        CapturedBytes = $capturedBytes
        DumpPath = $resolvedDumpPath
        DumpSha256 = (Get-FileHash -LiteralPath $resolvedDumpPath -Algorithm SHA256).Hash
        OutputPath = $resolvedOutputPath
        OutputSha256 = (Get-FileHash -LiteralPath $resolvedOutputPath -Algorithm SHA256).Hash
    }

    $metadataPath = "$resolvedOutputPath.json"
    $metadataJson = ($metadata | ConvertTo-Json) -replace "(?<!`r)`n", "`r`n"
    [System.IO.File]::WriteAllText(
        $metadataPath,
        $metadataJson + "`r`n",
        [System.Text.UTF8Encoding]::new($true))

    $metadata | Format-List
}
finally
{
    $reader.Dispose()
    $inputStream.Dispose()
}
