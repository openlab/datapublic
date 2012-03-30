<?php
/**
 * @file
 * datapublic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datapublic_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function datapublic_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('A  simple page of static HTML content, to be used for infrequently updated information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
