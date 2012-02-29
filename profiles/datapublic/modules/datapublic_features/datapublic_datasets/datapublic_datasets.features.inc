<?php
/**
 * @file
 * datapublic_datasets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datapublic_datasets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datapublic_datasets_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function datapublic_datasets_node_info() {
  $items = array(
    'dataset' => array(
      'name' => t('Dataset'),
      'base' => 'node_content',
      'description' => t('A dataset file that is to be shared with the public, or a link to an OGDI data instance.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
