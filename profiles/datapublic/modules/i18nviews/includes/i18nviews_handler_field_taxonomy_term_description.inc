<?php

/**
 * Field handler to provide simple renderer that allows linking to a taxonomy
 * term.
 */
class i18nviews_handler_field_taxonomy_term_description extends views_handler_field_markup {
  function construct() {
    parent::construct();
    $this->additional_fields['tid'] = 'tid';
  }

  function pre_render(&$values) {
    $tids = array();
    foreach ($values as $key => $value) {
      if (isset($value->{$this->field_alias})) {
        $tids[] = $this->get_value($value, 'tid');
      }
    }

    $terms = taxonomy_term_load_multiple($tids);
    i18n_taxonomy_localize_terms($terms, array('description'));
    foreach ($values as $key => $value) {
      if (isset($value->{$this->field_alias})) {
        $tid = $this->get_value($value, 'tid');
        // @todo get the description
        $values[$key]->{$this->field_alias} = $terms[$tid]->description;
      }
    }
  }
}