<?php

/**
 * @file
 * Provides theming resources to be used in the Document content type.
 *
 * @todo
 *  --  implement rdf attributes in created and submitted times in node template
 */


/**
 * Implements template_preprocess_node().
 *
 * We build the download link parts here--again!--because it doesn't seem possible
 * to override theme_file_link() from here in a way that themes can ALSO override
 * (in other words, doing it using hook_theme() doesn't work, and the only other
 * alternative is to use hook_theme_registry_alter() which themes can't alter--at
 * least not without implementing their own version of theme registry alter).
 */
function datapublic_documents_preprocess_node(&$variables) {
  if (isset($variables['field_document_attachment'])) {
    // Build the download url:
    $download_link_url = file_create_url($variables['field_document_attachment'][0]['uri']);
    // Set options as per anchor format described at
    // http://microformats.org/wiki/file-format-examples
    $download_link_options = array(
      'attributes' => array(
        'type' => $variables['field_document_attachment'][0]['filemime'] . '; length=' . $variables['field_document_attachment'][0]['filesize'],
      ),
    );
    // Make the download link:
    $variables['document_download_link'] = l(t('Download Now'), $download_link_url, $download_link_options);
    // Make the file size available:
    $variables['document_filesize'] = format_size($variables['field_document_attachment'][0]['filesize']);
    // Provide a separate variable for file type too:
    $variables['document_filetype'] = strtoupper(pathinfo($download_link_url, PATHINFO_EXTENSION));
  }
} // datapublic_documents_preprocess_node()


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
function datapublic_documents_theme($existing, $type, $theme, $path) {
  // Provide template for document content type:
  $document = isset($existing['node']) ? $existing['node'] : array();
  $document['path'] = $path . '/theme';
  $document['template'] = 'node--document';
  return array(
    'node__document' => $document,
  );
} // datapublic_documents_theme()