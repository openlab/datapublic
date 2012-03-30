<?php
/**
 * @file
 * datapublic_breadcrumbs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datapublic_breadcrumbs_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_append_node_title';
  $strongarm->value = 1;
  $export['menu_breadcrumb_append_node_title'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_append_node_url';
  $strongarm->value = 0;
  $export['menu_breadcrumb_append_node_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_determine_menu';
  $strongarm->value = 1;
  $export['menu_breadcrumb_determine_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_hide_on_single_item';
  $strongarm->value = 1;
  $export['menu_breadcrumb_hide_on_single_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_menus';
  $strongarm->value = array(
    'main-menu' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Main menu',
      'name' => 'main-menu',
    ),
    'management' => array(
      'enabled' => 0,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Management',
      'name' => 'management',
    ),
    'menu-main-menu-mobile-' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'name' => 'menu-main-menu-mobile-',
    ),
    'menu_breadcrumb_default_menu' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu_breadcrumb_default_menu',
      'title' => 'menu_breadcrumb_default_menu',
      'name' => 'menu_breadcrumb_default_menu',
    ),
    'navigation' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Navigation',
      'name' => 'navigation',
    ),
    'user-menu' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'User menu',
      'name' => 'user-menu',
    ),
    'devel' => array(
      'enabled' => 0,
      'weight' => '1',
      'type' => 'menu',
      'title' => 'Development',
      'name' => 'devel',
    ),
  );
  $export['menu_breadcrumb_menus'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_menu_patterns';
  $strongarm->value = '/^book-toc-\\d+$/Books/';
  $export['menu_breadcrumb_menu_patterns'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_pattern_matches_rebuild';
  $strongarm->value = FALSE;
  $export['menu_breadcrumb_pattern_matches_rebuild'] = $strongarm;

  return $export;
}
