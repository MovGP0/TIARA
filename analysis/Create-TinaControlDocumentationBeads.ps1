[CmdletBinding()]
param(
    [string]$ManifestPath = 'docs/ui-controls/manifest.json',
    [string]$ParentIssue = 'TIARA-diz.6.7',
    [string]$OutputPath = 'docs/ui-controls/beads.json',
    [int]$Limit = 0,
    [int]$ProgressInterval = 25
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

function Get-ExternalReference
{
    param(
        [Parameter(Mandatory)]
        [string]$RelativePath
    )

    $fileName = [System.IO.Path]::GetFileNameWithoutExtension($RelativePath)
    $stableHash = ($fileName -split '-')[-1]
    return "tiara-ui-control:$stableHash"
}

function Get-IssueTitle
{
    param(
        [Parameter(Mandatory)]
        [object]$Document
    )

    $componentName = ($Document.Component -split '\.')[-1]
    $title = "control: $($Document.Form) / $componentName click behavior"
    if ($title.Length -gt 120)
    {
        return $title.Substring(0, 117) + '...'
    }

    return $title
}

$projectRoot = [System.IO.Path]::GetFullPath(
    [System.IO.Path]::Combine($PSScriptRoot, '..')
)
if ([System.IO.Path]::GetFileName($projectRoot) -eq '.temp')
{
    $projectRoot = [System.IO.Path]::GetFullPath(
        [System.IO.Path]::Combine($projectRoot, '..')
    )
}

$resolvedManifestPath = Resolve-ProjectPath -Path $ManifestPath -ProjectRoot $projectRoot
$resolvedOutputPath = Resolve-ProjectPath -Path $OutputPath -ProjectRoot $projectRoot
if (-not [System.IO.File]::Exists($resolvedManifestPath))
{
    throw "The control-document manifest does not exist: $resolvedManifestPath"
}

$bd = Get-Command 'bd' -CommandType Application -ErrorAction Stop |
    Select-Object -First 1
$documents = @(Get-Content -Raw -LiteralPath $resolvedManifestPath | ConvertFrom-Json)
if ($Limit -gt 0)
{
    $documents = @($documents | Select-Object -First $Limit)
}

$existingJson = & $bd.Source list --parent $ParentIssue --all --limit 0 --json
if ($LASTEXITCODE -ne 0)
{
    throw "Could not read child issues for $ParentIssue."
}

$existingIssues = @()
$existingText = $existingJson -join [System.Environment]::NewLine
if (-not [string]::IsNullOrWhiteSpace($existingText))
{
    $existingIssues = @($existingText | ConvertFrom-Json)
}

$issuesByExternalReference = @{}
foreach ($issue in $existingIssues)
{
    $externalReferenceProperty = $issue.PSObject.Properties['external_reference']
    if ($null -eq $externalReferenceProperty)
    {
        $externalReferenceProperty = $issue.PSObject.Properties['external_ref']
    }

    if ($null -ne $externalReferenceProperty -and
        -not [string]::IsNullOrWhiteSpace([string]$externalReferenceProperty.Value))
    {
        $issuesByExternalReference[[string]$externalReferenceProperty.Value] = $issue
    }
}

$mappings = [System.Collections.Generic.List[object]]::new()
$createdCount = 0
$existingCount = 0
$processedCount = 0

foreach ($document in $documents)
{
    $processedCount++
    $externalReference = Get-ExternalReference -RelativePath $document.RelativePath
    $issue = $null
    if ($issuesByExternalReference.ContainsKey($externalReference))
    {
        $issue = $issuesByExternalReference[$externalReference]
        $existingCount++
    }
    else
    {
        $title = Get-IssueTitle -Document $document
        $description = @"
Review one recovered Delphi UI control and complete its click-behavior article.

Document: docs/ui-controls/$($document.RelativePath)
Control: $($document.Component)
Control graph node: $($document.ControlNode)
Handler graph node: $($document.HandlerNode)

Use the Understand Explain graph neighborhood, the recovered handler source, relevant callees, UI resource text, and glyph evidence. Do not infer behavior from a caption, hint, glyph, or nearby label alone.
"@
        $acceptance = 'Replace the pending analysis with a specific evidence-backed explanation. Describe inputs, decisions, state changes, outputs, and error or no-op behavior. Update the Mermaid click flow to match the proven call path. Keep unknown behavior explicit. Validate Markdown links and Mermaid fences.'
        $metadata = @{
            controlNode = $document.ControlNode
            handlerNode = $document.HandlerNode
            documentPath = "docs/ui-controls/$($document.RelativePath)"
            documentOrder = $document.Order
        } | ConvertTo-Json -Compress

        $issueId = & $bd.Source create `
            --silent `
            --title $title `
            --description $description `
            --acceptance $acceptance `
            --type task `
            --priority 2 `
            --parent $ParentIssue `
            --external-ref $externalReference `
            --metadata $metadata `
            --spec-id "docs/ui-controls/$($document.RelativePath)" `
            --labels 'ui-control-documentation' `
            --skills 'understand-anything:understand-explain,mermaid'
        if ($LASTEXITCODE -ne 0 -or [string]::IsNullOrWhiteSpace($issueId))
        {
            throw "Could not create the issue for $($document.Component)."
        }

        $issue = [pscustomobject]@{
            id = $issueId.Trim()
            external_ref = $externalReference
            status = 'open'
            title = $title
        }
        $issuesByExternalReference[$externalReference] = $issue
        $createdCount++
    }

    $mappings.Add([pscustomobject]@{
        Order = $document.Order
        IssueId = $issue.id
        Status = $issue.status
        ExternalReference = $externalReference
        Form = $document.Form
        Component = $document.Component
        HandlerNode = $document.HandlerNode
        RelativePath = $document.RelativePath
    })

    if ($ProgressInterval -gt 0 -and $processedCount % $ProgressInterval -eq 0)
    {
        Write-Output "Processed $processedCount of $($documents.Count); created $createdCount; existing $existingCount."
    }
}

[System.IO.Directory]::CreateDirectory(
    [System.IO.Path]::GetDirectoryName($resolvedOutputPath)
) | Out-Null
$mappings |
    Sort-Object Order |
    ConvertTo-Json -Depth 4 |
    Out-File -LiteralPath $resolvedOutputPath -Encoding utf8BOM

Write-Output "Control issues: $($mappings.Count)"
Write-Output "Created: $createdCount"
Write-Output "Existing: $existingCount"
Write-Output "Mapping: $resolvedOutputPath"
