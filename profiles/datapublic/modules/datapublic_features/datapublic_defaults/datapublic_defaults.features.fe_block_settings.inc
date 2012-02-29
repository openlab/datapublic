<?php
/**
 * @file
 * datapublic_defaults.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datapublic_defaults_default_fe_block_settings() {
  $export = array();

  // datapublic_theme
  $theme = array();

  $theme['block-newsletter_signup_block'] = array(
    'module' => 'block',
    'theme' => 'datapublic_theme',
    'status' => 0,
    'weight' => '-4',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Newsletter Sign Up',
    'cache' => '-1',
    'i18n_mode' => '0',
    'machine_name' => 'newsletter_signup_block',
  );

  $theme['superfish-1'] = array(
    'module' => 'superfish',
    'delta' => '1',
    'theme' => 'datapublic_theme',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
    'i18n_mode' => '0',
  );

  $export['datapublic_theme'] = $theme;

  return $export;
}
