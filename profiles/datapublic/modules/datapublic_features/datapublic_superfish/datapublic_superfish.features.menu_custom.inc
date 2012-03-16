<?php
/**
 * @file
 * datapublic_superfish.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function datapublic_superfish_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-main-menu-mobile-
  $menus['menu-main-menu-mobile-'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'title' => 'Main Menu (mobile)',
    'description' => 'Main Menu for mobile devices',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main Menu (mobile)');
  t('Main Menu for mobile devices');


  return $menus;
}
