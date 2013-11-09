<?php
/**
 * @file
 * xmlviewer_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function xmlviewer_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function xmlviewer_features_eck_bundle_info() {
  $items = array(
  'xml_xml' => array(
  'machine_name' => 'xml_xml',
  'entity_type' => 'xml',
  'name' => 'xml',
  'label' => 'XML',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function xmlviewer_features_eck_entity_type_info() {
$items = array(
       'xml' => array(
  'name' => 'xml',
  'label' => 'XML',
  'properties' => array(
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
  ),
),
  );
  return $items;
}
