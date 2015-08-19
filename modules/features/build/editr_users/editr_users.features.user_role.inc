<?php
/**
 * @file
 * editr_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function editr_users_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 11,
  );

  return $roles;
}
