<?php

/**
 * @file
 * Provides theming resources to be used by Photo Gallery content type.
 */

// Constants:
define('DATAPUBLIC_PHOTO_GALLERY_CAPTION_IDENTIFIER', 'gallery-caption-');

/**
 * Implements template_preprocess_field().
 */
function datapublic_photo_gallery_preprocess_field(&$variables, $hook) {
  if ($variables['element']['#field_name'] == 'field_photo_gallery_image') {
    foreach ($variables['items'] as $key => $renderable) {
      $caption_span_pattern = '<span class="orbit-caption" id="%s%s">';
      $variables['captions'][] = array(
        '#markup' => $renderable['#item']['title'],
        '#prefix' => sprintf($caption_span_pattern, DATAPUBLIC_PHOTO_GALLERY_CAPTION_IDENTIFIER, $renderable['#item']['fid']),
        '#suffix' => '</span>',
      );
    }
  }
} // datapublic_photo_gallery_preprocess_field()


/**
 * Implements of hook_theme().
 */
function datapublic_photo_gallery_theme($existing, $type, $theme, $path) {
  // Provide template for photo gallery image field:
  $photo_gallery = isset($existing['field']) ? $existing['field'] : array();
  $photo_gallery['path'] = $path . '/theme';
  $photo_gallery['template'] = 'field--field-photo-gallery-image';
  return array(
    'field__field_photo_gallery_image' => $photo_gallery,
  );
} // datapublic_photo_gallery_theme()