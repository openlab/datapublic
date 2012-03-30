<?php
/**
 * @file
 * datapublic_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datapublic_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'events';
  $view->description = 'Default views for Event listings.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['ui_name'] = 'Content: Event Date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['text'] = '[field_event_start_date-value] - [field_event_start_date-value2]';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_start_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['field_api_classes'] = 0;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_start_date_1']['id'] = 'field_event_start_date_1';
  $handler->display->display_options['fields']['field_event_start_date_1']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['ui_name'] = 'Content: Event Time';
  $handler->display->display_options['fields']['field_event_start_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date_1']['element_class'] = 'event-time';
  $handler->display->display_options['fields']['field_event_start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['settings'] = array(
    'format_type' => 'event_time',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_start_date_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location-organisation_name], [field_event_location-locality], [field_event_location-administrative_area]';
  $handler->display->display_options['fields']['field_event_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_location']['element_class'] = 'event-location';
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_event_location']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'event-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Read More Link */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Read More Link';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Read more...';
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
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'event-readmore';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Sort criterion: Content: Event Date -  start date (field_event_start_date) */
  $handler->display->display_options['sorts']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['sorts']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['sorts']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  /* Contextual filter: Content: Event Date -  start date (field_event_start_date) */
  $handler->display->display_options['arguments']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['arguments']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['arguments']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  $handler->display->display_options['arguments']['field_event_start_date_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_event_start_date_value']['title'] = 'Events in %1';
  $handler->display->display_options['arguments']['field_event_start_date_value']['breadcrumb_enable'] = 1;
  $handler->display->display_options['arguments']['field_event_start_date_value']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['field_event_start_date_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Date - end date (field_event_start_date:value2) */
  $handler->display->display_options['filters']['field_event_start_date_value2']['id'] = 'field_event_start_date_value2';
  $handler->display->display_options['filters']['field_event_start_date_value2']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date_value2']['field'] = 'field_event_start_date_value2';
  $handler->display->display_options['filters']['field_event_start_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_start_date_value2']['default_date'] = 'now - 4 hours';
  $handler->display->display_options['filters']['field_event_start_date_value2']['add_delta'] = 'yes';
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Page: Upcoming Events */
  $handler = $view->new_display('page', 'Page: Upcoming Events', 'page');
  $handler->display->display_options['path'] = 'events';

  /* Display: Page: FullCalendar */
  $handler = $view->new_display('fullcalendar', 'Page: FullCalendar', 'fullcalendar_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fullcalendar_node';
  $handler->display->display_options['row_options']['custom']['fc_title_field'] = 'title';
  $handler->display->display_options['row_options']['custom']['fc_url_field'] = 'title';
  $handler->display->display_options['row_options']['custom']['fc_date_field'] = array();
  $handler->display->display_options['row_options']['custom']['fc_title'] = 0;
  $handler->display->display_options['row_options']['custom']['fc_url'] = 0;
  $handler->display->display_options['row_options']['custom']['fc_date'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Event Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['ui_name'] = 'Event Date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['text'] = '[field_event_start_date-value] - [field_event_start_date-value2]';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_start_date']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['path'] = 'events/calendar';

  /* Display: Block: Upcoming Events */
  $handler = $view->new_display('block', 'Block: Upcoming Events', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Date (HIDDEN) */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['ui_name'] = 'Content: Event Date (HIDDEN)';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['text'] = '[field_event_start_date-value] - [field_event_start_date-value2]';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_start_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['field_api_classes'] = 0;
  /* Field: Content: Event Time (HIDDEN) */
  $handler->display->display_options['fields']['field_event_start_date_1']['id'] = 'field_event_start_date_1';
  $handler->display->display_options['fields']['field_event_start_date_1']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['ui_name'] = 'Content: Event Time (HIDDEN)';
  $handler->display->display_options['fields']['field_event_start_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date_1']['element_class'] = 'event-time';
  $handler->display->display_options['fields']['field_event_start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['settings'] = array(
    'format_type' => 'event_time',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_start_date_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_start_date] | [field_event_start_date_1] | [field_event_location-locality], [field_event_location-administrative_area]';
  $handler->display->display_options['fields']['field_event_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_location']['element_class'] = 'event-location subtitle';
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_location']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_event_location']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Events: Homepage Upcoming';

  /* Display: Block: Archive by Date */
  $handler = $view->new_display('block', 'Block: Archive by Date', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Archive by date';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_start_date']['id'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date']['ui_name'] = 'Content: Event Date';
  $handler->display->display_options['fields']['field_event_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['text'] = '[field_event_start_date-value] - [field_event_start_date-value2]';
  $handler->display->display_options['fields']['field_event_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['field_event_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_start_date']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date']['field_api_classes'] = 0;
  /* Field: Content: Event Time */
  $handler->display->display_options['fields']['field_event_start_date_1']['id'] = 'field_event_start_date_1';
  $handler->display->display_options['fields']['field_event_start_date_1']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['field'] = 'field_event_start_date';
  $handler->display->display_options['fields']['field_event_start_date_1']['ui_name'] = 'Content: Event Time';
  $handler->display->display_options['fields']['field_event_start_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_start_date_1']['element_class'] = 'event-time';
  $handler->display->display_options['fields']['field_event_start_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_start_date_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['settings'] = array(
    'format_type' => 'event_time',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_start_date_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_start_date_1']['field_api_classes'] = 0;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location-organisation_name], [field_event_location-locality], [field_event_location-administrative_area]';
  $handler->display->display_options['fields']['field_event_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_location']['element_class'] = 'event-location';
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_event_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_event_location']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'event-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Read More Link */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Read More Link';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Read more...';
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
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'event-readmore';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Date -  start date (field_event_start_date) */
  $handler->display->display_options['arguments']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['arguments']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['arguments']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  $handler->display->display_options['arguments']['field_event_start_date_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_event_start_date_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_start_date_value']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['field_event_start_date_value']['use_fromto'] = 'no';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  /* Filter criterion: Content: Event Date -  start date (field_event_start_date) */
  $handler->display->display_options['filters']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['filters']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  $handler->display->display_options['filters']['field_event_start_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_start_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_start_date_value']['default_date'] = 'now - 1 day';
  $handler->display->display_options['block_description'] = 'Events: Archive by date';

  /* Display: Page: Past Events */
  $handler = $view->new_display('page', 'Page: Past Events', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Events';
  $handler->display->display_options['display_description'] = 'List Past Events';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event Date -  start date (field_event_start_date) */
  $handler->display->display_options['arguments']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['arguments']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['arguments']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  $handler->display->display_options['arguments']['field_event_start_date_value']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_event_start_date_value']['title'] = 'Past Events in %1';
  $handler->display->display_options['arguments']['field_event_start_date_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_start_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Date -  start date (field_event_start_date) */
  $handler->display->display_options['filters']['field_event_start_date_value']['id'] = 'field_event_start_date_value';
  $handler->display->display_options['filters']['field_event_start_date_value']['table'] = 'field_data_field_event_start_date';
  $handler->display->display_options['filters']['field_event_start_date_value']['field'] = 'field_event_start_date_value';
  $handler->display->display_options['filters']['field_event_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_start_date_value']['expose']['operator_id'] = 'field_event_start_date_value_op';
  $handler->display->display_options['filters']['field_event_start_date_value']['expose']['label'] = 'Event Date -  start date (field_event_start_date)';
  $handler->display->display_options['filters']['field_event_start_date_value']['expose']['operator'] = 'field_event_start_date_value_op';
  $handler->display->display_options['filters']['field_event_start_date_value']['expose']['identifier'] = 'field_event_start_date_value';
  $handler->display->display_options['filters']['field_event_start_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_event_start_date_value']['default_date'] = 'now - 4 hours';
  $handler->display->display_options['filters']['field_event_start_date_value']['add_delta'] = 'yes';
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['path'] = 'events/past';

  /* Display: Feed:list */
  $handler = $view->new_display('feed', 'Feed:list', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'events/feed';
  $translatables['events'] = array(
    t('Master'),
    t('Events'),
    t('More events...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[field_event_start_date-value] - [field_event_start_date-value2]'),
    t('[field_event_location-organisation_name], [field_event_location-locality], [field_event_location-administrative_area]'),
    t('Read more...'),
    t('All'),
    t('Events in %1'),
    t('%1'),
    t('Page: Upcoming Events'),
    t('more'),
    t('Page: FullCalendar'),
    t('Events Calendar'),
    t('Block: Upcoming Events'),
    t('Upcoming Events'),
    t('[field_event_start_date] | [field_event_start_date_1] | [field_event_location-locality], [field_event_location-administrative_area]'),
    t('Events: Homepage Upcoming'),
    t('Block: Archive by Date'),
    t('Archive by date'),
    t('Events: Archive by date'),
    t('Page: Past Events'),
    t('Past Events'),
    t('List Past Events'),
    t('Past Events in %1'),
    t('Event Date -  start date (field_event_start_date)'),
    t('Feed:list'),
  );
  $export['events'] = $view;

  return $export;
}
