<?php
/**
 * @file
 * Adds a suggestion for node templates
 *
 */


/**
 * Implements of hook_theme().
 */
function datapublic_blog_theme($existing, $type, $theme, $path) {
  $blog_entry = isset($existing['node']) ? $existing['node'] : array();
  $blog_entry['path'] = $path . '/theme';
  $blog_entry['template'] = 'node--blog-entry';
  return array(
   'node__blog_entry' => $blog_entry,
  );
} // datapublic_blog_theme()