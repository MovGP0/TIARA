SET threads = 4;
SET preserve_insertion_order = false;

CREATE TEMP TABLE graph_source AS
SELECT *
FROM read_json_auto(
  getvariable('graph_path'),
  format = 'unstructured',
  maximum_object_size = 100000000
);

CREATE TEMP TABLE glyph_source AS
SELECT *
FROM read_json_auto(
  getvariable('glyph_manifest_path'),
  format = 'unstructured',
  maximum_object_size = 100000000
);

CREATE TABLE graph_metadata AS
SELECT
  version,
  json_object(
    'name', project.name,
    'languages', to_json(project.languages),
    'frameworks', to_json(project.frameworks),
    'description', project.description,
    'analyzedAt', strftime(
      project.analyzedAt,
      '%Y-%m-%dT%H:%M:%S.%fZ'
    ),
    'gitCommitHash', project.gitCommitHash
  ) AS project,
  to_json(analysis) AS analysis
FROM graph_source;

CREATE TABLE storage_metadata AS
SELECT
  1 AS schema_version,
  sha256(content) AS source_sha256,
  size AS source_bytes,
  current_timestamp AS imported_at
FROM read_blob(getvariable('graph_path'));

CREATE TABLE nodes AS
SELECT
  ordinal::UBIGINT AS ordinal,
  node.*
FROM graph_source,
UNNEST(nodes) WITH ORDINALITY AS item(node, ordinal);

CREATE TABLE edges AS
SELECT
  ordinal::UBIGINT AS ordinal,
  edge.*
FROM graph_source,
UNNEST(edges) WITH ORDINALITY AS item(edge, ordinal);

CREATE TABLE layers AS
SELECT
  ordinal::UBIGINT AS ordinal,
  layer.id AS id,
  layer.name AS name,
  layer.description AS description
FROM graph_source,
UNNEST(layers) WITH ORDINALITY AS item(layer, ordinal);

CREATE TABLE layer_nodes AS
SELECT
  layer.id AS layer_id,
  node_ordinal::UBIGINT AS node_ordinal,
  node_id
FROM graph_source,
UNNEST(layers) WITH ORDINALITY AS layer_item(layer, layer_ordinal),
UNNEST(layer.nodeIds) WITH ORDINALITY AS node_item(node_id, node_ordinal);

CREATE TABLE tour_steps AS
SELECT
  ordinal::UBIGINT AS ordinal,
  json_merge_patch('{}', to_json(step)) AS data
FROM graph_source,
UNNEST(tour) WITH ORDINALITY AS item(step, ordinal);

CREATE TABLE glyph_resources AS
SELECT
  ordinal::UBIGINT AS ordinal,
  resource.FileName AS file_name,
  resource.Format AS format,
  resource.OriginalFormat AS original_format,
  resource.FormResource AS form_resource,
  resource.FormClass AS form_class,
  resource.ComponentPath AS component_path,
  resource.ControlClass AS control_class,
  resource.Property AS property_name,
  resource.Width AS width,
  resource.Height AS height,
  resource.SourceBytes AS source_bytes,
  resource.ExtractedBytes AS extracted_bytes,
  resource.SourceOffset AS source_offset,
  resource.Sha256 AS sha256
FROM glyph_source,
UNNEST(Resources) WITH ORDINALITY AS item(resource, ordinal);

CREATE VIEW graph_statistics AS
SELECT
  (SELECT count(*) FROM nodes) AS node_count,
  (SELECT count(*) FROM edges) AS edge_count,
  (SELECT count(*) FROM layers) AS layer_count,
  (SELECT count(*) FROM tour_steps) AS tour_step_count;

CREATE VIEW node_layers AS
SELECT
  layer_nodes.node_id,
  layers.id AS layer_id,
  layers.name AS layer_name
FROM layer_nodes
JOIN layers ON layers.id = layer_nodes.layer_id;

