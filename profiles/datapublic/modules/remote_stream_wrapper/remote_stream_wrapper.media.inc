<?php

/**
 * @file
 * Media integration.
 */

module_load_include('inc', 'remote_stream_wrapper', 'RemoteStreamWrapperMediaBrowser.inc');

/**
 * Implements hook_media_browser_plugin_info().
 */
function remote_stream_wrapper_media_browser_plugin_info() {
  $plugins['remote_file'] = array(
    'title' => t('Remote URL'),
    'handler' => array(
      'path' => drupal_get_path('module', 'remote_stream_wrapper'),
      'file' => 'RemoteStreamWrapperMediaBrowser.inc',
      'class' => 'RemoteStreamWrapperMediaBrowser',
    ),
    'access callback' => 'remote_stream_wrapper_media_browser_plugin_access',
    // Support for Media 1.x browser plugins
    '#title' => t('Remote URL'),
  );
  return $plugins;
}

function remote_stream_wrapper_media_browser_plugin_access() {
  return RemoteStreamWrapperMediaBrowser::access();
}

/**
 * Implements hook_media_browser_plugin_view().
 */
function remote_stream_wrapper_media_browser_plugin_view($plugin_name, $params) {
  if ($plugin_name == 'remote_file') {
    if (user_access('administer files') || user_access('add media from remote urls')) {
      $params += array('types' => array());
      $form = drupal_get_form('remote_stream_wrapper_file_add_form', $params);
      return array(
        '#title' => t('Remote URL'),
        'form' => array($form),
      );
    }
  }
}

