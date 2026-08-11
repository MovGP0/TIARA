SET threads = 4;
SET preserve_insertion_order = false;

CREATE TEMP TABLE graph_source AS
SELECT *
FROM read_json_auto(
  getvariable('graph_path'),
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
