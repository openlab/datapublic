<?php
/**
 * @file
 * datapublic_defaults.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datapublic_defaults_content_defaults() {
  $content = array();

  $content['about_page'] = (object) array(
    'exported_path' => 'about',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/about_page',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(
        'attributes' => array(
          'title' => 'About',
        ),
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-49',
      'identifier' => 'main-menu:node-name/about_page',
    ),
    'title' => 'About',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1326224303',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'about_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p align="LEFT">Known now for its lush natural environment and laidback lifestyle, Our Town is a city with a rich and varied history. Originally a trading centre prior to the arrival of the Europeans, Our Town was at the heart of the country’s gateway to the west.</p><p align="LEFT">Over the past several decades, Our Town has developed into a diverse and multicultural city complete with award-winning restaurants, high-end shops, world-renowned museums and a vibrant arts and culture scene.</p><p align="LEFT">Looking forward, City Council wants to define Our Town by its sustainability, opportunity, and sense of community pride. Working collaboratively with residents, a civic plan has been developed to achieve several benchmarks to this effect over the remainder of the Mayor\'s term in office.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p align="LEFT">Known now for its lush natural environment and laidback lifestyle, Our Town is a city with a rich and varied history. Originally a trading centre prior to the arrival of the Europeans, Our Town was at the heart of the country’s gateway to the west.</p>
  <p align="LEFT">Over the past several decades, Our Town has developed into a diverse and multicultural city complete with award-winning restaurants, high-end shops, world-renowned museums and a vibrant arts and culture scene.</p>
  <p align="LEFT">Looking forward, City Council wants to define Our Town by its sustainability, opportunity, and sense of community pride. Working collaboratively with residents, a civic plan has been developed to achieve several benchmarks to this effect over the remainder of the Mayor\'s term in office.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => 'ON',
          'sub_administrative_area' => NULL,
          'locality' => 'Ottawa',
          'dependent_locality' => NULL,
          'postal_code' => 'K1A 0A6',
          'thoroughfare' => '1 Wellington Street',
          'premise' => 'Ottawa, Ontario K1A 0A6',
          'sub_premise' => NULL,
          'organisation_name' => 'Government of Canada',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-75.6997061 45.4248713)',
          'geo_type' => 'point',
          'lat' => '45.4249',
          'lon' => '-75.6997',
          'left' => '-75.6997',
          'top' => '45.4249',
          'right' => '-75.6997',
          'bottom' => '45.4249',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['contact_page'] = (object) array(
    'exported_path' => 'contact-us',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/contact_page',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => array(
        'attributes' => array(
          'title' => 'Contact',
        ),
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'main-menu:node-name/contact_page',
    ),
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => 'TRUE',
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'name',
          'name' => 'Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => '1',
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => '1',
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'phone',
          'name' => 'Phone',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '2',
          'page_num' => '1',
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'message',
          'name' => 'Message',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => '1',
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => '1',
        ),
      ),
    ),
    'title' => 'Contact Us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'en',
    'created' => '1329939738',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'contact_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>XYZ Agency Offices are located at:</h2>
  <h3>1 Wellington Street<br />Ottawa, Ontario K1A 0A6</h3>
  <p>Email: <a href="mailto:info@parl.gc.ca">info@parl.gc.ca</a><br /> Phone: (800) 622-6232</p>
  <p>Our offices are available</p>
  <p>M-F 8:30 am to 4:30 pm.</p>
  <h4>We\'re here to serve you. Please tell us how we can be of assistance.</h4>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h2>XYZ Agency Offices are located at:</h2>
  <h3>1 Wellington Street<br />Ottawa, Ontario K1A 0A6</h3>
  <p>Email: <a href="mailto:info@parl.gc.ca">info@parl.gc.ca</a><br /> Phone: (800) 622-6232</p>
  <p>Our offices are available</p>
  <p>M-F 8:30 am to 4:30 pm.</p>
  <h4>We\'re here to serve you. Please tell us how we can be of assistance.</h4>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['css_test_page'] = (object) array(
    'title' => 'CSS Test Page',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1329421398',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'css_test_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h1>This Is An H1 Tag</h1><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h2>This Is An H2 Tag</h2><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h3>This Is An H3 Tag</h3><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h4>This Is An H4 Tag</h4><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h5>This Is An H5 Tag</h5><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h2>Blockquote</h2><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><blockquote>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</blockquote><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h2>Image</h2><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><p><img src="http://hivemindlabs.com/plugin-data/hive.jpg" alt="" width="100%" /></p><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h2>Links</h2><p>Lorem ipsum dolor sit amet, <a href="#">consectetur adipisicing</a> elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. <a href="#">Duis aute irure</a> dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia <a href="#">deserunt</a> mollit anim id est laborum.</p><h2>Lists</h2><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><ul><li>First Item</li><li>Second Item</li><li>Third Item</li><li>Fourth Item</li><li>Fifth Item</li></ul><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><ol><li>First Item</li><li>Second Item</li><li>Third Item</li><li>Fourth Item</li><li>Fifth Item</li></ol><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p><h2>Multiple Paragraphs</h2><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h1>This Is An H1 Tag</h1>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h2>This Is An H2 Tag</h2>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h3>This Is An H3 Tag</h3>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h4>This Is An H4 Tag</h4>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h5>This Is An H5 Tag</h5>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h2>Blockquote</h2>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <blockquote><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p></blockquote>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h2>Image</h2>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <p><img src="http://hivemindlabs.com/plugin-data/hive.jpg" alt="" width="100%" /></p>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h2>Links</h2>
  <p>Lorem ipsum dolor sit amet, <a href="#">consectetur adipisicing</a> elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. <a href="#">Duis aute irure</a> dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia <a href="#">deserunt</a> mollit anim id est laborum.</p>
  <h2>Lists</h2>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <ul><li>First Item</li>
  <li>Second Item</li>
  <li>Third Item</li>
  <li>Fourth Item</li>
  <li>Fifth Item</li>
  </ul><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <ol><li>First Item</li>
  <li>Second Item</li>
  <li>Third Item</li>
  <li>Fourth Item</li>
  <li>Fifth Item</li>
  </ol><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
  <h2>Multiple Paragraphs</h2>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
  <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => 'BC',
          'sub_administrative_area' => NULL,
          'locality' => 'Vancouver',
          'dependent_locality' => NULL,
          'postal_code' => 'V6B 1S5',
          'thoroughfare' => '119 West Pender Street',
          'premise' => 'Suite 510',
          'sub_premise' => NULL,
          'organisation_name' => 'Raised Eyebrow Web Studio',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-123.1080504 49.2813009)',
          'geo_type' => 'point',
          'lat' => '49.2813',
          'lon' => '-123.108',
          'left' => '-123.108',
          'top' => '49.2813',
          'right' => '-123.108',
          'bottom' => '49.2813',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['datasets_page'] = (object) array(
    'exported_path' => 'datasets',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/datasets_page',
      'router_path' => 'node/%',
      'link_title' => 'Datasets',
      'options' => array(
        'attributes' => array(
          'title' => 'Datasets',
        ),
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'parent_path' => 'node-name/resources_page',
      'identifier' => 'main-menu:node-name/datasets_page',
    ),
    'title' => 'Datasets',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1326148869',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'datasets_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Pellentesque bibendum ultrices nisl eu interdum. Morbi rutrum lacinia tellus, sed volutpat sem suscipit at. Ut ut cursus tortor. Etiam quis bibendum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Cras nec nibh nisl. Mauris a augue ac augue sagittis cursus. Suspendisse libero nibh, congue nec porttitor non, tempor at elit. Quisque blandit eros quis mi congue vel consequat nibh egestas. Quisque rhoncus, velit et elementum fringilla, dui neque bibendum diam, nec rhoncus justo erat at nibh. Fusce cursus arcu quis urna rutrum ornare. Quisque sit amet diam neque, sit amet lacinia erat. Pellentesque dignissim vestibulum felis, quis consectetur risus ullamcorper ut. Cras eleifend, massa in ornare consectetur, augue augue ultrices leo, vel sodales est lacus in tortor. Etiam vel mi ut nisl scelerisque varius.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Pellentesque bibendum ultrices nisl eu interdum. Morbi rutrum lacinia tellus, sed volutpat sem suscipit at. Ut ut cursus tortor. Etiam quis bibendum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Cras nec nibh nisl. Mauris a augue ac augue sagittis cursus. Suspendisse libero nibh, congue nec porttitor non, tempor at elit. Quisque blandit eros quis mi congue vel consequat nibh egestas. Quisque rhoncus, velit et elementum fringilla, dui neque bibendum diam, nec rhoncus justo erat at nibh. Fusce cursus arcu quis urna rutrum ornare. Quisque sit amet diam neque, sit amet lacinia erat. Pellentesque dignissim vestibulum felis, quis consectetur risus ullamcorper ut. Cras eleifend, massa in ornare consectetur, augue augue ultrices leo, vel sodales est lacus in tortor. Etiam vel mi ut nisl scelerisque varius.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => '',
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => '',
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => '',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-119.4179324 36.778261)',
          'geo_type' => 'point',
          'lat' => '36.7783',
          'lon' => '-119.418',
          'left' => '-119.418',
          'top' => '36.7783',
          'right' => '-119.418',
          'bottom' => '36.7783',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['document_page'] = (object) array(
    'exported_path' => 'resources/documents',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/document_page',
      'router_path' => 'node/%',
      'link_title' => 'Documents',
      'options' => array(
        'attributes' => array(
          'title' => 'Documents',
        ),
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-50',
      'parent_path' => 'node-name/resources_page',
      'identifier' => 'main-menu:node-name/document_page',
    ),
    'title' => 'Documents',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1324586186',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'document_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The quick, brown fox jumps over a lazy dog. DJs flock by when MTV ax quiz prog. Junk MTV quiz graced by fox whelps. Bawds jog, flick quartz, vex nymphs. Waltz, bad nymph, for quick jigs vex! Fox nymphs grab quick-jived waltz. Brick quiz whangs jumpy veldt fox. Bright vixens jump; dozy fowl quack. Quick wafting zephyrs vex bold Jim. Quick zephyrs blow, vexing daft Jim. Sex-charged fop blew my junk TV quiz. How quickly daft jumping zebras vex. Two driven jocks help fax my big quiz. Quick, Baz, get my woven flax jodhpurs! "Now fax quiz Jack! " my brave ghost pled. Five quacking zephyrs jolt my wax bed. Flummoxed by job, kvetching W. zaps Iraq. Cozy sphinx waves quart jug of bad milk. ',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>The quick, brown fox jumps over a lazy dog. DJs flock by when MTV ax quiz prog. Junk MTV quiz graced by fox whelps. Bawds jog, flick quartz, vex nymphs. Waltz, bad nymph, for quick jigs vex! Fox nymphs grab quick-jived waltz. Brick quiz whangs jumpy veldt fox. Bright vixens jump; dozy fowl quack. Quick wafting zephyrs vex bold Jim. Quick zephyrs blow, vexing daft Jim. Sex-charged fop blew my junk TV quiz. How quickly daft jumping zebras vex. Two driven jocks help fax my big quiz. Quick, Baz, get my woven flax jodhpurs! "Now fax quiz Jack! " my brave ghost pled. Five quacking zephyrs jolt my wax bed. Flummoxed by job, kvetching W. zaps Iraq. Cozy sphinx waves quart jug of bad milk. </p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => '',
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => '',
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => '',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-119.4179324 36.778261)',
          'geo_type' => 'point',
          'lat' => '36.7783',
          'lon' => '-119.418',
          'left' => '-119.418',
          'top' => '36.7783',
          'right' => '-119.418',
          'bottom' => '36.7783',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['mediaroom_page'] = (object) array(
    'exported_path' => 'media-room',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/mediaroom_page',
      'router_path' => 'node/%',
      'link_title' => 'Media Room',
      'options' => array(
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-46',
      'identifier' => 'main-menu:node-name/mediaroom_page',
    ),
    'title' => 'Media Room',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1324669715',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'mediaroom_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The quick, brown fox jumps over a lazy dog. DJs flock by when MTV ax quiz prog. Junk MTV quiz graced by fox whelps. Bawds jog, flick quartz, vex nymphs. Waltz, bad nymph, for quick jigs vex! Fox nymphs grab quick-jived waltz. Brick quiz whangs jumpy veldt fox. Bright vixens jump; dozy fowl quack. Quick wafting zephyrs vex bold Jim. Quick zephyrs blow, vexing daft Jim. Sex-charged fop blew my junk TV quiz. How quickly daft jumping zebras vex. Two driven jocks help fax my big quiz. Quick, Baz, get my woven flax jodhpurs! "Now fax quiz Jack! " my brave ghost pled. Five quacking zephyrs jolt my wax bed. Flummoxed by job, kvetching W. zaps Iraq. Cozy sphinx waves quart jug of bad milk.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>The quick, brown fox jumps over a lazy dog. DJs flock by when MTV ax quiz prog. Junk MTV quiz graced by fox whelps. Bawds jog, flick quartz, vex nymphs. Waltz, bad nymph, for quick jigs vex! Fox nymphs grab quick-jived waltz. Brick quiz whangs jumpy veldt fox. Bright vixens jump; dozy fowl quack. Quick wafting zephyrs vex bold Jim. Quick zephyrs blow, vexing daft Jim. Sex-charged fop blew my junk TV quiz. How quickly daft jumping zebras vex. Two driven jocks help fax my big quiz. Quick, Baz, get my woven flax jodhpurs! "Now fax quiz Jack! " my brave ghost pled. Five quacking zephyrs jolt my wax bed. Flummoxed by job, kvetching W. zaps Iraq. Cozy sphinx waves quart jug of bad milk.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => '',
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => '',
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => '',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-119.4179324 36.778261)',
          'geo_type' => 'point',
          'lat' => '36.7783',
          'lon' => '-119.418',
          'left' => '-119.418',
          'top' => '36.7783',
          'right' => '-119.418',
          'bottom' => '36.7783',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['resources_page'] = (object) array(
    'exported_path' => 'resources',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/resources_page',
      'router_path' => 'node/%',
      'link_title' => 'Resources',
      'options' => array(
        'attributes' => array(
          'title' => 'Resources',
        ),
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-47',
      'identifier' => 'main-menu:node-name/resources_page',
    ),
    'title' => 'Resources',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1324589806',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'resources_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Pellentesque bibendum ultrices nisl eu interdum. Morbi rutrum lacinia tellus, sed volutpat sem suscipit at. Ut ut cursus tortor. Etiam quis bibendum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Cras nec nibh nisl. Mauris a augue ac augue sagittis cursus. Suspendisse libero nibh, congue nec porttitor non, tempor at elit. Quisque blandit eros quis mi congue vel consequat nibh egestas. Quisque rhoncus, velit et elementum fringilla, dui neque bibendum diam, nec rhoncus justo erat at nibh. Fusce cursus arcu quis urna rutrum ornare. Quisque sit amet diam neque, sit amet lacinia erat. Pellentesque dignissim vestibulum felis, quis consectetur risus ullamcorper ut. Cras eleifend, massa in ornare consectetur, augue augue ultrices leo, vel sodales est lacus in tortor. Etiam vel mi ut nisl scelerisque varius.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Pellentesque bibendum ultrices nisl eu interdum. Morbi rutrum lacinia tellus, sed volutpat sem suscipit at. Ut ut cursus tortor. Etiam quis bibendum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Cras nec nibh nisl. Mauris a augue ac augue sagittis cursus. Suspendisse libero nibh, congue nec porttitor non, tempor at elit. Quisque blandit eros quis mi congue vel consequat nibh egestas. Quisque rhoncus, velit et elementum fringilla, dui neque bibendum diam, nec rhoncus justo erat at nibh. Fusce cursus arcu quis urna rutrum ornare. Quisque sit amet diam neque, sit amet lacinia erat. Pellentesque dignissim vestibulum felis, quis consectetur risus ullamcorper ut. Cras eleifend, massa in ornare consectetur, augue augue ultrices leo, vel sodales est lacus in tortor. Etiam vel mi ut nisl scelerisque varius.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => '',
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => '',
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => '',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-119.4179324 36.778261)',
          'geo_type' => 'point',
          'lat' => '36.7783',
          'lon' => '-119.418',
          'left' => '-119.418',
          'top' => '36.7783',
          'right' => '-119.418',
          'bottom' => '36.7783',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['services_page'] = (object) array(
    'exported_path' => 'services',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/services_page',
      'router_path' => 'node/%',
      'link_title' => 'Services',
      'options' => array(
        'langcode' => 'en',
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-48',
      'identifier' => 'main-menu:node-name/services_page',
    ),
    'title' => 'Services',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1325634679',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'services_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The quick, brown fox jumps over a lazy dog. DJs flock by when MTV ax quiz prog. Junk MTV quiz graced by fox whelps. Bawds jog, flick quartz, vex nymphs. Waltz, bad nymph, for quick jigs vex! Fox nymphs grab quick-jived waltz. Brick quiz whangs jumpy veldt fox. Bright vixens jump; dozy fowl quack. Quick wafting zephyrs vex bold Jim. Quick zephyrs blow, vexing daft Jim. Sex-charged fop blew my junk TV quiz. How quickly daft jumping zebras vex. Two driven jocks help fax my big quiz. Quick, Baz, get my woven flax jodhpurs! "Now fax quiz Jack! " my brave ghost pled. Five quacking zephyrs jolt my wax bed. Flummoxed by job, kvetching W. zaps Iraq. Cozy sphinx waves quart jug of bad milk.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>The quick, brown fox jumps over a lazy dog. DJs flock by when MTV ax quiz prog. Junk MTV quiz graced by fox whelps. Bawds jog, flick quartz, vex nymphs. Waltz, bad nymph, for quick jigs vex! Fox nymphs grab quick-jived waltz. Brick quiz whangs jumpy veldt fox. Bright vixens jump; dozy fowl quack. Quick wafting zephyrs vex bold Jim. Quick zephyrs blow, vexing daft Jim. Sex-charged fop blew my junk TV quiz. How quickly daft jumping zebras vex. Two driven jocks help fax my big quiz. Quick, Baz, get my woven flax jodhpurs! "Now fax quiz Jack! " my brave ghost pled. Five quacking zephyrs jolt my wax bed. Flummoxed by job, kvetching W. zaps Iraq. Cozy sphinx waves quart jug of bad milk.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_page_location' => array(
      'und' => array(
        0 => array(
          'country' => 'CA',
          'administrative_area' => '',
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => '',
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => '',
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_page_loc_geocode' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-119.4179324 36.778261)',
          'geo_type' => 'point',
          'lat' => '36.7783',
          'lon' => '-119.418',
          'left' => '-119.418',
          'top' => '36.7783',
          'right' => '-119.418',
          'bottom' => '36.7783',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

return $content;
}
