<?php

/**
 * @file
 * Provides all the necessary theming functions for the oembed thumbnail
 */


/**
 * Implements oembed_preprocess_oembed().
 */
function datapublic_videos_preprocess_oembed(&$vars, $hook) {
  $vars['content_attributes_array']['class'] = trim($vars['content_attributes_array']['class'] . ' ' . 'flex-video');
} // datapublic_videos_preprocess_oembed()


/**
 * Implements hook_theme_registry_alter().
 *
 * @todo:
 *    -- revisit this in hook_theme(); it doesn't seem to follow the same hierarchy
 *       as other cck fields for template names (i.e. when configured in hook_theme
 *       as 'oembed__field_video_link' it's not used. Given that we're using the
 *       hook_theme_registry_alter() method, themes will need to implement one of
 *       their own (or perhaps a preprocess function) in order to override this!
 */
function datapublic_videos_theme_registry_alter(&$theme_registry) {
  $theme_registry['oembed']['path'] = drupal_get_path('module', 'datapublic_videos') . '/theme';
  $theme_registry['oembed']['template'] = 'oembed';
} // datapublic_videos_theme_registry_alter()