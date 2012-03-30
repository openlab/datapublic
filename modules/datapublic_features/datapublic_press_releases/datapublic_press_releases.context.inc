<?php
/**
 * @file
 * datapublic_press_releases.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_press_releases_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_release_listing';
  $context->description = 'Listing view for press releases';
  $context->tag = 'Press Releases';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'press_releases:page' => 'press_releases:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-press_releases-block_2' => array(
          'module' => 'views',
          'delta' => 'press_releases-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'press-releases',
    'menu' => 'press-releases',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Listing view for press releases');
  t('Press Releases');
  $export['press_release_listing'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_release_node';
  $context->description = 'Context for individual press release nodes';
  $context->tag = 'Press Releases';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-press_releases-block_2' => array(
          'module' => 'views',
          'delta' => 'press_releases-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'press-releases',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for individual press release nodes');
  t('Press Releases');
  $export['press_release_node'] = $context;

  return $export;
}
