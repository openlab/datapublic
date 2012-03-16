<?php
/**
 * @file
 * datapublic_menublocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datapublic_menublocks_default_fe_block_settings() {
  $export = array();

  // datapublic_theme
  $theme = array();

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'datapublic_theme',
    'status' => 0,
    'weight' => '-7',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'i18n_mode' => '0',
  );

  $export['datapublic_theme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
