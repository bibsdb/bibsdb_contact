<?php
/**
 * @file
 * bibsdb_contact.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function bibsdb_contact_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'bibsdb_contact_form_text';
  $content->admin_title = 'Kontakt-formular - tekst';
  $content->admin_description = 'Adds a little text above the contact form.';
  $content->category = 'Bibsdb';
  $content->settings = array(
    'admin_title' => 'Kontakt-formular - tekst',
    'title' => 'Kontakt',
    'body' => '<h4>Spørgsmål og ønsker til bestillinger skal ske ved personlig eller telefonisk henvendelse.</h4>
<br>
',
    'format' => 'html',
    'substitute' => TRUE,
  );
  $export['bibsdb_contact_form_text'] = $content;

  return $export;
}