CREATE VIEW function_calls AS
SELECT source, target, weight
FROM edges
WHERE type = 'calls';

CREATE VIEW ui_events AS
SELECT source, target, eventName AS event_name, handlerName AS handler_name
FROM edges
WHERE type = 'triggers';

CREATE VIEW ui_event_resource_evidence AS
WITH direct_evidence AS (
  SELECT
    ui_events.source AS control_node_id,
    ui_events.target AS handler_node_id,
    ui_events.event_name,
    controls.formResource AS form_resource,
    controls.formClass AS form_class,
    controls.componentPath AS component_path,
    controls.parentPath AS parent_path,
    controls.controlClass AS control_class,
    controls.uiControlType AS ui_control_type,
    controls.caption,
    controls.hint,
    json_extract_string(to_json(controls.uiProperties), '$.Text') AS control_text,
    json_extract_string(to_json(controls.uiProperties), '$."Items.Strings"') AS list_items,
    json_extract_string(to_json(controls.uiProperties), '$.Action') AS action_name,
    json_extract_string(to_json(controls.uiProperties), '$.ImageIndex') AS image_index,
    json_extract_string(to_json(controls.uiProperties), '$.ImageName') AS image_name,
    json_extract_string(to_json(controls.uiProperties), '$.Images') AS images,
    json_extract_string(to_json(controls.uiProperties), '$.HotImages') AS hot_images,
    json_extract_string(to_json(controls.uiProperties), '$.DisabledImages') AS disabled_images,
    json_extract_string(to_json(controls.uiProperties), '$.LargeImages') AS large_images,
    json_extract_string(to_json(controls.uiProperties), '$."Glyph.Data"') AS glyph_data,
    json_extract_string(to_json(controls.uiProperties), '$."Picture.Data"') AS picture_data,
    json_extract_string(to_json(controls.uiProperties), '$."Image.Data"') AS image_data,
    json_extract_string(to_json(controls.uiProperties), '$.Kind') AS control_kind,
    json_extract_string(to_json(controls.uiProperties), '$.ModalResult') AS modal_result,
    json_extract_string(to_json(controls.uiProperties), '$.Default') AS is_default,
    json_extract_string(to_json(controls.uiProperties), '$.Cancel') AS is_cancel,
    json_extract_string(to_json(controls.uiProperties), '$.Checked') AS is_checked,
    json_extract_string(to_json(controls.uiProperties), '$.State') AS control_state,
    ui_events.handler_name,
    handlers.type AS handler_node_type,
    handlers.address AS handler_address,
    handlers.name AS handler_node_name,
    handlers.summary AS handler_summary,
    handlers.type = 'function' AS resolved_function,
    list_contains(controls.tags, 'ui-button') AS is_button,
    list_contains(controls.tags, 'ui-label') AS is_label
  FROM ui_events
  JOIN nodes AS controls ON controls.id = ui_events.source
  JOIN nodes AS handlers ON handlers.id = ui_events.target
), classified_evidence AS (
  SELECT
    *,
    concat_ws('', caption, hint, control_text, list_items, action_name) <> ''
      AS has_direct_text_evidence,
    coalesce(try_cast(image_index AS INTEGER), -1) >= 0
      OR concat_ws(
        '',
        image_name,
        images,
        hot_images,
        disabled_images,
        large_images,
        glyph_data,
        picture_data,
        image_data
      ) <> '' AS has_image_evidence,
    lower(coalesce(control_kind, '')) NOT IN ('', 'bkcustom')
      OR lower(coalesce(modal_result, '')) NOT IN ('', '0', 'mrnone')
      OR lower(coalesce(is_default, '')) = 'true'
      OR lower(coalesce(is_cancel, '')) = 'true'
      OR lower(coalesce(is_checked, '')) = 'true'
      OR coalesce(control_state, '') <> '' AS has_semantic_property_evidence
  FROM direct_evidence
)
SELECT
  *,
  has_direct_text_evidence
    OR has_image_evidence
    OR has_semantic_property_evidence AS has_direct_resource_evidence
