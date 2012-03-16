<?php
/**
 * @file
 * datapublic_superfish.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_superfish_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu';
  $context->description = 'Main menu';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'nav',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => 2,
          'region' => 'nav_mobile',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Sitewide');
  $export['menu'] = $context;

  return $export;
}
