<?php
/**
 * @file
 * datapublic_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datapublic_blocks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datapublic_blocks_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
