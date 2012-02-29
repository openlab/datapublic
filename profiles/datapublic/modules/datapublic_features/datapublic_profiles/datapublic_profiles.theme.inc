<?php

/**
 * @file
 * Provides resources and basic logic for use by the RE Profile feature
 */


/**
 * Implements of theme_field().
 */
function theme_field__field_profile_social_media($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $item['#markup'] = theme('textfield_to_links', $item);
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';    
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
} // theme_field__field_profile_social_media()


/**
 * Theming function for generating a list of links from a textfield containing
 * one url per line. Silently discards invalid URLs.
 *
 * @param array $markup Array containing #markup element
 * @return string $output HTML unordered list of links
 */
function theme_textfield_to_links($markup) {
  $field_contents = $markup['#markup'];
  $lines = explode("\n", $field_contents);
  $links = array();
  foreach($lines as $line) {
    $trimmed_line = trim($line);
    if (valid_url($trimmed_line, TRUE)) {
      $links[] = l($trimmed_line, $trimmed_line);
    }
  }
  $output = theme('item_list', array('items' => $links));
  return $output;
} // theme_textfield_to_links()


/**
 * Implements hook_theme().
 *
 * @see http://views-help.doc.logrus.com/help/views/api-default-views
 * @see re_slideshow_preprocess_views_view_unformatted__profiles__page_1()
 */
function datapublic_profiles_theme($existing, $type, $theme, $path) {
  $module_theme_path = $path . '/theme';
  $field_profile_social_media = isset($existing['field']) ? $existing['field'] : array();
  return array(
    // Theme info for rows in display 'block' in view 'slideshow':
    'views_view_unformatted__profiles__page_1' => array(
      'variables' => array('view' => NULL, 'options' => NULL, 'rows' => NULL, 'title' => NULL),
      'template' => 'views-view-unformatted--profiles--page-1',
      'original hook' => 'views_view_unformatted',
      'path' => $module_theme_path,
      'preprocess functions' => array(
        'template_preprocess',
        'template_preprocess_views_view_unformatted',
      ),
    ),
    'field__field_profile_social_media' => $field_profile_social_media,
    'textfield_to_links' => array(
      'variables' => array('#markup' => NULL),
    ),
  );
} // datapublic_profiles_theme()