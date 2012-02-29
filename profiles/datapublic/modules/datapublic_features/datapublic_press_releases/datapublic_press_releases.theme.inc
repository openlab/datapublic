<?php

/**
 * @file
 * Provides theming resources to be used in the Press Release content type.
 */


/**
 * Implements of hook_theme().
 */
function datapublic_press_releases_theme($existing, $type, $theme, $path) {
  // Provide template for document content type:
  $document = isset($existing['node']) ? $existing['node'] : array();
  $document['path'] = $path . '/theme';
  $document['template'] = 'node--press-release';
  return array(
    'node__press_release' => $document,
  );
} // datapublic_press_releases_theme()