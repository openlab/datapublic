<?php
/**
 * @file
 * datapublic_variables.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datapublic_variables_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'rubik';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  /*$strongarm = new stdClass;
  $strongarm->disabled = FALSE; 
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_date';
  $strongarm->value = 'F j, Y';
  $export['date_format_event_date'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; 
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_event_time';
  $strongarm->value = 'g:i a';
  $export['date_format_event_time'] = $strongarm;*/

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'F j, Y';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'g:i a';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '1';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  /*$strongarm = new stdClass;
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'fullcalendar_path';
  $strongarm->value = 'profiles/datapublic/libraries/fullcalendar/fullcalendar';
  $export['fullcalendar_path'] = $strongarm;*/

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagefield_crop_info';
  $strongarm->value = array(
    100 => array(
      'x' => '25',
      'y' => '10',
      'width' => '264',
      'height' => '198',
    ),
    102 => array(
      'x' => '31',
      'y' => '0',
      'width' => '279',
      'height' => '209',
    ),
    104 => array(
      'x' => '21',
      'y' => '7',
      'width' => '249',
      'height' => '187',
    ),
    387 => array(
      'x' => '278',
      'y' => '0',
      'width' => '199',
      'height' => '149',
    ),
    389 => array(
      'x' => '63',
      'y' => '0',
      'width' => '267',
      'height' => '200',
    ),
    391 => array(
      'x' => '170',
      'y' => '0',
      'width' => '399',
      'height' => '299',
    ),
    399 => array(
      'x' => '0',
      'y' => '0',
      'width' => '353',
      'height' => '265',
    ),
    401 => array(
      'x' => '0',
      'y' => '112',
      'width' => '319',
      'height' => '239',
    ),
    403 => array(
      'x' => '0',
      'y' => '0',
      'width' => '567',
      'height' => '424',
    ),
    450 => array(
      'x' => '307',
      'y' => '0',
      'width' => '1920',
      'height' => '1438',
    ),
    452 => array(
      'x' => '814',
      'y' => '0',
      'width' => '1408',
      'height' => '1054',
    ),
    454 => array(
      'x' => '0',
      'y' => '0',
      'width' => '1920',
      'height' => '1438',
    ),
    533 => array(
      'x' => '-375',
      'y' => '-318',
      'width' => '800',
      'height' => '600',
    ),
  );
  $export['imagefield_crop_info'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_node_types';
  $strongarm->value = array(
    'page' => 'page',
    'blog_entry' => 0,
    'dataset' => 0,
    'document' => 0,
    'event' => 0,
    'photo_gallery' => 0,
    'press_release' => 0,
    'profile' => 0,
    'services' => 0,
    'slide' => 0,
    'video' => 0,
  );
  $export['social_media_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views';
  $strongarm->value = 1;
  $export['statistics_count_content_views'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_enable_access_log';
  $strongarm->value = 1;
  $export['statistics_enable_access_log'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_flush_accesslog_timer';
  $strongarm->value = '604800';
  $export['statistics_flush_accesslog_timer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'datapublic_theme';
  $export['theme_default'] = $strongarm;

  return $export;
}
