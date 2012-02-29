<?php
/**
 * @file
 * datapublic_defaults.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function datapublic_defaults_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '4',
  );

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '3',
  );

  return $roles;
}
