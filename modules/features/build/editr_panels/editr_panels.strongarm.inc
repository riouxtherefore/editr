<?php
/**
 * @file
 * editr_panels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function editr_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array(
    'content' => TRUE,
  );
  $export['default_page_manager_pages'] = $strongarm;

  return $export;
}
