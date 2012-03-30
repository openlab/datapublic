<?php

/**
 * @file
 * Provides theming resources to be used in the Press Release content type.
 */


/**
 * Implements of hook_theme().
 */
function datapublic_press_releases_theme($existing, $type, $theme, $path) {
  // Provide template for press_release content type:
  $press_release = isset($existing['node']) ? $existing['node'] : array();
  $press_release['path'] = $path . '/theme';
  $press_release['template'] = 'node--press-release';
  return array(
    'node__press_release' => $press_release,
  );
} // datapublic_press_releases_theme()