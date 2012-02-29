<?php
/**
 * @file
 * adds a formatter for text fields that creates a facebook button
 *
 */


/**
 * Implements hook_theme().
 */
function datapublic_events_theme($existing, $type, $theme, $path) {
  $template_path = $path . '/theme';

  $item_event = isset($existing['node']) ? $existing['node'] : array();
  $item_event['path'] = $template_path;
  $item_event['template'] = 'node--event';

  $item_location = isset($existing['location']) ? $existing['location'] : array();
  $item_location['path'] = $template_path;
  $item_location['template'] = 'location--event';

  $item_date_range = isset($existing['date_display_range']) ? $existing['date_display_range'] : array();
  $item_date_range['function'] = 'datapublic_events_date_display_range';

  return array(
    'node__event' => $item_event,
    'location__event' => $item_location,
    'date_display_range' => $item_date_range
  );
} // datapublic_events_theme()


/**
 * Implements theme_date_display_range().
 */
function datapublic_events_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];

  // Wrap the result with the attributes.
  return t('!start-date - !end-date', array(
    '!start-date' => '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>',
    '!end-date' => '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>',
  ));
} // datapublic_events_date_display_range()


/**
 * Implements hook_ctools_plugin_directory().
 *
 * This is used to instantiate a new plugin for formatting addresses.
 */
function datapublic_events_ctools_plugin_directory($module, $plugin) {
  if ($module == 'addressfield') {
    return 'plugins/' . $plugin;
  }
} // datapublic_events_ctools_plugin_directory()


/**
 * Implements template_preprocess_node().
 */
function datapublic_events_preprocess_node(&$variables) {
  switch ($variables['type']) {
    // Event content type:
    case 'event':
      // Prepare various date and time formats:
      //
      // We need language to do this:
      global $language;
      // We need some defaults in case the variables aren't present for some
      // reason:
      $default_date_format = 'j F Y';
      $default_repeat_format = 'l j F Y';
      $default_time_format = 'h:i a';
      // Get localized versions of long and medium date formats if possible,
      // system settings otherwise, and defaults defined above as a last resort:
      if (function_exists('i18n_variable_get')) {
        $date_format = i18n_variable_get('date_format_medium', $language->language, $default_date_format);
        $repeat_format = i18n_variable_get('date_format_long', $language->language, $default_repeat_format);
        $time_format = i18n_variable_get('date_format_time_format', $language->language, $default_time_format);
      }
      else {
        $date_format = variable_get('date_format_medium', $default_date_format);
        $repeat_format = variable_get('date_format_long', $default_repeat_format);
        $time_format = variable_get('date_format_time_format', $default_time_format);
      }

      // Cache event begin and end dates in a convenient way for this request:
      $event_start = $variables['field_event_start_date'][0]['value'];
      $event_end = $variables['field_event_start_date'][0]['value2'];

      // Find site timezone:
      $timezone_name = $variables['field_date'][0]['timezone'] ? $variables['field_date'][0]['timezone'] : drupal_get_user_timezone();

      // Create date module date objects for the timezone we worked out:
      $date_start = new DateObject($event_start, $timezone_name);
      $date_end = new DateObject($event_end, $timezone_name);

      // Get formatted start and end dates:
      $variables['from_date'] = date_format_date($date_start, 'custom', $date_format);
      $variables['to_date'] = date_format_date($date_end, 'custom', $date_format);

      // Get formatted start and end times:
      $variables['from_time'] = date_format_date($date_start, 'custom', $time_format);
      $variables['to_time'] = date_format_date($date_end, 'custom', $time_format);

      // If start and end are the same day then don't display the "to" date:
      if ($variables['from_date'] === $variables['to_date']) {
        unset($variables['to_date']);
      }

      // If the start and end TIMES are the same, this is an all-day event:
      if ($variables['field_date'][0]['value'] === $variables['field_event_start_date'][0]['value2']) {
        // Set variables for node template and for google calendar link (below):
        $all_day = TRUE;
        $variables['from_time'] = t('(All day)');
        // Unset both "to" time and date:
        unset($variables['to_time']);
        unset($variables['to_date']);
      }

      // Create $repeat_rule var:
      $variables['repeat_rule'] = date_repeat_rrule_description($variables['field_event_start_date'][0]['rrule'], $repeat_format);
      break;
  }
} // datapublic_events_preprocess_node()