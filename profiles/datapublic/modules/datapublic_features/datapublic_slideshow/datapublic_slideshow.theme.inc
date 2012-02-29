<?php

/**
 * @file
 * Provides theme resources and basic logic for use by the RE Slideshow views.
 */


/**
 * Helper function to construct a relatively unique identifier that can be used
 * as a row's 'data-caption' attribute AND a caption's 'id' attribute.
 *
 * @param string $view_name The css-identifier-safe name of the current view
 * @param string $display_name The css-identifier-safe name of the current display
 * @param string $nid The node id for the current row, if known
 * @return string The formatted identifier
 */
function _datapublic_slideshow_unique_row_identifier($view_name, $display_name, $nid) {
  $identifier_pattern = '%s--%s--nid-%s';
  return str_replace('_', '-', sprintf($identifier_pattern, $view_name, $display_name, $nid));
} // _datapublic_slideshow_unique_row_identifier()


/**
 * Implements template_preprocess_views_view_fields().
 */
function datapublic_slideshow_preprocess_views_view_fields__slideshow__block(&$variables) {
  // If the 'Show photo only' box was checked:
  if (count($variables['row']->field_field_slide_photo_only) > 0 && $variables['row']->field_field_slide_photo_only[0]['raw']['value'] == 1) {
    // Loop through the current fields:
    foreach ($variables['fields'] as $field_name => $field_data) {
      // And unset all those that are NOT the photo or the edit link:
      $whitelist_names = array(
        'edit_node',
        'field_slide_caption',
        'field_slide_photo',
        'nothing',
      );
      if (!in_array($field_name, $whitelist_names)) {
        unset($variables['fields'][$field_name]);
      }
    }
  }
  // In all other cases, all we need do is create the stem of the view identifier,
  // just in case it's needed:
  $variables['view_identifier'] = _datapublic_slideshow_unique_row_identifier($variables['view']->name, $variables['view']->current_display, '');
} // datapublic_slideshow_preprocess_views_view_fields__slideshow()


/**
 * Implements template_preprocess_views_view_unformatted().
 *
 * @see datapublic_slideshow_theme()
 * @see views-view-unformatted--slideshow--block.tpl.php
 */
function datapublic_slideshow_preprocess_views_view_unformatted__slideshow__block(&$variables) {
  // Create an identifier for this view and display--in this instance, we pass an
  // empty string to the identifier function because we can't tell from here what
  // row this is! To make up for this, we set the row number--actually, the node
  // id--in the corresponding template file:
  $variables['view_identifier'] = _datapublic_slideshow_unique_row_identifier($variables['view']->name, $variables['view']->current_display, '');
} // datapublic_slideshow_preprocess_views_view_unformatted__slideshow__block()


/**
 * Implements hook_theme().
 *
 * @see http://views-help.doc.logrus.com/help/views/api-default-views
 * @see views-view--slideshow--block.tpl.php
 * @see datapublic_slideshow_preprocess_views_view_fields__slideshow__block()
 * @see views-view-fields--slideshow--block.tpl.php
 * @see datapublic_slideshow_preprocess_views_view_unformatted__slideshow__block()
 * @see views-view-unformatted--slideshow--block.tpl.php
 */
function datapublic_slideshow_theme($existing) {
  $module_theme_path = drupal_get_path('module', 'datapublic_slideshow') . '/theme';
  return array(
    // Theme info for display 'block' in view 'slideshow':
    'views_view__slideshow__block' => array(
      'variables' => array('view_array' => array(), 'view' => NULL),
      'template' => 'views-view--slideshow--block',
      'original hook' => 'views_view',
      'path' => $module_theme_path,
      'preprocess functions' => array(
        'template_preprocess',
        'template_preprocess_views_view',
        'template_preprocess_views_view__slideshow__block'
      ),
    ),
    // Theme info for rows in display 'block' in view 'slideshow':
    'views_view_unformatted__slideshow__block' => array(
      // Notes:
      //
      // -- the view name is 'slideshow'
      // -- the display id of the overriden display is 'block'
      // -- 'arguments' seems to have changed to 'variables'
      // -- we're trying to override a 'style' template (views-view-unformatted)
      //    so these are the arguments to use
      'variables' => array('view' => NULL, 'options' => NULL, 'rows' => NULL, 'title' => NULL),
      'template' => 'views-view-unformatted--slideshow--block',
      'original hook' => 'views_view_unformatted',
      'path' => $module_theme_path,
      'preprocess functions' => array(
        'template_preprocess',
        'template_preprocess_views_view_unformatted',
        'datapublic_slideshow_preprocess_views_view_unformatted__slideshow__block',
      ),
    ),
    // Theme info for fields in display 'block' in view 'slideshow':
    'views_view_fields__slideshow__block' => array(
      'variables' => array('view_array' => array(), 'view' => NULL),
      'template' => 'views-view-fields--slideshow--block',
      'original hook' => 'views_view_fields', // Seemingly, 'original' works, but 'base' doesn't?
      'path' => $module_theme_path,
      'preprocess functions' => array(
        'template_preprocess',
        'template_preprocess_views_view_fields',
        'datapublic_slideshow_preprocess_views_view_fields__slideshow__block',
      ),
    ),
  );
} // datapublic_slideshow_theme()
