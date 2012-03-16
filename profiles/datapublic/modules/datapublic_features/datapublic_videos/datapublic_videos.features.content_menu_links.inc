<?php
/**
 * @file
 * datapublic_videos.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_videos_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:videos
  $menu_links['main-menu:videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => 'Videos',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node-name/mediaroom_page',
  );
  // Exported menu link: menu-main-menu-mobile-:videos
  $menu_links['menu-main-menu-mobile-:videos'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => 'Videos',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node-name/mediaroom_page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Videos');


  return $menu_links;
}
