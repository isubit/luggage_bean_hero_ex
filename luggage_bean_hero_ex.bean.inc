<?php
/**
 * @file
 * luggage_bean_announcement.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_hero_ex_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'hero_ex';
  $bean_type->label = 'Hero - Expanded';
  $bean_type->options = '';
  $bean_type->description = 'A hero banner with an expanded content area.';
  $export['hero_ex'] = $bean_type;

  return $export;
}