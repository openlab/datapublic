<div id="photo_gallery">

  <?php $captions="";?>

	<?php foreach ($items as $delta => $item): ?>

	   <?php
	    $caption_call = "";
	    if (isset($item['#item']['title']) && $item['#item']['title'] != ""){
        $uniqueID = 'gallery-caption-'.$item['#item']['fid'];
        $captions .= '<span class="orbit-caption" id="'.$uniqueID.'">'.$item['#item']['title'].'</span>';
        $caption_call = 'data-caption="#'.$uniqueID.'"';
      } ?>

      <div class="orbit-slide" <?php print $caption_call; ?>>
        <?php print render($item);?>
      </div>

  <?php endforeach; ?>
  <?php print $captions; ?>

</div>


