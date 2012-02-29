<?php
/**
 * @file
 * datapublic_defaults.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_defaults_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'Blog',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
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
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Events');
  t('Full Calendar');
  t('Leadership');
  t('Past Events');
  t('Photo Galleries');
  t('Press Releases');
  t('Staff Directory');
  t('Videos');


  return $menu_links;
}
