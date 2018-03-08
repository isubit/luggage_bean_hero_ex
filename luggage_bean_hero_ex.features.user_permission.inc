<?php
/**
 * @file
 * luggage_bean_hero_ex.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_hero_ex_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any hero_ex bean'.
  $permissions['edit any hero_ex bean'] = array(
    'name' => 'edit any hero_ex bean',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any hero_ex bean'.
  $permissions['view any hero_ex bean'] = array(
    'name' => 'view any hero_ex bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
