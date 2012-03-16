<?php
/**
 * @file
 * datapublic_datasets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datapublic_datasets_user_default_permissions() {
  $permissions = array();

  // Exported permission: create dataset content
  $permissions['create dataset content'] = array(
    'name' => 'create dataset content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any dataset content
  $permissions['delete any dataset content'] = array(
    'name' => 'delete any dataset content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own dataset content
  $permissions['delete own dataset content'] = array(
    'name' => 'delete own dataset content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any dataset content
  $permissions['edit any dataset content'] = array(
    'name' => 'edit any dataset content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own dataset content
  $permissions['edit own dataset content'] = array(
    'name' => 'edit own dataset content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
