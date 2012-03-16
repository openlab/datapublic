<?php
/**
 * @file
 * datapublic_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function datapublic_blocks_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'newsletter_signup';
  $box->plugin_key = 'simple';
  $box->title = 'Newsletter Sign Up';
  $box->description = 'Newsletter Sign Up';
  $box->options = array(
    'body' => array(
      'value' => '<p>You should sign up for our newsletter using the form below.</p><form id="mc-embedded-subscribe-form" class="validate" action="" method="post" name="mc-embedded-subscribe-form" target="_blank"><div><input id="mce-EMAIL" class="form-text" type="email" name="EMAIL" value="" /> <input id="mc-embedded-subscribe" class="form-submit" type="submit" name="subscribe" value="sign up" /></div></form>',
      'format' => 'full_html',
    ),
    'additional_classes' => 'four',
  );
  $export['newsletter_signup'] = $box;

  return $export;
}
