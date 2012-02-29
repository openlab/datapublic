<?php
/**
 * @file
 * datapublic_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datapublic_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_blog_entry';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_re_blogpost';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_re_blogpost'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog_entry';
  $strongarm->value = 0;
  $export['comment_anonymous_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog_entry';
  $strongarm->value = '2';
  $export['comment_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog_entry';
  $strongarm->value = 1;
  $export['comment_default_mode_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog_entry';
  $strongarm->value = '50';
  $export['comment_default_per_page_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog_entry';
  $strongarm->value = 1;
  $export['comment_form_location_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog_entry';
  $strongarm->value = '1';
  $export['comment_preview_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog_entry';
  $strongarm->value = 1;
  $export['comment_subject_field_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_blog_entry';
  $strongarm->value = 1;
  $export['enable_revisions_page_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_re_blogpost';
  $strongarm->value = 1;
  $export['enable_revisions_page_re_blogpost'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_blog_entry';
  $strongarm->value = '1';
  $export['i18n_node_extended_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_blog_entry';
  $strongarm->value = array();
  $export['i18n_node_options_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_blog_entry';
  $strongarm->value = '2';
  $export['language_content_type_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blog_entry';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blog_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog_entry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blog_entry';
  $strongarm->value = '1';
  $export['node_preview_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blog_entry';
  $strongarm->value = 0;
  $export['node_submitted_blog_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_entry_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_entry_en_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_entry_pattern';
  $strongarm->value = 'blog/[node:created:custom:Y]/[node:created:custom:m]/[node:created:custom:d]/[node:title]';
  $export['pathauto_node_blog_entry_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_entry_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_entry_und_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_blog_entry';
  $strongarm->value = 1;
  $export['show_preview_changes_blog_entry'] = $strongarm;

  return $export;
}
