<?php
/**
 * @file
 * datapublic_photo_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datapublic_photo_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create photo_gallery content
  $permissions['create photo_gallery content'] = array(
    'name' => 'create photo_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any photo_gallery content
  $permissions['delete any photo_gallery content'] = array(
    'name' => 'delete any photo_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own photo_gallery content
  $permissions['delete own photo_gallery content'] = array(
    'name' => 'delete own photo_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any photo_gallery content
  $permissions['edit any photo_gallery content'] = array(
    'name' => 'edit any photo_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own photo_gallery content
  $permissions['edit own photo_gallery content'] = array(
    'name' => 'edit own photo_gallery content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  return $permissions;
}
