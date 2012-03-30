<?php
/**
 * @file
 * datapublic_photo_gallery.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_photo_gallery_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'photo_gallery_node';
  $context->description = 'Context for photo gallery nodes';
  $context->tag = 'Photo Gallery';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'photo_gallery' => 'photo_gallery',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'includelibraries' => array(
      'library_name' => array(
        're_orbit:re_orbit' => 're_orbit:re_orbit',
      ),
      'library_debug' => 0,
    ),
    'menu' => 'photos',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for photo gallery nodes');
  t('Photo Gallery');
  $export['photo_gallery_node'] = $context;

  return $export;
}
