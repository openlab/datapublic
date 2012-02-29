<?php
/**
 * Implements hook_init
 */
function datapublic_init() {
 $cache = cache_get("datapublic_info");
 if (isset($cache->data)) {
   $data = $cache->data;
 }
 else {
   $info =  drupal_parse_info_file(dirname(__file__) . '/datapublic.info');
   $data = array("profile" => "datapublic", "profile_version" => $info['version']);
   cache_set("datapublic_info", $data);
 }
 drupal_add_js($data, 'setting');

}


/**
 * Implements hook_install_configure_form_alter()
 */
function datapublic_form_install_configure_form_alter(&$form, &$form_state) {
  $form['site_information']['site_name']['#default_value'] = 'DataPublic'; 
  $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
  $form['server_settings']['site_default_country']['#default_value'] = 'CA';
}
