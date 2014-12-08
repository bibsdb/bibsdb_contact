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

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function bibsdb_contact_default_page_manager_handlers_alter(&$data) {
  if (isset($data['contact_site_panel_context'])) {
    $data['contact_site_panel_context']->conf['display']->content['new-ff3120ab-167f-465a-af7e-52910388bc4f'] = (object) array(
          'pid' => 'new-ff3120ab-167f-465a-af7e-52910388bc4f',
          'panel' => 'main_content',
          'type' => 'custom',
          'subtype' => 'bibsdb_contact_form_text',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => '',
            'title' => '',
            'body' => '',
            'format' => 'html',
            'substitute' => TRUE,
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'ff3120ab-167f-465a-af7e-52910388bc4f',
        ); /* WAS: '' */
    $data['contact_site_panel_context']->conf['display']->panels['main_content'][1] = 'new-ff3120ab-167f-465a-af7e-52910388bc4f'; /* WAS: '' */
  }
}
