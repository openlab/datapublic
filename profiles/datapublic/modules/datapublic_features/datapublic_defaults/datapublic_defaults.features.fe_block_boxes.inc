<?php
/**
 * @file
 * datapublic_defaults.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function datapublic_defaults_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Newsletter Signup Footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'newsletter_signup_block';
  $fe_block_boxes->body = '<p>You should sign up for our newsletter using the form below.</p><form id="mc-embedded-subscribe-form" class="validate" action="" method="post" name="mc-embedded-subscribe-form" target="_blank"><div><input id="mce-EMAIL" class="form-text" type="email" name="EMAIL" value="" /> <input id="mc-embedded-subscribe" class="form-submit" type="submit" name="subscribe" value="sign up" /></div></form>';

  $export['newsletter_signup_block'] = $fe_block_boxes;

  return $export;
}
