<?php
/**
 * @file
 * datapublic_photo_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datapublic_photo_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:photos
  $menu_links['main-menu:photos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photos',
    'router_path' => 'photos',
    'link_title' => 'Photo Galleries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Photo Galleries');


  return $menu_links;
}
