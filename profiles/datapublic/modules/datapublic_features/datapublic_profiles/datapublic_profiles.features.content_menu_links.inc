<?php
/**
 * @file
 * datapublic_profiles.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_profiles_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:staff-directory
  $menu_links['main-menu:staff-directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff-directory',
    'router_path' => 'staff-directory',
    'link_title' => 'Staff Directory',
    'options' => array(
      'attributes' => array(
        'title' => 'Staff Directory',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about_page',
  );
  // Exported menu link: main-menu:staff-directory/leadership
  $menu_links['main-menu:staff-directory/leadership'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff-directory/leadership',
    'router_path' => 'staff-directory/leadership',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => 'Leadership',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about_page',
  );
  // Exported menu link: menu-main-menu-mobile-:staff-directory
  $menu_links['menu-main-menu-mobile-:staff-directory'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'staff-directory',
    'router_path' => 'staff-directory',
    'link_title' => 'Staff Directory',
    'options' => array(
      'attributes' => array(
        'title' => 'Staff Directory',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about_page',
  );
  // Exported menu link: menu-main-menu-mobile-:staff-directory/leadership
  $menu_links['menu-main-menu-mobile-:staff-directory/leadership'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'staff-directory/leadership',
    'router_path' => 'staff-directory/leadership',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => 'Leadership',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/about_page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Leadership');
  t('Staff Directory');


  return $menu_links;
}
