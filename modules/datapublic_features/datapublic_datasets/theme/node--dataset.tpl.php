<article id="node-<?php print $node->nid; ?>" class=" <?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="entry-content"<?php print $content_attributes; ?>>
    <?php
      // We hide all the fields now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['field_dataset_name']);
      hide($content['body']);
      hide($content['field_dataset_release_date']);
      hide($content['field_dataset_updated_date']);
      hide($content['field_dataset_contact_name']);
      hide($content['field_dataset_contact_department']);
      hide($content['field_dataset_contact_email']);
      hide($content['field_dataset_tags']);
      hide($content['field_dataset_ogdi']);
    ?>
    <h3 class="subheader"><?php print render($content['field_dataset_name']); ?></h3>
    <p><?php print render($content['field_body']); ?></p>
    <div class="row">
      <div class="four columns block">
        <div class="title">
          <h2><?php print t('Details'); ?></h2>
        </div>
        <div class="content">
          <h3><?php print t('Released'); ?></h3> <?php print render($content['field_dataset_release_date']); ?>
          <h3><?php print t('Last Updated'); ?></h3> <?php print render($content['field_dataset_updated_date']); ?>
        </div>
      </div>
      <div class="four columns block">
        <div class="title">
          <h2><?php print t('Contact'); ?></h2>
    		</div>
        <div class="content"> 
          <h3><?php print render($content['field_dataset_contact_name']); ?></h3>
          <?php print render($content['field_dataset_contact_department']); ?>
          <a href="mailto:<?php print $node->field_dataset_contact_email['und'][0]['value']; ?>"><?php print render($content['field_dataset_contact_email']); ?></a>
        </div>
      </div>
      <div class="four columns block">
        <div class="title">
          <h2><?php print t('Filed in'); ?></h2>
        </div>
        <div class="content">
          <?php print render($content['field_dataset_tags']); ?>
        </div>
      </div>
    </div><!-- /row -->
    <div class="row block">
      <div class="title">
        <h2><?php print t('Resources'); ?></h2>
      </div>
      <div class="content">
        <h3><?php print t('Downloads'); ?></h3>
        <?php print render($node->dataset_resources_table); ?> 
        <h3>OGDI Dataset</h3>
        <?php print render($content['field_dataset_ogdi']); ?> 
      </div>
    </div><!-- /row -->
  </div> <!-- /.entry-content -->
</article> <!-- /.node -->
