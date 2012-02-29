<?php
/**
 * @file
 * datapublic_datasets.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_datasets_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'datasets_main_page';
  $context->description = 'Datasets main page';
  $context->tag = 'Datasets';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'datasets' => 'datasets',
        'resources/datasets' => 'resources/datasets',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-datasets-block_1' => array(
          'module' => 'views',
          'delta' => 'datasets-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Datasets');
  t('Datasets main page');
  $export['datasets_main_page'] = $context;

  return $export;
}
