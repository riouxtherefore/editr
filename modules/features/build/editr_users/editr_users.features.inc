<?php
/**
 * @file
 * editr_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function editr_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
