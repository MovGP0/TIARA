[CmdletBinding()]
param(
    [string]$DatabasePath = '.understand-anything/knowledge-graph.duckdb',
    [string]$DocumentationBeadsPath = 'docs/ui-controls/beads.json',
    [string]$ParentIssue = 'TIARA-diz.7.2',
    [string]$StagingPath = '.temp/tina-function-translation-beads.jsonl',
    [int]$Limit = 0,
    [ValidateRange(1, 10000)]
    [int]$ImportBatchSize = 5000,
    [ValidateRange(1, 10000)]
    [int]$DependencyBatchSize = 5000,
    [switch]$DryRun,
    [switch]$KeepStagingFiles
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

function ConvertTo-SqlLiteral
{
    param(
        [Parameter(Mandatory)]
        [string]$Value
    )

    return $Value.Replace('\', '/').Replace("'", "''")
}

function Test-IsChildPath
{
    param(
        [Parameter(Mandatory)]
        [string]$Path,
        [Parameter(Mandatory)]
        [string]$ParentPath
    )

    $resolvedPath = [System.IO.Path]::GetFullPath($Path)
    $resolvedParent = [System.IO.Path]::GetFullPath($ParentPath)
    $relativePath = [System.IO.Path]::GetRelativePath($resolvedParent, $resolvedPath)
    return -not [System.IO.Path]::IsPathRooted($relativePath) -and
        $relativePath -ne '..' -and
        -not $relativePath.StartsWith(
            "..$([System.IO.Path]::DirectorySeparatorChar)",
            [System.StringComparison]::Ordinal
        )
}

$projectRoot = [System.IO.Path]::GetFullPath(
    [System.IO.Path]::Combine($PSScriptRoot, '..')
)
$resolvedDatabasePath = Resolve-ProjectPath -Path $DatabasePath -ProjectRoot $projectRoot
$resolvedDocumentationBeadsPath = Resolve-ProjectPath `
    -Path $DocumentationBeadsPath `
    -ProjectRoot $projectRoot
$resolvedStagingPath = Resolve-ProjectPath -Path $StagingPath -ProjectRoot $projectRoot
$temporaryRoot = Resolve-ProjectPath -Path '.temp' -ProjectRoot $projectRoot
$groupMappingPath = Resolve-ProjectPath `
    -Path '.temp/tina-function-translation-groups.json' `
    -ProjectRoot $projectRoot
$existingIssuesPath = Resolve-ProjectPath `
    -Path '.temp/tina-existing-issues.jsonl' `
    -ProjectRoot $projectRoot
$missingIssuesPath = Resolve-ProjectPath `
    -Path '.temp/tina-function-translation-missing.jsonl' `
    -ProjectRoot $projectRoot
$batchIssuesPath = Resolve-ProjectPath `
    -Path '.temp/tina-function-translation-batch.jsonl' `
    -ProjectRoot $projectRoot
$missingDependenciesPath = Resolve-ProjectPath `
    -Path '.temp/tina-function-translation-missing-dependencies.jsonl' `
    -ProjectRoot $projectRoot
$batchDependenciesPath = Resolve-ProjectPath `
    -Path '.temp/tina-function-translation-dependency-batch.jsonl' `
    -ProjectRoot $projectRoot

if (-not [System.IO.File]::Exists($resolvedDatabasePath))
{
    throw "The knowledge graph database does not exist: $resolvedDatabasePath"
}

if (-not [System.IO.File]::Exists($resolvedDocumentationBeadsPath))
{
    throw "The UI-control Bead mapping does not exist: $resolvedDocumentationBeadsPath"
}

if (-not (Test-IsChildPath -Path $resolvedStagingPath -ParentPath $temporaryRoot))
{
    throw "The staging file must be below $temporaryRoot."
}

if (-not (Test-IsChildPath -Path $groupMappingPath -ParentPath $temporaryRoot))
{
    throw "The group mapping file must be below $temporaryRoot."
}

foreach ($temporaryPath in @(
    $existingIssuesPath,
    $missingIssuesPath,
    $batchIssuesPath,
    $missingDependenciesPath,
    $batchDependenciesPath
))
{
    if (-not (Test-IsChildPath -Path $temporaryPath -ParentPath $temporaryRoot))
    {
        throw "The generated file must be below ${temporaryRoot}: $temporaryPath"
    }
}

$bd = Get-Command 'bd' -CommandType Application -ErrorAction Stop |
    Select-Object -First 1
$duckDb = Get-Command 'duckdb' -CommandType Application -ErrorAction Stop |
    Select-Object -First 1

$groupQuery = @'
SELECT
    substr(address, 1, 3) AS prefix,
    count() AS function_count
FROM nodes
WHERE type = 'function'
GROUP BY ALL
ORDER BY ALL;
'@
$groupJson = & $duckDb.Source $resolvedDatabasePath -readonly -json -c $groupQuery
if ($LASTEXITCODE -ne 0)
{
    throw 'Could not query the recovered function address groups.'
}

$groupRows = @($groupJson -join [System.Environment]::NewLine | ConvertFrom-Json)
$existingGroupJson = & $bd.Source list `
    --parent $ParentIssue `
    --all `
    --limit 0 `
    --json
if ($LASTEXITCODE -ne 0)
{
    throw "Could not read the existing children of $ParentIssue."
}

$existingGroups = @()
$existingGroupText = $existingGroupJson -join [System.Environment]::NewLine
if (-not [string]::IsNullOrWhiteSpace($existingGroupText))
{
    $existingGroups = @($existingGroupText | ConvertFrom-Json)
}

$groupsByExternalReference = @{}
foreach ($existingGroup in $existingGroups)
{
    $externalReferenceProperty = $existingGroup.PSObject.Properties['external_ref']
    if ($null -eq $externalReferenceProperty)
    {
        $externalReferenceProperty = $existingGroup.PSObject.Properties['external_reference']
    }

    if ($null -ne $externalReferenceProperty -and
        -not [string]::IsNullOrWhiteSpace([string]$externalReferenceProperty.Value))
    {
        $groupsByExternalReference[[string]$externalReferenceProperty.Value] = $existingGroup
    }
}

$groupMappings = [System.Collections.Generic.List[object]]::new()
foreach ($groupRow in $groupRows)
{
    $prefix = [string]$groupRow.prefix
    $functionCount = [int]$groupRow.function_count
    $externalReference = "tiara-function-group:$prefix"
    $groupIssue = $null

    if ($groupsByExternalReference.ContainsKey($externalReference))
    {
        $groupIssue = $groupsByExternalReference[$externalReference]
    }
    else
    {
        $groupTitle = "rust: Translate recovered functions in address group $prefix"
        $groupDescription = @"
Coordinate the Rust translation tasks for the $functionCount recovered functions whose addresses start with $prefix.

Each child task represents one Ghidra-C function. Use the recovered responsibility, the linked specifications, and the graph evidence to implement original Rust behavior. Do not copy the decompiled C text.
"@
        $groupAcceptance = 'Resolve every function child through an original Rust implementation or a documented standard-library, iced, or established-crate mapping. Require trace comments, tests, and the workspace quality gates.'
        $groupDesign = 'Use iced for GUI behavior. Prefer maintained Rust libraries over custom infrastructure. Preserve the recovered function address and symbol in Rust documentation comments.'

        $groupIssueId = & $bd.Source create `
            --silent `
            --title $groupTitle `
            --description $groupDescription `
            --acceptance $groupAcceptance `
            --design $groupDesign `
            --type epic `
            --priority 2 `
            --parent $ParentIssue `
            --external-ref $externalReference `
            --labels 'function-translation-group,rust'
        if ($LASTEXITCODE -ne 0 -or [string]::IsNullOrWhiteSpace($groupIssueId))
        {
            throw "Could not create the translation group for prefix $prefix."
        }

        $groupIssue = [pscustomobject]@{
            id = $groupIssueId.Trim()
            external_ref = $externalReference
        }
        $groupsByExternalReference[$externalReference] = $groupIssue
    }

    $groupMappings.Add([pscustomobject]@{
        prefix = $prefix
        issue_id = [string]$groupIssue.id
        function_count = $functionCount
    })
}

[System.IO.Directory]::CreateDirectory($temporaryRoot) | Out-Null
$groupMappings |
    ConvertTo-Json -Depth 4 |
    Out-File -LiteralPath $groupMappingPath -Encoding utf8BOM

if ([System.IO.File]::Exists($resolvedStagingPath))
{
    [System.IO.File]::Delete($resolvedStagingPath)
}

$documentationSqlPath = ConvertTo-SqlLiteral -Value $resolvedDocumentationBeadsPath
$groupMappingSqlPath = ConvertTo-SqlLiteral -Value $groupMappingPath
$stagingSqlPath = ConvertTo-SqlLiteral -Value $resolvedStagingPath
$limitClause = if ($Limit -gt 0) { "LIMIT $Limit" } else { '' }

$copyQuery = @'
COPY (
    WITH
    translation_group_root AS (
        SELECT unnest(json) AS translation_group
        FROM read_json_auto('__GROUP_MAPPING_SQL_PATH__')
    ),
    translation_groups AS (
        SELECT
            translation_group.prefix AS prefix,
            translation_group.issue_id AS issue_id
        FROM translation_group_root
    ),
    documentation_root AS (
        SELECT unnest(json) AS document
        FROM read_json_auto('__DOCUMENTATION_SQL_PATH__')
    ),
    documentation AS (
        SELECT
            document.IssueId AS bead_id,
            document.Component AS control_id,
            document.HandlerNode AS handler_node,
            'docs/ui-controls/' || document.RelativePath AS document_path
        FROM documentation_root
    ),
    annotation_summary AS (
        SELECT
            address,
            max(recovered_role) FILTER (WHERE recovered_role IS NOT NULL) AS recovered_role,
            max(likely_delphi_name) FILTER (WHERE likely_delphi_name IS NOT NULL) AS likely_delphi_name,
            max(framework) FILTER (WHERE framework IS NOT NULL) AS framework,
            max(api_category) FILTER (WHERE api_category IS NOT NULL) AS api_category,
            max(ui_role) FILTER (WHERE ui_role IS NOT NULL) AS ui_role,
            max(behavior) FILTER (WHERE behavior IS NOT NULL) AS behavior,
            max(evidence) FILTER (WHERE evidence IS NOT NULL) AS evidence,
            count() AS annotation_count
        FROM function_annotations
        GROUP BY address
    ),
    annotation_document_links AS (
        SELECT
            annotations.address,
            annotations.bead_id,
            annotations.control_id,
            documentation.document_path
        FROM function_annotations AS annotations
        LEFT JOIN documentation
            ON documentation.bead_id = annotations.bead_id
    ),
    handler_document_links AS (
        SELECT
            substr(handler_node, 10) AS address,
            bead_id,
            control_id,
            document_path
        FROM documentation
        WHERE starts_with(handler_node, 'function:')
    ),
    function_document_links AS (
        SELECT * FROM annotation_document_links
        UNION
        SELECT * FROM handler_document_links
    ),
    document_summary AS (
        SELECT
            address,
            list(DISTINCT bead_id ORDER BY bead_id) AS related_beads,
            list(DISTINCT control_id ORDER BY control_id) AS related_controls,
            list(DISTINCT document_path ORDER BY document_path)
                FILTER (WHERE document_path IS NOT NULL) AS related_documents
        FROM function_document_links
        GROUP BY address
    ),
    caller_counts AS (
        SELECT
            substr(target, 10) AS address,
            count(DISTINCT source) AS caller_count
        FROM function_calls
        WHERE starts_with(target, 'function:')
        GROUP BY address
    ),
    callee_counts AS (
        SELECT
            substr(source, 10) AS address,
            count(DISTINCT target) AS callee_count
        FROM function_calls
        WHERE starts_with(source, 'function:')
        GROUP BY address
    ),
    ui_event_counts AS (
        SELECT handler_address AS address, count() AS ui_event_count
        FROM ui_event_resource_evidence
        WHERE handler_address IS NOT NULL
        GROUP BY handler_address
    ),
    enriched_functions AS (
        SELECT
            nodes.*,
            groups.issue_id AS group_issue_id,
            coalesce(nodes.recoveredRole, annotations.recovered_role) AS recovered_role,
            coalesce(nodes.likelyDelphiName, annotations.likely_delphi_name)
                AS likely_delphi_name,
            coalesce(nodes.framework, annotations.framework) AS recovered_framework,
            coalesce(nodes.apiCategory, annotations.api_category) AS recovered_api_category,
            coalesce(nodes.uiRole, annotations.ui_role) AS recovered_ui_role,
            coalesce(nodes.behavior, annotations.behavior) AS recovered_behavior,
            coalesce(nodes.evidence, annotations.evidence) AS recovered_evidence,
            coalesce(annotations.annotation_count, 0) AS annotation_count,
            coalesce(callers.caller_count, 0) AS caller_count,
            coalesce(callees.callee_count, 0) AS callee_count,
            coalesce(events.ui_event_count, 0) AS ui_event_count,
            documents.related_beads,
            documents.related_controls,
            documents.related_documents
        FROM nodes
        JOIN translation_groups AS groups
            ON groups.prefix = substr(nodes.address, 1, 3)
        LEFT JOIN annotation_summary AS annotations
            ON annotations.address = nodes.address
        LEFT JOIN caller_counts AS callers
            ON callers.address = nodes.address
        LEFT JOIN callee_counts AS callees
            ON callees.address = nodes.address
        LEFT JOIN ui_event_counts AS events
            ON events.address = nodes.address
        LEFT JOIN document_summary AS documents
            ON documents.address = nodes.address
        WHERE nodes.type = 'function'
    ),
    issue_rows AS (
        SELECT
            'TIARA-f' || address AS issue_id,
            left('rust: Translate ' || address || ' ' || name, 120) AS issue_title,
            *
        FROM enriched_functions
        ORDER BY address
        __LIMIT_CLAUSE__
    )
    SELECT
        issue_id AS id,
        issue_title AS title,
        concat(
            'Translate the recovered responsibility of this Ghidra-C function into original Rust code.', chr(10), chr(10),
            'Recovered function: `', name, '`', chr(10),
            'Address: `0x', upper(address), '`', chr(10),
            'Graph node: `', id, '`', chr(10),
            'Ghidra-C evidence: `', filePath, '`', chr(10),
            'Architecture layer: ', coalesce(architectureLayer, 'tina.exe'), chr(10),
            'Complexity: ', coalesce(complexity, 'unknown'), chr(10),
            'Direct callers: ', caller_count::VARCHAR, chr(10),
            'Direct callees: ', callee_count::VARCHAR, chr(10),
            'Linked UI events: ', ui_event_count::VARCHAR, chr(10),
            'Function annotations: ', annotation_count::VARCHAR, chr(10), chr(10),
            'Recovered summary: ', coalesce(summary, 'Not available.'), chr(10),
            'Recovered role: ', coalesce(recovered_role, 'Not available.'), chr(10),
            'Likely Delphi name: ', coalesce(likely_delphi_name, 'Not available.'), chr(10),
            'Framework: ', coalesce(recovered_framework, 'Not available.'), chr(10),
            'API category: ', coalesce(recovered_api_category, 'Not available.'), chr(10),
            'UI role: ', coalesce(recovered_ui_role, 'Not available.'), chr(10),
            'Behavior: ', coalesce(recovered_behavior, 'Not available.'), chr(10),
            'Evidence: ', coalesce(recovered_evidence, 'No accepted function annotation is available.'), chr(10), chr(10),
            'Related reviewed specifications:', chr(10),
            coalesce(
                array_to_string(
                    list_transform(related_documents, lambda document: '- `' || document || '`'),
                    chr(10)
                ),
                '- No reviewed UI-control article is linked to this function.'
            ), chr(10), chr(10),
            'Implementation requirements:', chr(10),
            '- Implement the documented responsibility with original Rust code. Do not transcribe the decompiled C body.', chr(10),
            '- Add a Rust documentation comment that names Ghidra function `0x', upper(address), '` and symbol `', name, '`.', chr(10),
            '- Use `iced` for GUI state, messages, commands, subscriptions, widgets, and windows.', chr(10),
            '- Check the Rust standard library and maintained Rust crates before writing custom infrastructure.', chr(10),
            '- When a library already provides the responsibility, implement only the adapter and record the library mapping.', chr(10),
            '- Preserve observable inputs, decisions, state changes, outputs, errors, and no-op behavior from the linked specifications.', chr(10),
            '- Keep proprietary Ghidra output and extracted assets outside distributable Rust crates.'
        ) AS description,
        concat(
            'Treat the Ghidra address, symbol, source path, graph data, annotations, and reviewed Markdown as trace evidence. ',
            'Implement an idiomatic Rust responsibility, not a line-by-line port. ',
            'Use iced for all GUI behavior. Prefer composition and established crates. ',
            'A standard-library, iced, or maintained-crate mapping is a valid resolution when it fully supplies the behavior.'
        ) AS design,
        concat(
            'Provide an original Rust method, function, type, adapter, or explicit library mapping for `0x', upper(address), '`. ',
            'The Rust documentation comment must retain the original address and symbol. ',
            'Trace tests to the recovered responsibility and linked specifications. ',
            'For GUI work, use iced and test the update logic without requiring a live window. ',
            'Record the evaluated Rust library and why it was selected or rejected. ',
            'Pass `cargo fmt --all -- --check`, `cargo check --workspace`, `cargo test --workspace`, and ',
            '`cargo clippy --workspace --all-targets -- -D warnings`. ',
            'Do not include proprietary source text or assets in the Rust implementation.'
        ) AS acceptance_criteria,
        'open' AS status,
        CASE
            WHEN architectureLayer = 'UI' OR related_documents IS NOT NULL THEN 1
            WHEN complexity = 'complex' THEN 2
            ELSE 3
        END AS priority,
        'task' AS issue_type,
        'tiara-function:' || address AS external_ref,
        []::VARCHAR[] AS labels,
        []::STRUCT(issue_id VARCHAR, depends_on_id VARCHAR, "type" VARCHAR)[] AS dependencies,
        CASE
            WHEN related_documents IS NOT NULL THEN related_documents[1]
            ELSE NULL
        END AS spec_id,
        struct_pack(
            address := address,
            functionNode := id,
            recoveredName := name,
            ghidraCPath := filePath,
            addressGroup := substr(address, 1, 3),
            architectureLayer := coalesce(architectureLayer, 'tina.exe'),
            complexity := complexity,
            outgoingCallCount := outgoingCallCount,
            callerCount := caller_count,
            calleeCount := callee_count,
            uiEventCount := ui_event_count,
            annotationCount := annotation_count,
            recoveredRole := recovered_role,
            likelyDelphiName := likely_delphi_name,
            framework := recovered_framework,
            apiCategory := recovered_api_category,
            uiRole := recovered_ui_role,
            relatedControlBeads := coalesce(related_beads, []::VARCHAR[]),
            relatedControls := coalesce(related_controls, []::VARCHAR[]),
            relatedDocumentation := coalesce(related_documents, []::VARCHAR[]),
            guiFramework := 'iced',
            implementationLanguage := 'Rust'
        ) AS metadata
    FROM issue_rows
) TO '__STAGING_SQL_PATH__' (FORMAT JSON, ARRAY false);
'@
$copyQuery = $copyQuery.Replace('__GROUP_MAPPING_SQL_PATH__', $groupMappingSqlPath)
$copyQuery = $copyQuery.Replace('__DOCUMENTATION_SQL_PATH__', $documentationSqlPath)
$copyQuery = $copyQuery.Replace('__STAGING_SQL_PATH__', $stagingSqlPath)
$copyQuery = $copyQuery.Replace('__LIMIT_CLAUSE__', $limitClause)

& $duckDb.Source $resolvedDatabasePath -readonly -c $copyQuery
if ($LASTEXITCODE -ne 0)
{
    throw 'Could not generate the function-translation Bead import file.'
}

$stagedCountQuery = "SELECT count() AS issue_count FROM read_json_auto('$stagingSqlPath', format = 'newline_delimited');"
$stagedCountJson = & $duckDb.Source :memory: -json -c $stagedCountQuery
if ($LASTEXITCODE -ne 0)
{
    throw 'Could not validate the generated function-translation Bead file.'
}

$stagedCountRows = @($stagedCountJson -join [System.Environment]::NewLine | ConvertFrom-Json)
$stagedCount = [int]$stagedCountRows[0].issue_count
Write-Output "Address groups: $($groupMappings.Count)"
Write-Output "Staged function issues: $stagedCount"

foreach ($generatedPath in @(
    $existingIssuesPath,
    $missingIssuesPath,
    $batchIssuesPath,
    $missingDependenciesPath,
    $batchDependenciesPath
))
{
    if ([System.IO.File]::Exists($generatedPath))
    {
        [System.IO.File]::Delete($generatedPath)
    }
}

& $bd.Source export --output $existingIssuesPath
if ($LASTEXITCODE -ne 0)
{
    throw 'Could not export the existing Beads for the resumable batch import.'
}

$existingIssuesSqlPath = ConvertTo-SqlLiteral -Value $existingIssuesPath
$missingIssuesSqlPath = ConvertTo-SqlLiteral -Value $missingIssuesPath
$missingIssueQuery = @'
COPY (
    WITH existing_function_issues AS (
        SELECT external_ref
        FROM read_json_auto('__EXISTING_ISSUES_SQL_PATH__', format = 'newline_delimited')
        WHERE starts_with(external_ref, 'tiara-function:')
    )
    SELECT staged.*
    FROM read_json_auto('__STAGING_SQL_PATH__', format = 'newline_delimited') AS staged
    WHERE NOT EXISTS (
        SELECT 1
        FROM existing_function_issues AS existing
        WHERE existing.external_ref = staged.external_ref
    )
    ORDER BY metadata.address
) TO '__MISSING_ISSUES_SQL_PATH__' (FORMAT JSON, ARRAY false);
'@
$missingIssueQuery = $missingIssueQuery.Replace(
    '__EXISTING_ISSUES_SQL_PATH__',
    $existingIssuesSqlPath
)
$missingIssueQuery = $missingIssueQuery.Replace('__STAGING_SQL_PATH__', $stagingSqlPath)
$missingIssueQuery = $missingIssueQuery.Replace(
    '__MISSING_ISSUES_SQL_PATH__',
    $missingIssuesSqlPath
)

& $duckDb.Source :memory: -c $missingIssueQuery
if ($LASTEXITCODE -ne 0)
{
    throw 'Could not generate the resumable function-translation import rows.'
}

$missingCountQuery = "SELECT count() AS issue_count FROM read_json_auto('$missingIssuesSqlPath', format = 'newline_delimited');"
$missingCountJson = & $duckDb.Source :memory: -json -c $missingCountQuery
if ($LASTEXITCODE -ne 0)
{
    throw 'Could not count the remaining function-translation import rows.'
}

$missingCountRows = @($missingCountJson -join [System.Environment]::NewLine | ConvertFrom-Json)
$missingCount = [int]$missingCountRows[0].issue_count
Write-Output "Existing function issues: $($stagedCount - $missingCount)"
Write-Output "Function issues to import: $missingCount"

if ($missingCount -gt 0)
{
    $utf8WithoutBom = [System.Text.UTF8Encoding]::new($false)
    $reader = [System.IO.StreamReader]::new(
        $missingIssuesPath,
        $utf8WithoutBom,
        $true
    )
    try
    {
        $batchIndex = 0
        $processedCount = 0
        while (-not $reader.EndOfStream)
        {
            $writer = [System.IO.StreamWriter]::new(
                $batchIssuesPath,
                $false,
                $utf8WithoutBom
            )
            $batchCount = 0
            try
            {
                while ($batchCount -lt $ImportBatchSize -and -not $reader.EndOfStream)
                {
                    $line = $reader.ReadLine()
                    if ([string]::IsNullOrWhiteSpace($line))
                    {
                        continue
                    }

                    $writer.WriteLine($line)
                    $batchCount++
                }
            }
            finally
            {
                $writer.Dispose()
            }

            if ($batchCount -eq 0)
            {
                continue
            }

            $batchIndex++
            $importArguments = [System.Collections.Generic.List[string]]::new()
            $importArguments.Add('import')
            $importArguments.Add($batchIssuesPath)
            $importArguments.Add('--json')
            $importArguments.Add('--bulk-create-only')
            if ($DryRun)
            {
                $importArguments.Add('--dry-run')
            }

            $importArgumentArray = $importArguments.ToArray()
            & $bd.Source @importArgumentArray | Out-Null
            if ($LASTEXITCODE -ne 0)
            {
                throw "Could not import function-translation batch $batchIndex."
            }

            $processedCount += $batchCount
            Write-Output (
                "Processed batch {0}: {1} rows ({2}/{3})." -f
                    $batchIndex,
                    $batchCount,
                    $processedCount,
                    $missingCount
            )
        }
    }
    finally
    {
        $reader.Dispose()
    }
}

if (-not $DryRun)
{
    & $bd.Source export --output $existingIssuesPath
    if ($LASTEXITCODE -ne 0)
    {
        throw 'Could not export the imported Beads for parent-child wiring.'
    }

    $missingDependenciesSqlPath = ConvertTo-SqlLiteral -Value $missingDependenciesPath
    $dependencyQuery = @'
COPY (
    WITH
    translation_group_root AS (
        SELECT unnest(json) AS translation_group
        FROM read_json_auto('__GROUP_MAPPING_SQL_PATH__')
    ),
    translation_groups AS (
        SELECT
            translation_group.prefix AS prefix,
            translation_group.issue_id AS issue_id
        FROM translation_group_root
    ),
    function_issues AS (
        SELECT
            id,
            metadata.address AS address,
            dependencies
        FROM read_json_auto('__EXISTING_ISSUES_SQL_PATH__', format = 'newline_delimited')
        WHERE starts_with(external_ref, 'tiara-function:')
    )
    SELECT
        function_issue.id AS "from",
        translation_group.issue_id AS "to",
        'parent-child' AS "type"
    FROM function_issues AS function_issue
    INNER JOIN translation_groups AS translation_group
        ON translation_group.prefix = substr(function_issue.address, 1, 3)
    WHERE NOT EXISTS (
        SELECT 1
        FROM unnest(function_issue.dependencies) AS dependency(value)
        WHERE dependency.value.depends_on_id = translation_group.issue_id
          AND dependency.value.type = 'parent-child'
    )
    ORDER BY function_issue.address
) TO '__MISSING_DEPENDENCIES_SQL_PATH__' (FORMAT JSON, ARRAY false);
'@
    $dependencyQuery = $dependencyQuery.Replace(
        '__GROUP_MAPPING_SQL_PATH__',
        $groupMappingSqlPath
    )
    $dependencyQuery = $dependencyQuery.Replace(
        '__EXISTING_ISSUES_SQL_PATH__',
        $existingIssuesSqlPath
    )
    $dependencyQuery = $dependencyQuery.Replace(
        '__MISSING_DEPENDENCIES_SQL_PATH__',
        $missingDependenciesSqlPath
    )

    & $duckDb.Source :memory: -c $dependencyQuery
    if ($LASTEXITCODE -ne 0)
    {
        throw 'Could not generate the missing parent-child dependency rows.'
    }

    $missingDependencyCountQuery = "SELECT count() AS dependency_count FROM read_json_auto('$missingDependenciesSqlPath', format = 'newline_delimited');"
    $missingDependencyCountJson = & $duckDb.Source :memory: -json -c $missingDependencyCountQuery
    if ($LASTEXITCODE -ne 0)
    {
        throw 'Could not count the missing parent-child dependencies.'
    }

    $missingDependencyCountRows = @(
        $missingDependencyCountJson -join [System.Environment]::NewLine |
            ConvertFrom-Json
    )
    $missingDependencyCount = [int]$missingDependencyCountRows[0].dependency_count
    Write-Output "Parent-child dependencies to add: $missingDependencyCount"

    if ($missingDependencyCount -gt 0)
    {
        $utf8WithoutBom = [System.Text.UTF8Encoding]::new($false)
        $dependencyReader = [System.IO.StreamReader]::new(
            $missingDependenciesPath,
            $utf8WithoutBom,
            $true
        )
        try
        {
            $dependencyBatchIndex = 0
            $processedDependencyCount = 0
            while (-not $dependencyReader.EndOfStream)
            {
                $dependencyWriter = [System.IO.StreamWriter]::new(
                    $batchDependenciesPath,
                    $false,
                    $utf8WithoutBom
                )
                $dependencyBatchCount = 0
                try
                {
                    while ($dependencyBatchCount -lt $DependencyBatchSize -and
                        -not $dependencyReader.EndOfStream)
                    {
                        $line = $dependencyReader.ReadLine()
                        if ([string]::IsNullOrWhiteSpace($line))
                        {
                            continue
                        }

                        $dependencyWriter.WriteLine($line)
                        $dependencyBatchCount++
                    }
                }
                finally
                {
                    $dependencyWriter.Dispose()
                }

                if ($dependencyBatchCount -eq 0)
                {
                    continue
                }

                $dependencyBatchIndex++
                & $bd.Source dep add `
                    --file $batchDependenciesPath `
                    --no-cycle-check `
                    --exact-ids `
                    --trusted-parent-child-batch
                if ($LASTEXITCODE -ne 0)
                {
                    throw "Could not add parent-child dependency batch $dependencyBatchIndex."
                }

                $processedDependencyCount += $dependencyBatchCount
                Write-Output (
                    "Processed dependency batch {0}: {1} rows ({2}/{3})." -f
                        $dependencyBatchIndex,
                        $dependencyBatchCount,
                        $processedDependencyCount,
                        $missingDependencyCount
                )
            }
        }
        finally
        {
            $dependencyReader.Dispose()
        }
    }
}

if (-not $KeepStagingFiles)
{
    foreach ($generatedPath in @(
        $resolvedStagingPath,
        $groupMappingPath,
        $existingIssuesPath,
        $missingIssuesPath,
        $batchIssuesPath,
        $missingDependenciesPath,
        $batchDependenciesPath
    ))
    {
        if ([System.IO.File]::Exists($generatedPath))
        {
            [System.IO.File]::Delete($generatedPath)
        }
    }

    if ([System.IO.Directory]::Exists($temporaryRoot) -and
        [System.IO.Directory]::GetFileSystemEntries($temporaryRoot).Count -eq 0)
    {
        [System.IO.Directory]::Delete($temporaryRoot)
    }
}
