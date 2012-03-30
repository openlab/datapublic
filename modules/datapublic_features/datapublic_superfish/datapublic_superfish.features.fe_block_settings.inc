<?php
/**
 * @file
 * datapublic_superfish.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datapublic_superfish_default_fe_block_settings() {
  $export = array();

  // datapublic_theme
  $theme = array();

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

  $theme['superfish-2'] = array(
    'module' => 'superfish',
    'delta' => '2',
    'theme' => 'datapublic_theme',
    'status' => 0,
    'weight' => '3',
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
