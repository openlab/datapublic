<?php

/**
 * @file
 * Collection of fullcalendar_colors hook implementations.
 */

/**
 * Implements hook_fullcalendar_colors_create_css().
 *
 * Provide colors per node type.
 */
function node_fullcalendar_colors_create_css(&$classes, $entity) {
  $css = array();
  if (variable_get('fullcalendar_color_node_types_enabled', FALSE)) {
    if ($entity->entity_type == 'node') {
      $class = 'node-type-' . $entity->type;
      $color = variable_get('fullcalendar_color_node_type_' . $entity->type, '#3366CC');
      $classes[] = $class;
      $css[$class] = _fullcalendar_colors_build_css_string($class, $color);
    }
  }
  return $css;
}

/**
 * Implements hook_fullcalendar_colors_create_css().
 *
 * Provide colors per user role.
 */
function user_fullcalendar_colors_create_css(&$classes, $entity) {
  $css = array();
  if (variable_get('fullcalendar_color_user_roles_enabled', FALSE)) {
    if ($entity->entity_type == 'user') {
      foreach ($entity->roles as $role_id => $role) {
        $class = 'user-role-' . $role_id;
        $color = variable_get('fullcalendar_color_user_role_' . $role_id, '#3366CC');
        $classes[] = $class;
        $css[$class] = _fullcalendar_colors_build_css_string($class, $color);
      }
    }
  }
  return $css;
}

/**
 * Implements hook_fullcalendar_colors_create_css().
 *
 * Provide colors per taxonomy term.
 */
function taxonomy_fullcalendar_colors_create_css(&$classes, $entity) {
  $filtered_entity = (array) $entity;
  $filtered_entity = array_intersect_key($filtered_entity, field_info_instances($entity->entity_type, $entity->bundle));
  $tids = _fullcalendar_colors_filter_term_ids($filtered_entity);
  $css = array();
  foreach (taxonomy_get_vocabularies() as $vid => $vocab) {
    if (variable_get('fullcalendar_color_taxo_' . $vid . '_enabled', FALSE)) {
      // If enabled, get all the terms in the taxonomy.
      $terms = taxonomy_get_tree($vid);

      foreach ($terms as $term) {
        if (in_array($term->tid, $tids)) {
          $class = 'taxonomy-term-' . $term->tid;
          $color = variable_get('fullcalendar_color_taxo_term_' . $term->tid, '#3366CC');
          $classes[] = $class;
          $css[$class] = _fullcalendar_colors_build_css_string($class, $color);
        }
      }
    }
  }
  return $css;
}

/**
 * Filters all the term id's found in an array of fields.
 *
 * @param $fields
 *   An array filled with fields.
 *
 * @return
 *   List of the term ids found in the given fields.
 */
function _fullcalendar_colors_filter_term_ids($fields) {
  $term_ids = array();
  foreach ($fields as $key => $value) {
    foreach ($value as $language => $term) {
      foreach ($term as $content) {
        if (isset($content['tid'])) {
          $term_ids[] = $content['tid'];
        }
      }
    }
  }
  return $term_ids;
}
