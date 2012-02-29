<?php
/**
 * @file
 * datapublic_slideshow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function datapublic_slideshow_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_information|node|slide|form';
  $field_group->group_name = 'group_slide_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_slide_link',
      1 => 'field_slide_photo',
      2 => 'field_slide_photo_only',
      3 => 'field_slide_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide_information|node|slide|form'] = $field_group;

  return $export;
}
