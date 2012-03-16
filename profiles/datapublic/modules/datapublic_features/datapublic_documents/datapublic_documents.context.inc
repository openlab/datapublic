<?php
/**
 * @file
 * datapublic_documents.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_documents_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'document_landing_page';
  $context->description = 'Documents landing page';
  $context->tag = 'Documents';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'documents' => 'documents',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-documents-block' => array(
          'module' => 'views',
          'delta' => 'documents-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Documents landing page');
  $export['document_landing_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'document_node';
  $context->description = 'Context for individual document nodes';
  $context->tag = 'Documents';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'document' => 'document',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'node/19',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for individual document nodes');
  t('Documents');
  $export['document_node'] = $context;

  return $export;
}
