<?php
/**
 * @file
 * datapublic_photo_gallery.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_photo_gallery_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:photos
  $menu_links['main-menu:photos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photos',
    'router_path' => 'photos',
    'link_title' => 'Photo Galleries',
    'options' => array(
      'attributes' => array(
        'title' => 'Photo Galleries',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node-name/mediaroom_page',
  );
  // Exported menu link: menu-main-menu-mobile-:photos
  $menu_links['menu-main-menu-mobile-:photos'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'photos',
    'router_path' => 'photos',
    'link_title' => 'Photo Galleries',
    'options' => array(
      'attributes' => array(
        'title' => 'Photo Galleries',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node-name/mediaroom_page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Photo Galleries');


  return $menu_links;
}
