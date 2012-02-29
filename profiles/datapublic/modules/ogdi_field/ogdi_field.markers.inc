<?php

/**
 * @file
 *
 * Functions that return data used in the ogdi_field field.
 *
 */

function ogdi_field_markers() {
  return _ogdi_field_make_assoc(array(
    'Title', 'Description', 'Latitude', 'Longitude',
  ));
}

function _ogdi_field_make_assoc($arr) {
  $newarr = array();
  foreach ($arr as $el) {
    $newarr[_ogdi_field_make_machine_name($el)] = $el;
  }
  return $newarr;
}

function _ogdi_field_make_machine_name($name) {
  return str_replace(' ', '_', strtolower($name));
}