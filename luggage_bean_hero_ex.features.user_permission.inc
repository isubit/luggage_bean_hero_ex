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

  // Exported permission: 'view any hero_ex bean'.
  $permissions['view any hero_ex bean'] = array(
    'name' => 'view any hero_ex bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
