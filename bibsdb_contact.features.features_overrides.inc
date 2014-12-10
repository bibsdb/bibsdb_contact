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

 return $overrides;
}
