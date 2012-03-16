<?php
/**
 * @file
 * datapublic_documents.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datapublic_documents_content_defaults() {
  $content = array();

  $content['document_page'] = (object) array(
    'exported_path' => 'documents',
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
      'weight' => '0',
      'parent_path' => 'node-name/resources_page',
      'identifier' => 'main-menu:node-name/document_page',
    ),
    'title' => 'Documents',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'en',
    'created' => '1326148869',
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

return $content;
}
