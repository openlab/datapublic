<?php

/**
 * @file
 * Hooks provided by the FullCalendar module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Constructs CSS classes for an entity.
 *
 * @param $entity
 *   Object representing the entity.
 *
 * @return
 *   Array of CSS classes.
 */
function hook_fullcalendar_classes($entity) {
  // Add the entity type as a class.
  return array(
    $entity->entity_type,
  );
}

/**
 * Alter the CSS classes for an entity.
 *
 * @param $classes
 *   Array of CSS classes.
 * @param $entity
 *   Object representing the entity.
 *
 */
function hook_fullcalendar_classes_alter(&$classes, $entity) {
  // Remove all classes set by modules.
  $classes = array();
}

/**
 * @} End of "addtogroup hooks".
 */
