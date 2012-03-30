<?php
/**
 * @file
 * datapublic_datasets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function datapublic_datasets_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_contact|node|dataset|form';
  $field_group->group_name = 'group_dataset_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_dataset_contact_name',
      1 => 'field_dataset_contact_email',
      2 => 'field_dataset_contact_department',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_dataset_contact|node|dataset|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_external|node|dataset|form';
  $field_group->group_name = 'group_dataset_external';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dataset_resources';
  $field_group->data = array(
    'label' => 'Link to external file',
    'weight' => '8',
    'children' => array(
      0 => 'field_dataset_external',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Link to external file',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_dataset_external|node|dataset|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_ogdi|node|dataset|form';
  $field_group->group_name = 'group_dataset_ogdi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dataset_resources';
  $field_group->data = array(
    'label' => 'DataLab OGDI',
    'weight' => '9',
    'children' => array(
      0 => 'field_dataset_ogdi',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'DataLab OGDI',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_dataset_ogdi|node|dataset|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_resources|node|dataset|form';
  $field_group->group_name = 'group_dataset_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '5',
    'children' => array(
      0 => 'group_dataset_external',
      1 => 'group_dataset_uploads',
      2 => 'group_dataset_ogdi',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Resources',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_dataset_resources|node|dataset|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dataset_uploads|node|dataset|form';
  $field_group->group_name = 'group_dataset_uploads';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dataset_resources';
  $field_group->data = array(
    'label' => 'Upload a file',
    'weight' => '7',
    'children' => array(
      0 => 'field_dataset_upload',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Upload a file',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dataset_uploads|node|dataset|form'] = $field_group;

  return $export;
}
