<?php
/**
 * @file
 * datapublic_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datapublic_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_terms' => array(
      'name' => 'Blog Terms',
      'machine_name' => 'blog_terms',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
