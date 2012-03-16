<?php
/**
 * @file
 * datapublic_events.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_events_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Upcoming Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: main-menu:events/calendar
  $menu_links['main-menu:events/calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events/calendar',
    'router_path' => 'events/calendar',
    'link_title' => 'Full Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Full Calendar of Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'events',
  );
  // Exported menu link: main-menu:events/past
  $menu_links['main-menu:events/past'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events/past',
    'router_path' => 'events/past',
    'link_title' => 'Past Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Past Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'events',
  );
  // Exported menu link: menu-main-menu-mobile-:events
  $menu_links['menu-main-menu-mobile-:events'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Upcoming Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-main-menu-mobile-:events/calendar
  $menu_links['menu-main-menu-mobile-:events/calendar'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'events/calendar',
    'router_path' => 'events/calendar',
    'link_title' => 'Full Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Full Calendar',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'events',
  );
  // Exported menu link: menu-main-menu-mobile-:events/past
  $menu_links['menu-main-menu-mobile-:events/past'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'events/past',
    'router_path' => 'events/past',
    'link_title' => 'Past Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Past Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'events',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Full Calendar');
  t('Past Events');


  return $menu_links;
}
