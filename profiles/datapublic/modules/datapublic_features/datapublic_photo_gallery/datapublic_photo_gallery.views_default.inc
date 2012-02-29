<?php
/**
 * @file
 * datapublic_photo_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datapublic_photo_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'photo_gallery';
  $view->description = 'Default views for Photo Gallery listings.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Galleries';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'block-grid three-up';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photo_gallery_image']['id'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['table'] = 'field_data_field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['field'] = 'field_photo_gallery_image';
  $handler->display->display_options['fields']['field_photo_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_class'] = 'four columns';
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_gallery_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_photo_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_gallery_image']['settings'] = array(
    'image_style' => 'photo_gallery_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_photo_gallery_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_photo_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photo_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photo_gallery_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_photo_gallery_image']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'photo_gallery' => 'photo_gallery',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'photos';

  /* Display: Block: Media Room page */
  $handler = $view->new_display('block', 'Block: Media Room page', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Photos: Media Room page';
  $translatables['photo_gallery'] = array(
    t('Master'),
    t('Photo Galleries'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Page'),
    t('Block: Media Room page'),
    t('Photos: Media Room page'),
  );
  $export['photo_gallery'] = $view;

  return $export;
}
