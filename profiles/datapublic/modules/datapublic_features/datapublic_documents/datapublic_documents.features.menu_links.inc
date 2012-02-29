<?php
/**
 * @file
 * datapublic_documents.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datapublic_documents_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/19
  $menu_links['main-menu:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Documents',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/30',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');


  return $menu_links;
}
