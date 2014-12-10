<?php
/**
 * @file
 * bibsdb_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_fe_block_settings_alter().
 */
function bibsdb_contact_default_fe_block_settings_alter(&$data) {
  if (isset($data['formblock-contact_site'])) {
    $data['formblock-contact_site']['themes']['bibsdb'] = array(
      'region' => '',
      'status' => 0,
      'theme' => 'bibsdb',
      'weight' => 0,
    ); /* WAS: '' */
  }
}
