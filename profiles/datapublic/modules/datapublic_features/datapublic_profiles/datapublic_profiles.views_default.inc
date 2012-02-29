<?php
/**
 * @file
 * datapublic_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datapublic_profiles_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profiles';
  $view->description = 'Default views for Profile listings.';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Staff Directory';
  $handler->display->display_options['css_class'] = 'staff-page';
  $handler->display->display_options['use_more_text'] = 'More Leadership';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 0;
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Leadership */
  $handler->display->display_options['fields']['field_profile_leadership']['id'] = 'field_profile_leadership';
  $handler->display->display_options['fields']['field_profile_leadership']['table'] = 'field_data_field_profile_leadership';
  $handler->display->display_options['fields']['field_profile_leadership']['field'] = 'field_profile_leadership';
  $handler->display->display_options['fields']['field_profile_leadership']['label'] = '';
  $handler->display->display_options['fields']['field_profile_leadership']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_leadership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_leadership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_leadership']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_leadership']['field_api_classes'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_photo']['element_wrapper_class'] = 'staff-photo three columns';
  $handler->display->display_options['fields']['field_profile_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_photo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'image_style' => 'profile_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_profile_photo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['element_class'] = 'subtitle';
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_job_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '270';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'author' => 'author',
    'profile' => 'profile',
  );

  /* Display: Staff Directory */
  $handler = $view->new_display('page', 'Staff Directory', 'page_1');
  $handler->display->display_options['path'] = 'staff-directory';

  /* Display: Leadership Directory */
  $handler = $view->new_display('page', 'Leadership Directory', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Leadership';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Content: Staff Member (field_profile_staff) */
  $handler->display->display_options['filters']['field_profile_staff_value']['id'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['table'] = 'field_data_field_profile_staff';
  $handler->display->display_options['filters']['field_profile_staff_value']['field'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['value'] = array(
    'all' => 'all',
    0 => '0',
    1 => '1',
  );
  /* Filter criterion: Content: Leadership (field_profile_leadership) */
  $handler->display->display_options['filters']['field_profile_leadership_value']['id'] = 'field_profile_leadership_value';
  $handler->display->display_options['filters']['field_profile_leadership_value']['table'] = 'field_data_field_profile_leadership';
  $handler->display->display_options['filters']['field_profile_leadership_value']['field'] = 'field_profile_leadership_value';
  $handler->display->display_options['filters']['field_profile_leadership_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'staff-directory/leadership';
  $export['profiles'] = $view;

  return $export;
}
