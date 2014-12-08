<?php
/**
 * @file
 * bibsdb_contact.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_contact_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: fe_block_settings
  $overrides["fe_block_settings.formblock-contact_site.themes|bibsdb"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'bibsdb',
    'weight' => 0,
  );

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.contact_site_panel_context.conf|display|content|new-ff3120ab-167f-465a-af7e-52910388bc4f"] = (object) array(
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
    );
  $overrides["page_manager_handlers.contact_site_panel_context.conf|display|panels|main_content|1"] = 'new-ff3120ab-167f-465a-af7e-52910388bc4f';

 return $overrides;
}
