<?php
/**
 * @file
 * datapublic_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datapublic_services_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'services';
  $view->description = 'Default views for Service listings.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Services...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['group_rendered'] = 0;
  $handler->display->display_options['style_options']['class'] = 'block-grid four-up';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_services_photo']['id'] = 'field_services_photo';
  $handler->display->display_options['fields']['field_services_photo']['table'] = 'field_data_field_services_photo';
  $handler->display->display_options['fields']['field_services_photo']['field'] = 'field_services_photo';
  $handler->display->display_options['fields']['field_services_photo']['label'] = '';
  $handler->display->display_options['fields']['field_services_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_services_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_services_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_services_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_services_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_services_photo']['settings'] = array(
    'image_style' => 'services_image_homepage_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_services_photo']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_services_photo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Service';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'services' => 'services',
  );
  
  /* Display: Block: Homepage */
  $handler = $view->new_display('block', 'Block: Homepage', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['group_rendered'] = 0;
  $handler->display->display_options['style_options']['class'] = 'block-grid three-up';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_services_photo']['id'] = 'field_services_photo';
  $handler->display->display_options['fields']['field_services_photo']['table'] = 'field_data_field_services_photo';
  $handler->display->display_options['fields']['field_services_photo']['field'] = 'field_services_photo';
  $handler->display->display_options['fields']['field_services_photo']['label'] = '';
  $handler->display->display_options['fields']['field_services_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_services_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_services_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_services_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_services_photo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_services_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_services_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_services_photo']['settings'] = array(
    'image_style' => 'services_image_homepage_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_services_photo']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_services_photo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Service';
  $handler->display->display_options['block_description'] = 'Services: Homepage Block';
  
  /* Display: Block: List */
  $handler = $view->new_display('block', 'Block: List', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Services...';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['block_description'] = 'Services: List Block';
  $translatables['services'] = array(
    t('Master'),
    t('Services'),
    t('More Services...'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Read More...'),
    t('Edit Service'),
    t('Block: Homepage'),
    t('more'),
    t('Services: Homepage Block'),
    t('Block: List'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Services: List Block'),
  );
  $export['services'] = $view;

  return $export;
}
