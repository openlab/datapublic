<?php
/**
 * @file
 * datapublic_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_events_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_blocks';
  $context->description = 'Blocks for the event pages';
  $context->tag = 'Event';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
        'events*' => 'events*',
        'events?*' => 'events?*',
        'events/*' => 'events/*',
        '~events/calendar' => '~events/calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_2' => array(
          'module' => 'views',
          'delta' => 'events-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for the event pages');
  t('Event');
  $export['event_blocks'] = $context;

  return $export;
}