FROM classified_evidence;

CREATE VIEW ui_event_nearby_labels AS
WITH label_candidates AS (
  SELECT
    events.control_node_id,
    events.handler_node_id,
    events.event_name,
    events.handler_name,
    events.form_resource,
    events.component_path,
    labels.id AS label_node_id,
    labels.componentPath AS label_component_path,
    labels.controlClass AS label_control_class,
    labels.caption AS label_caption,
    labels.hint AS label_hint,
    abs(
      try_cast(labels.uiProperties.Left AS INTEGER)
      - try_cast(controls.uiProperties.Left AS INTEGER)
    ) + abs(
      try_cast(labels.uiProperties.Top AS INTEGER)
      - try_cast(controls.uiProperties.Top AS INTEGER)
    ) AS coordinate_distance
  FROM ui_event_resource_evidence AS events
  JOIN nodes AS controls ON controls.id = events.control_node_id
  JOIN nodes AS labels
    ON labels.formResource = events.form_resource
    AND labels.parentPath IS NOT DISTINCT FROM events.parent_path
    AND list_contains(labels.tags, 'ui-label')
    AND coalesce(labels.caption, '') <> ''
), ranked_labels AS (
  SELECT
    *,
    row_number() OVER (
      PARTITION BY control_node_id, handler_node_id, event_name
      ORDER BY coordinate_distance NULLS LAST, label_component_path
    ) AS candidate_rank
  FROM label_candidates
)
SELECT *
FROM ranked_labels
WHERE candidate_rank <= 5;

CREATE VIEW ui_event_glyphs AS
SELECT
  events.control_node_id,
  events.handler_node_id,
  events.event_name,
  events.handler_name,
  events.handler_address,
  events.resolved_function,
  glyph_resources.* EXCLUDE (ordinal)
FROM ui_event_resource_evidence AS events
JOIN glyph_resources
  ON glyph_resources.form_resource = events.form_resource
  AND glyph_resources.component_path = events.component_path;

CREATE VIEW button_clicks AS
SELECT
  *
FROM ui_event_resource_evidence
WHERE lower(event_name) = 'onclick'
  AND is_button;

CREATE VIEW knowledge_graph_document AS
SELECT json_object(
  'version', graph_metadata.version,
  'project', graph_metadata.project,
  'analysis', graph_metadata.analysis,
  'nodes', (
    SELECT to_json(list(data ORDER BY ordinal))
    FROM (
      SELECT
        ordinal,
        json_merge_patch(
          '{}',
          to_json(struct_pack(*COLUMNS(* EXCLUDE (ordinal))))
        ) AS data
      FROM nodes
    ) AS reconstructed_nodes
  ),
  'edges', (
    SELECT to_json(list(data ORDER BY ordinal))
    FROM (
      SELECT
        ordinal,
        json_merge_patch(
          '{}',
          to_json(struct_pack(*COLUMNS(* EXCLUDE (ordinal))))
        ) AS data
      FROM edges
    ) AS reconstructed_edges
  ),
  'layers', (
    SELECT to_json(list(layer_data ORDER BY layer_ordinal))
    FROM (
      SELECT
        layers.ordinal AS layer_ordinal,
        json_merge_patch(
          json_object(
            'id', layers.id,
            'name', layers.name,
            'description', layers.description
          ),
          json_object(
            'nodeIds',
            (
              SELECT to_json(list(node_id ORDER BY node_ordinal))
              FROM layer_nodes
              WHERE layer_nodes.layer_id = layers.id
            )
          )
        ) AS layer_data
      FROM layers
    ) AS reconstructed_layers
  ),
  'tour', coalesce(
    (SELECT to_json(list(data ORDER BY ordinal)) FROM tour_steps),
    '[]'::JSON
  )
) AS document
FROM graph_metadata;

CHECKPOINT;
