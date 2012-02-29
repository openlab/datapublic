<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
*/
?>
<article id="node-<?php print $node->nid; ?>" class=" <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php //Left over from node.tpl.php Do we need it?>
  <?php if ($user_picture || !$page || $display_submitted): ?>
  <header class="entry-header">
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  </header>
  <?php endif; ?>

  <div class="subheader">
    <div class="event-date">
    <?php
      print $variables['from_date'];
      if (isset($variables['to_date'])) {
        print ' - ' . $variables['to_date'];
      }
    ?>
    </div>
    <div class="event-time">
    <?php
      print $variables['from_time'];
      if (isset($variables['to_time'])) {
        print ' - ' . $variables['to_time'];
      }
    ?>
    </div>
    <div class="event-location">
    <?php print render($content['field_event_location']); ?>
    <?php print theme('ctools_collapsible', array('handle' => 'Map (Click to open)', 'content' => render($content['field_event_loc_geocode']), 'collapsed' => TRUE)); ?>
    </div>
  </div>

  <?php print render($content['body']); ?>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
  <footer>
    <?php print render($content['field_tags']); ?>
    <?php print render($content['links']); ?>
  </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>
</article> <!-- /.node -->