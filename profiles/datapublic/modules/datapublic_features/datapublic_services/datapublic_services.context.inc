<?php
/**
 * @file
 * datapublic_services.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_services_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services_listing';
  $context->description = '';
  $context->tag = 'Services';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'services' => 'services',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-services-block_1' => array(
          'module' => 'views',
          'delta' => 'services-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Services');
  $export['services_listing'] = $context;

  return $export;
}
