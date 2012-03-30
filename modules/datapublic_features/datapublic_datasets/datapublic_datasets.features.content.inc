<?php
/**
 * @file
 * datapublic_datasets.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datapublic_datasets_content_defaults() {
  $content = array();

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
      'weight' => '10',
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

return $content;
}
