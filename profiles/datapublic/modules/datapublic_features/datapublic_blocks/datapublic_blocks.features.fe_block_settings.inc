<?php
/**
 * @file
 * datapublic_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datapublic_blocks_default_fe_block_settings() {
  $export = array();

  // datapublic_theme
  $theme = array();

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'datapublic_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'i18n_mode' => '0',
  );

  $theme['re_silverlight_map-re-silverlight-map-events-block'] = array(
    'module' => 're_silverlight_map',
    'delta' => 're-silverlight-map-events-block',
    'theme' => 'datapublic_theme',
    'status' => '1',
    'weight' => '-26',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'about',
    'title' => 'EVENTS',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['re_silverlight_map-re-silverlight-map-pages-block'] = array(
    'module' => 're_silverlight_map',
    'delta' => 're-silverlight-map-pages-block',
    'theme' => 'datapublic_theme',
    'status' => '1',
    'weight' => '-27',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'about',
    'title' => 'PAGES',
    'cache' => '1',
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
