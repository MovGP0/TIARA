[CmdletBinding()]
param(
    [string]$DatabasePath = '.understand-anything/knowledge-graph.duckdb',
    [string]$OutputPath = 'docs/ui-controls',
    [int]$Limit = 0,
    [switch]$Force
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

function ConvertTo-Slug
{
    param(
        [AllowEmptyString()]
        [string]$Value
    )

    $slug = $Value.ToLowerInvariant() -replace '[^a-z0-9]+', '-'
    $slug = $slug.Trim('-')
    if ([string]::IsNullOrWhiteSpace($slug))
    {
        return 'control'
    }

    if ($slug.Length -gt 64)
    {
        return $slug.Substring(0, 64).TrimEnd('-')
    }

    return $slug
}

function Get-StableHash
{
    param(
        [Parameter(Mandatory)]
        [string]$Value
    )

    $bytes = [System.Text.Encoding]::UTF8.GetBytes($Value)
    $hash = [System.Security.Cryptography.SHA256]::HashData($bytes)
    return [System.Convert]::ToHexString($hash).Substring(0, 10).ToLowerInvariant()
}

function ConvertTo-MarkdownText
{
    param(
        [AllowNull()]
        [object]$Value
    )

    if ($null -eq $Value -or [string]::IsNullOrWhiteSpace([string]$Value))
    {
        return 'Not present in the recovered resource.'
    }

    return ([string]$Value).Replace('|', '\|').Replace("`r", ' ').Replace("`n", ' ')
}

function ConvertTo-MermaidLabel
{
    param(
        [AllowNull()]
        [object]$Value
    )

    if ($null -eq $Value)
    {
        return 'Unknown'
    }

    $label = ([string]$Value).Replace('"', "'")
    $label = $label.Replace("`r", ' ').Replace("`n", ' ')
    $label = $label -replace '[\[\]{}]', ' '
    if ($label.Length -gt 72)
    {
        $label = $label.Substring(0, 69) + '...'
    }

    return $label
}

function Invoke-DuckDbJson
{
    param(
        [Parameter(Mandatory)]
        [string]$Database,
        [Parameter(Mandatory)]
        [string]$Query
    )

    $duckDb = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop
    $jsonLines = & $duckDb.Source -json $Database -readonly -c $Query
    if ($LASTEXITCODE -ne 0)
    {
        throw "DuckDB query failed with exit code $LASTEXITCODE."
    }

    $jsonText = $jsonLines -join [System.Environment]::NewLine
    if ([string]::IsNullOrWhiteSpace($jsonText))
    {
        return @()
    }

    return @($jsonText | ConvertFrom-Json)
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

$resolvedDatabasePath = Resolve-ProjectPath -Path $DatabasePath -ProjectRoot $projectRoot
$resolvedOutputPath = Resolve-ProjectPath -Path $OutputPath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedDatabasePath -ProjectRoot $projectRoot
Assert-ProjectPath -Path $resolvedOutputPath -ProjectRoot $projectRoot

if (-not [System.IO.File]::Exists($resolvedDatabasePath))
{
    throw "The DuckDB graph does not exist: $resolvedDatabasePath"
}

$limitClause = ''
if ($Limit -gt 0)
{
    $limitClause = "LIMIT $Limit"
}

$controlsQuery = @"
SELECT
    row_number() OVER (
        ORDER BY evidence.form_resource, evidence.component_path
    ) AS document_order,
    evidence.*,
    handler.filePath AS handler_file_path,
    handler.recoveredRole AS recovered_role,
    handler.behavior AS handler_behavior,
    handler.evidence AS handler_evidence,
    handler.summary AS node_summary,
    handler.complexity AS handler_complexity,
    handler.outgoingCallCount AS outgoing_call_count,
    coalesce(
        (
            SELECT string_agg(layer_name, ', ' ORDER BY layer_name)
            FROM node_layers
            WHERE node_id = evidence.handler_node_id
        ),
        ''
    ) AS layer_names
FROM ui_event_resource_evidence AS evidence
LEFT JOIN nodes AS handler ON handler.id = evidence.handler_node_id
WHERE evidence.event_name = 'OnClick'
ORDER BY evidence.form_resource, evidence.component_path
$limitClause;
"@

$callsQuery = @"
WITH click_handlers AS (
    SELECT DISTINCT handler_node_id
    FROM ui_event_resource_evidence
    WHERE event_name = 'OnClick' AND resolved_function
)
SELECT
    edge.source,
    edge.target,
    target.name,
    target.recoveredRole AS recovered_role,
    target.summary,
    target.behavior,
    target.filePath AS file_path
FROM edges AS edge
JOIN click_handlers ON click_handlers.handler_node_id = edge.source
JOIN nodes AS target ON target.id = edge.target
WHERE edge.type = 'calls'
ORDER BY edge.source, edge.ordinal;
"@

$labelsQuery = @"
SELECT *
FROM ui_event_nearby_labels
WHERE event_name = 'OnClick' AND candidate_rank <= 3
ORDER BY control_node_id, candidate_rank;
"@

$glyphsQuery = @"
SELECT control_node_id, file_name
FROM ui_event_glyphs
WHERE event_name = 'OnClick'
ORDER BY control_node_id, file_name;
"@

$controls = Invoke-DuckDbJson -Database $resolvedDatabasePath -Query $controlsQuery
$calls = Invoke-DuckDbJson -Database $resolvedDatabasePath -Query $callsQuery
$labels = Invoke-DuckDbJson -Database $resolvedDatabasePath -Query $labelsQuery
$glyphs = Invoke-DuckDbJson -Database $resolvedDatabasePath -Query $glyphsQuery

$callsByHandler = @{}
foreach ($call in $calls)
{
    if (-not $callsByHandler.ContainsKey($call.source))
    {
        $callsByHandler[$call.source] = [System.Collections.Generic.List[object]]::new()
    }

    $callsByHandler[$call.source].Add($call)
}

$labelsByControl = @{}
foreach ($label in $labels)
{
    if (-not $labelsByControl.ContainsKey($label.control_node_id))
    {
        $labelsByControl[$label.control_node_id] = [System.Collections.Generic.List[object]]::new()
    }

    $labelsByControl[$label.control_node_id].Add($label)
}

$glyphsByControl = @{}
foreach ($glyph in $glyphs)
{
    if (-not $glyphsByControl.ContainsKey($glyph.control_node_id))
    {
        $glyphsByControl[$glyph.control_node_id] = [System.Collections.Generic.List[object]]::new()
    }

    $glyphsByControl[$glyph.control_node_id].Add($glyph)
}

[System.IO.Directory]::CreateDirectory($resolvedOutputPath) | Out-Null
$documents = [System.Collections.Generic.List[object]]::new()

foreach ($control in $controls)
{
    $formSlug = ConvertTo-Slug -Value $control.form_resource
    $componentName = ($control.component_path -split '\.')[-1]
    $componentSlug = ConvertTo-Slug -Value $componentName
    $stableHash = Get-StableHash -Value $control.control_node_id
    $relativeDocumentPath = "$formSlug/$componentSlug-$stableHash.md"
    $documentPath = [System.IO.Path]::Combine(
        $resolvedOutputPath,
        $relativeDocumentPath.Replace('/', [System.IO.Path]::DirectorySeparatorChar)
    )
    [System.IO.Directory]::CreateDirectory(
        [System.IO.Path]::GetDirectoryName($documentPath)
    ) | Out-Null

    $titleEvidence = $control.caption
    if ([string]::IsNullOrWhiteSpace($titleEvidence))
    {
        $titleEvidence = $control.hint
    }
    if ([string]::IsNullOrWhiteSpace($titleEvidence))
    {
        $titleEvidence = $componentName
    }

    $handlerTitle = $control.handler_name
    if ($control.resolved_function -and -not [string]::IsNullOrWhiteSpace($control.handler_address))
    {
        $handlerTitle = "FUN_$($control.handler_address)"
    }

    $sourceLink = 'No recovered source file is linked to this handler.'
    if (-not [string]::IsNullOrWhiteSpace($control.handler_file_path))
    {
        $sourceLink = "[$($control.handler_file_path)](../../../$($control.handler_file_path.Replace('\', '/')))"
    }

    $directCalls = @()
    if ($callsByHandler.ContainsKey($control.handler_node_id))
    {
        $directCalls = @($callsByHandler[$control.handler_node_id])
    }

    $nearbyLabels = @()
    if ($labelsByControl.ContainsKey($control.control_node_id))
    {
        $nearbyLabels = @($labelsByControl[$control.control_node_id])
    }

    $controlGlyphs = @()
    if ($glyphsByControl.ContainsKey($control.control_node_id))
    {
        $controlGlyphs = @($glyphsByControl[$control.control_node_id])
    }

    $lines = [System.Collections.Generic.List[string]]::new()
    $lines.Add("# $titleEvidence")
    $lines.Add('')
    $lines.Add('> Analysis status: Pending individual source review.')
    $lines.Add('')
    $lines.Add('## Control')
    $lines.Add('')
    $lines.Add('| Property | Recovered value |')
    $lines.Add('| --- | --- |')
    $lines.Add("| Form | $(ConvertTo-MarkdownText $control.form_resource) |")
    $lines.Add("| Component path | $(ConvertTo-MarkdownText $control.component_path) |")
    $lines.Add("| Control class | $(ConvertTo-MarkdownText $control.control_class) |")
    $lines.Add("| Caption | $(ConvertTo-MarkdownText $control.caption) |")
    $lines.Add("| Hint | $(ConvertTo-MarkdownText $control.hint) |")
    $lines.Add("| Text | $(ConvertTo-MarkdownText $control.control_text) |")
    $lines.Add("| Handler name | $(ConvertTo-MarkdownText $control.handler_name) |")
    $lines.Add("| Handler address | $(ConvertTo-MarkdownText $control.handler_address) |")
    $lines.Add("| Graph node | ``$($control.control_node_id)`` |")
    $lines.Add("| Handler node | ``$($control.handler_node_id)`` |")
    $lines.Add("| Graph layer | $(ConvertTo-MarkdownText $control.layer_names) |")
    $lines.Add('')
    $lines.Add('## What happens when clicked')
    $lines.Add('')
    $lines.Add('Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.')
    $lines.Add('')
    $lines.Add('## Click flow')
    $lines.Add('')
    $lines.Add('```mermaid')
    $lines.Add('flowchart LR')
    $lines.Add("    control[`"$(ConvertTo-MermaidLabel $titleEvidence)`"] -->|OnClick| handler[`"$(ConvertTo-MermaidLabel $handlerTitle)`"]")
    $callNumber = 0
    foreach ($call in $directCalls | Select-Object -First 6)
    {
        $callNumber++
        $callLabel = $call.recovered_role
        if ([string]::IsNullOrWhiteSpace($callLabel))
        {
            $callLabel = $call.name
        }
        $lines.Add("    handler --> call$callNumber[`"$(ConvertTo-MermaidLabel $callLabel)`"]")
    }
    if (-not $control.resolved_function)
    {
        $lines.Add('    handler -.-> unresolved["Recovered address not established"]')
    }
    $lines.Add('```')
    $lines.Add('')
    $lines.Add('## Handler evidence')
    $lines.Add('')
    $lines.Add("- Source: $sourceLink")
    $lines.Add("- Recovered role: $(ConvertTo-MarkdownText $control.recovered_role)")
    $lines.Add("- Current graph summary: $(ConvertTo-MarkdownText $control.node_summary)")
    $lines.Add("- Current graph behavior: $(ConvertTo-MarkdownText $control.handler_behavior)")
    $lines.Add("- Current graph evidence: $(ConvertTo-MarkdownText $control.handler_evidence)")
    $lines.Add("- Complexity: $(ConvertTo-MarkdownText $control.handler_complexity)")
    $lines.Add("- Distinct outgoing calls: $(ConvertTo-MarkdownText $control.outgoing_call_count)")
    $lines.Add('')
    $lines.Add('## Direct calls')
    $lines.Add('')
    if ($directCalls.Count -eq 0)
    {
        $lines.Add('- No direct call edge is present in the recovered graph.')
    }
    else
    {
        foreach ($call in $directCalls)
        {
            $callDescription = $call.recovered_role
            if ([string]::IsNullOrWhiteSpace($callDescription))
            {
                $callDescription = $call.summary
            }
            $lines.Add("- ``$($call.target)`` — $(ConvertTo-MarkdownText $callDescription)")
        }
    }
    $lines.Add('')
    $lines.Add('## Resource evidence')
    $lines.Add('')
    $lines.Add("- Kind: $(ConvertTo-MarkdownText $control.control_kind)")
    $lines.Add("- Modal result: $(ConvertTo-MarkdownText $control.modal_result)")
    $lines.Add("- Checked state: $(ConvertTo-MarkdownText $control.is_checked)")
    $lines.Add("- List items: $(ConvertTo-MarkdownText $control.list_items)")
    $lines.Add("- Image reference: $(ConvertTo-MarkdownText $control.image_name)")
    if ($controlGlyphs.Count -gt 0)
    {
        foreach ($glyph in $controlGlyphs)
        {
            $lines.Add("- Extracted glyph: [``$($glyph.file_name)``](../../../glyph/$($glyph.file_name))")
        }
    }
    else
    {
        $lines.Add('- Extracted glyph: None.')
    }
    $lines.Add('')
    $lines.Add('## Nearby label candidates')
    $lines.Add('')
    $lines.Add('Nearby labels are layout candidates only. They are not proof of behavior.')
    $lines.Add('')
    if ($nearbyLabels.Count -eq 0)
    {
        $lines.Add('- No same-parent label candidate is available.')
    }
    else
    {
        foreach ($label in $nearbyLabels)
        {
            $lines.Add("- Rank $($label.candidate_rank): $(ConvertTo-MarkdownText $label.label_caption) at distance $($label.coordinate_distance).")
        }
    }
    $lines.Add('')
    $lines.Add('## Analysis limits')
    $lines.Add('')
    $lines.Add('- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.')
    $lines.Add('- Do not replace the pending status until the handler source and relevant call path provide enough evidence.')

    if ($Force -or -not [System.IO.File]::Exists($documentPath))
    {
        $lines -join "`r`n" | Out-File -LiteralPath $documentPath -Encoding utf8BOM
    }
    $documents.Add([pscustomobject]@{
        Order = [int]$control.document_order
        Form = $control.form_resource
        Component = $control.component_path
        Caption = $titleEvidence
        ControlClass = $control.control_class
        Handler = $handlerTitle
        ControlNode = $control.control_node_id
        HandlerNode = $control.handler_node_id
        Resolved = [bool]$control.resolved_function
        RelativePath = $relativeDocumentPath
    })
}

$forms = $documents | Group-Object Form | Sort-Object Name
foreach ($form in $forms)
{
    $formSlug = ConvertTo-Slug -Value $form.Name
    $formIndexPath = [System.IO.Path]::Combine($resolvedOutputPath, $formSlug, 'README.md')
    $formLines = [System.Collections.Generic.List[string]]::new()
    $formLines.Add("# $($form.Name) controls")
    $formLines.Add('')
    $formLines.Add("Identified OnClick controls: $($form.Count).")
    $formLines.Add('')
    foreach ($document in $form.Group | Sort-Object Component)
    {
        $fileName = [System.IO.Path]::GetFileName($document.RelativePath)
        $formLines.Add("- [$($document.Caption)]($fileName) — ``$($document.Component)``")
    }
    $formLines -join "`r`n" | Out-File -LiteralPath $formIndexPath -Encoding utf8BOM
}

$rootIndexPath = [System.IO.Path]::Combine($resolvedOutputPath, 'README.md')
$rootLines = [System.Collections.Generic.List[string]]::new()
$rootLines.Add('# TINA UI control click documentation')
$rootLines.Add('')
$rootLines.Add('Each article documents one recovered Delphi control with an OnClick binding. The bootstrap data comes from the DuckDB knowledge graph. Each behavior explanation requires a separate source review.')
$rootLines.Add('')
$rootLines.Add("- Total controls: $($documents.Count)")
$rootLines.Add("- Resolved handlers: $(($documents | Where-Object Resolved).Count)")
$rootLines.Add("- Unresolved handlers: $(($documents | Where-Object { -not $_.Resolved }).Count)")
$rootLines.Add("- Forms: $($forms.Count)")
$rootLines.Add('')
$rootLines.Add('## Forms')
$rootLines.Add('')
foreach ($form in $forms)
{
    $formSlug = ConvertTo-Slug -Value $form.Name
    $rootLines.Add("- [$($form.Name)]($formSlug/README.md) — $($form.Count) controls")
}
$rootLines -join "`r`n" | Out-File -LiteralPath $rootIndexPath -Encoding utf8BOM

$manifestPath = [System.IO.Path]::Combine($resolvedOutputPath, 'manifest.json')
$documents |
    Sort-Object Order |
    ConvertTo-Json -Depth 4 |
    Out-File -LiteralPath $manifestPath -Encoding utf8BOM

Write-Output "Control documents: $($documents.Count)"
Write-Output "Form indexes: $($forms.Count)"
Write-Output "Output: $resolvedOutputPath"
