<?php
// $Id$

/**
 * @file
 * Provides all of the necessary functions for the Dataset content type
 */

/**
 * Implements of hook_theme().
 *
 * @note:
 *
 * it seems that, in some circumstances, $existing['node'] doesn't exist
 * when this function runs (module weight? phase of the moon?), but the
 * documents template still works (presumably since node arrives and the
 * proper hierarchy is established at some point). We check for it just to
 * prevent php warnings and Drupal message reporting these.
 */
function datapublic_datasets_theme($existing, $type, $theme, $path) {  
  $dataset = isset($existing['node']) ? $existing['node'] : array();
  $dataset['path'] = $path . '/theme';
  $dataset['template'] = 'node--dataset';
	
  return array(
    'node__dataset' => $dataset,
    'dataset_indicators' => array(
      'variables' => NULL
    ),
  );
}


/**
 * Theming function which will wrap the computed file format 
 * indicators in a span for ease of theming.
 */
function theme_dataset_indicators($variables) {
  $output = '';
  if(count($variables) > 0) {
    foreach($variables as $indicator) {
      $output .= '<span>' . $indicator . '</span>';
    } 
  }
  return $output;
}


/**
 * Implements hook_preprocess_node()
 */
function datapublic_datasets_preprocess_node($variables) {
  // If this is a dataset...
  if($variables['type'] == 'dataset') {
    // Merge the filed collection entities...
    if($variables['field_dataset_external'] && $variables['field_dataset_upload']) {
      $field_collections = array_merge($variables['field_dataset_external'], $variables['field_dataset_upload']);
    } elseif ($variables['field_dataset_external'] && !$variables['field_dataset_upload']) {
      $field_collections = $variables['field_dataset_external'];
    } elseif (!$variables['field_dataset_external'] && $variables['field_dataset_upload']) {
      $field_collections = $variables['field_dataset_upload'];
    }
    // Loop through the field_collection entities...
    foreach($field_collections as $field_collection) {
      // Get each field collection id...
      $field_collection_id = $field_collection['value'];
      // Now load each field collection entity to get all of its contained fields...
      $entity = entity_load('field_collection_item', array($field_collection_id));
      // Get the fieldname so that we know if this is internal or external file...
      $fieldname = $entity[$field_collection_id]->field_name;
      // Depending on the file type, internal or external, create a table outputting all the necessary information...
      switch($fieldname) {
        case 'field_dataset_external':
          if(count($entity[$field_collection_id]->field_dataset_external_url) > 0) {
            $table['rows'][]   = array(
              ($entity[$field_collection_id]->field_dataset_external_desc['und'][0]['safe_value'] != '') ? $entity[$field_collection_id]->field_dataset_external_desc['und'][0]['safe_value'] : $entity[$field_collection_id]->field_dataset_external_url['und'][0]['display_url'],
              $entity[$field_collection_id]->field_dataset_external_format['und'][0]['value'],
              l(t('Download'), $entity[$field_collection_id]->field_dataset_external_url['und'][0]['display_url'], array('attributes' => array('class' => 'external'))),
            );
          }
          break;
        case 'field_dataset_upload':
          if(count($entity[$field_collection_id]->field_dataset_upload_file) > 0) {
            $table['rows'][] = array(
              $entity[$field_collection_id]->field_dataset_upload_description['und'][0]['safe_value'],
              $entity[$field_collection_id]->field_dataset_upload_file_format['und'][0]['value'],
              l(t('Download'), file_create_url($entity[$field_collection_id]->field_dataset_upload_file['und'][0]['uri'])),
            );
          }
          break;
      }
    }
    // Create a renderable array variable for use in the template...
    $variables['node']->dataset_resources_table = array(
      '#theme' => 'table',
      '#rows' => $table['rows'],
    );
  }
}
