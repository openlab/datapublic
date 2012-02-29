<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 //dpm(get_defined_vars());
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
    // We basically need to calculate this here, because in the preprocess
    // functions, we can't find out what row we're on!
    if (count($variables['view']->result[$id]->field_field_slide_caption) > 0) {
      $data_caption_attribute = ' data-caption="#' . $view_identifier . $variables['view']->result[$id]->nid . '"'; // Node id for this row...;
    }
    else {
      $data_caption_attribute = '';
    }
  ?>
  <div class="<?php print $classes_array[$id]; ?> orbit-slide"<?php print $data_caption_attribute; ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>