<?php
/**
 * @file
 * datapublic_press_releases.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_press_releases_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:press-releases
  $menu_links['main-menu:press-releases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press-releases',
    'router_path' => 'press-releases',
    'link_title' => 'Press Releases',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/mediaroom_page',
  );
  // Exported menu link: menu-main-menu-mobile-:press-releases
  $menu_links['menu-main-menu-mobile-:press-releases'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'press-releases',
    'router_path' => 'press-releases',
    'link_title' => 'Press Releases',
    'options' => array(
      'attributes' => array(
        'title' => 'Press Releases',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/mediaroom_page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Press Releases');


  return $menu_links;
}
