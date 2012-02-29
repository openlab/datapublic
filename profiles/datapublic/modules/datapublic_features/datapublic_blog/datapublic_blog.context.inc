<?php
/**
 * @file
 * datapublic_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_archive';
  $context->description = 'Blog archive listings and term listing pages';
  $context->tag = 'Blog';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_terms' => 'blog_terms',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog:page_1' => 'blog:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blog',
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Blog archive listings and term listing pages');
  $export['blog_archive'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_listings';
  $context->description = 'Context for all blog listings pages, including archive and individual blog entry nodes';
  $context->tag = 'Blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_entry' => 'blog_entry',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog*' => 'blog*',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog' => 'blog',
        'blog:page' => 'blog:page',
        'blog:page_1' => 'blog:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_categories-block' => array(
          'module' => 'views',
          'delta' => 'blog_categories-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Context for all blog listings pages, including archive and individual blog entry nodes');
  $export['blog_listings'] = $context;

  return $export;
}
