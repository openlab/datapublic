<?php
/**
 * @file
 * datapublic_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datapublic_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow';
  $view->description = 'Provides a slideshow block using Slide content type nodes.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Slide Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Show Photo Only */
  $handler->display->display_options['fields']['field_slide_photo_only']['id'] = 'field_slide_photo_only';
  $handler->display->display_options['fields']['field_slide_photo_only']['table'] = 'field_data_field_slide_photo_only';
  $handler->display->display_options['fields']['field_slide_photo_only']['field'] = 'field_slide_photo_only';
  $handler->display->display_options['fields']['field_slide_photo_only']['label'] = '';
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_photo_only']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_photo_only']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_photo_only']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_photo_only']['field_api_classes'] = 0;
  /* Field: Content: Slide Photo */
  $handler->display->display_options['fields']['field_slide_photo']['id'] = 'field_slide_photo';
  $handler->display->display_options['fields']['field_slide_photo']['table'] = 'field_data_field_slide_photo';
  $handler->display->display_options['fields']['field_slide_photo']['field'] = 'field_slide_photo';
  $handler->display->display_options['fields']['field_slide_photo']['label'] = '';
  $handler->display->display_options['fields']['field_slide_photo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['path'] = '[field_slide_link]';
  $handler->display->display_options['fields']['field_slide_photo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_slide_photo']['element_class'] = 'orbit-image';
  $handler->display->display_options['fields']['field_slide_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_photo']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_photo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_photo']['settings'] = array(
    'image_style' => 'slide_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_photo']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_slide_link]';
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
  $handler->display->display_options['fields']['title']['element_class'] = 'orbit-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'orbit-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Slide Caption */
  $handler->display->display_options['fields']['field_slide_caption']['id'] = 'field_slide_caption';
  $handler->display->display_options['fields']['field_slide_caption']['table'] = 'field_data_field_slide_caption';
  $handler->display->display_options['fields']['field_slide_caption']['field'] = 'field_slide_caption';
  $handler->display->display_options['fields']['field_slide_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slide_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_slide_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_slide_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_caption']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_caption']['field_api_classes'] = 0;
  /* Field: Orbit Content */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Orbit Content';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="orbit-title">[title]</h2>
  <div class="orbit-body">[body]</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'orbit-content four columns';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'orbit-edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Slide';
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
    'slide' => 'slide',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  );

  /* Display: Block: Slideshow */
  $handler = $view->new_display('block', 'Block: Slideshow', 'block');
  $handler->display->display_options['block_description'] = 'Slideshow: Homepage block';
  $export['slideshow'] = $view;

  return $export;
}
