<?php
/**
 * @file
 * datapublic_datasets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datapublic_datasets_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'datasets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Datasets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Datasets';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_dataset_csv' => 'field_dataset_csv',
    'field_dataset_dwg' => 'field_dataset_dwg',
    'field_dataset_kml' => 'field_dataset_kml',
    'field_dataset_kmz' => 'field_dataset_kmz',
    'field_dataset_shp' => 'field_dataset_shp',
    'field_dataset_xls' => 'field_dataset_xls',
    'field_dataset_xml' => 'field_dataset_xml',
    'field_dataset_api' => 'field_dataset_api',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_csv' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_dwg' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_kml' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_kmz' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_shp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_xls' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_xml' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset_api' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: CSV Indicator */
  $handler->display->display_options['fields']['field_dataset_csv']['id'] = 'field_dataset_csv';
  $handler->display->display_options['fields']['field_dataset_csv']['table'] = 'field_data_field_dataset_csv';
  $handler->display->display_options['fields']['field_dataset_csv']['field'] = 'field_dataset_csv';
  $handler->display->display_options['fields']['field_dataset_csv']['label'] = 'CSV';
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dataset_csv']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_csv']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_csv']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_csv']['field_api_classes'] = 0;
  /* Field: Content: DWG Indicator */
  $handler->display->display_options['fields']['field_dataset_dwg']['id'] = 'field_dataset_dwg';
  $handler->display->display_options['fields']['field_dataset_dwg']['table'] = 'field_data_field_dataset_dwg';
  $handler->display->display_options['fields']['field_dataset_dwg']['field'] = 'field_dataset_dwg';
  $handler->display->display_options['fields']['field_dataset_dwg']['label'] = 'DWG';
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dataset_dwg']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_dwg']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_dwg']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_dwg']['field_api_classes'] = 0;
  /* Field: Content: KML Indicator */
  $handler->display->display_options['fields']['field_dataset_kml']['id'] = 'field_dataset_kml';
  $handler->display->display_options['fields']['field_dataset_kml']['table'] = 'field_data_field_dataset_kml';
  $handler->display->display_options['fields']['field_dataset_kml']['field'] = 'field_dataset_kml';
  $handler->display->display_options['fields']['field_dataset_kml']['label'] = 'KML';
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dataset_kml']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_kml']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_kml']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_kml']['field_api_classes'] = 0;
  /* Field: Content: KMZ Indicator */
  $handler->display->display_options['fields']['field_dataset_kmz']['id'] = 'field_dataset_kmz';
  $handler->display->display_options['fields']['field_dataset_kmz']['table'] = 'field_data_field_dataset_kmz';
  $handler->display->display_options['fields']['field_dataset_kmz']['field'] = 'field_dataset_kmz';
  $handler->display->display_options['fields']['field_dataset_kmz']['label'] = 'KMZ';
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_kmz']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_kmz']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dataset_kmz']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_kmz']['field_api_classes'] = 0;
  /* Field: Content: SHP Indicator */
  $handler->display->display_options['fields']['field_dataset_shp']['id'] = 'field_dataset_shp';
  $handler->display->display_options['fields']['field_dataset_shp']['table'] = 'field_data_field_dataset_shp';
  $handler->display->display_options['fields']['field_dataset_shp']['field'] = 'field_dataset_shp';
  $handler->display->display_options['fields']['field_dataset_shp']['label'] = 'SHP';
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_shp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_shp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dataset_shp']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_shp']['field_api_classes'] = 0;
  /* Field: Content: XLS Indicator */
  $handler->display->display_options['fields']['field_dataset_xls']['id'] = 'field_dataset_xls';
  $handler->display->display_options['fields']['field_dataset_xls']['table'] = 'field_data_field_dataset_xls';
  $handler->display->display_options['fields']['field_dataset_xls']['field'] = 'field_dataset_xls';
  $handler->display->display_options['fields']['field_dataset_xls']['label'] = 'XLS';
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_xls']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_xls']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dataset_xls']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_xls']['field_api_classes'] = 0;
  /* Field: Content: XML Indicator */
  $handler->display->display_options['fields']['field_dataset_xml']['id'] = 'field_dataset_xml';
  $handler->display->display_options['fields']['field_dataset_xml']['table'] = 'field_data_field_dataset_xml';
  $handler->display->display_options['fields']['field_dataset_xml']['field'] = 'field_dataset_xml';
  $handler->display->display_options['fields']['field_dataset_xml']['label'] = 'XML';
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_xml']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_xml']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dataset_xml']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_xml']['field_api_classes'] = 0;
  /* Field: Content: API Indicator */
  $handler->display->display_options['fields']['field_dataset_api']['id'] = 'field_dataset_api';
  $handler->display->display_options['fields']['field_dataset_api']['table'] = 'field_data_field_dataset_api';
  $handler->display->display_options['fields']['field_dataset_api']['field'] = 'field_dataset_api';
  $handler->display->display_options['fields']['field_dataset_api']['label'] = 'Other (API)';
  $handler->display->display_options['fields']['field_dataset_api']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dataset_api']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dataset_api']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dataset_api']['type'] = 'computed_field_unsanitized';
  $handler->display->display_options['fields']['field_dataset_api']['field_api_classes'] = 0;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
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
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 0;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search for a dataset';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Choose a tag';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'dataset_tags';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;

  /* Display: Block: Main page */
  $handler = $view->new_display('block', 'Block: Main page', 'block_1');
  $handler->display->display_options['block_description'] = 'Datasets: Main page block';

  /* Display: Block: Resources page */
  $handler = $view->new_display('block', 'Block: Resources page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Datasets';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Datasets';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'datasets';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '125',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'dataset' => 'dataset',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['block_description'] = 'Datasets: List Block';
  $export['datasets'] = $view;

  return $export;
}
