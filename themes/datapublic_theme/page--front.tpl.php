<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:

          <?php kpr(get_defined_vars());?>
 */
?>

<div id="page" class="hfeed container" role="main">
  
  <p id="skip-link"><em><a href="#access">Skip to Navigation</a></em> &darr;</p>
  
  <div id="highlighted" class="row">
  	<div class="columns twelve centered">
      <?php if ($page['highlighted']): ?>
        <?php print render($page['highlighted']); ?>
      <?php endif; ?>
    </div>
  </div>

  <?php // TITLE / LOGO and DESCRIPTION  ?>
	<hgroup id="header-wrapper" class="row hide-on-phones">    
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="columns two">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>   
    <div class="columns ten">
      <div class="row">        
        <div id="header-region" class="columns twelve">
          <?php // Search Bar region  ?>
          <?php print render($page['header']) ?>
        </div>
      </div>
      <div class="row">
        <div id="site-name-description-wrap" class="columns twelve">     
           
        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name"><strong>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </strong></div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif;
            endif;?>

  		  <?php if ($site_slogan): ?>
          <h4 id="site-slogan"><?php print $site_slogan; ?></h4>
        <?php endif; //if ($site_slogan) ?>
        </div>
      </div> <?php // row?>
      
      
    </div><?php // columns ten?>
	</hgroup>


  <?php // TITLE / LOGO and DESCRIPTION  (MOBILE?>
	<hgroup id="header-wrapper" class="row show-on-phones">    
        <div id="site-name-description-wrap" class="columns twelve">        
        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name"><strong>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </strong></div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif;
            endif;?>
  		  <?php if ($site_slogan): ?>
          <h4 id="site-slogan"><?php print $site_slogan; ?></h4>
        <?php endif; //if ($site_slogan) ?>
        <div class="row">
        <?php print render($page['header']) ?>
        </div>
        </div>
	</hgroup>

	
  <div class="row" id="wrapper">
    <?php // Header  ?>
  	<header id="branding" role="banner" class="row">
       <?php //UTILITIES  ?>
      <?php if ($page['nav'] || $breadcrumb): ?>
      <div id="utilities" class="row">
        <?php //MAIN MENU NAVBAR  ?>
        <?php if ($page['nav']): ?>
    		<nav id="access" role="navigation" class="row hide-on-phones">
          <?php print render($page['nav']); ?>
        </nav>
    		<nav id="access-mobile" role="navigation" class="row show-on-phones">
          <?php print render($page['nav_mobile']); ?>
        </nav>
        <?php endif; ?>
        <?php if ($breadcrumb): ?>
        <nav id="breadcrumb-row" role="navigation" class="row">
          <div id="breadcrumb">
            <?php print $breadcrumb; ?>
          </div>
        </nav>
        <?php endif; ?>
      </div>
      <?php endif; ?>
			
			<div id="page-top" class="row">
      	<div class="columns twelve centered">
          <?php if ($page['top_page']): ?>
            <?php print render($page['top_page']); ?>
          <?php endif; ?>
        </div>
      </div>  
    </header> <?php // /.section, /#header  ?>
  
    <?php // Main Row  ?>
    <div id="main" class="row">
    	<div class="columns eleven centered"><?php //This just gives a little room on the edges.?>
    	
      	
      	<?php // Left Sidebar  ?>
        <?php if ($page['sidebar_first']): ?>
          <aside id="sidebar-left" class="columns <?php print $lsb_size; ?>" role="complementary">
            <?php print render($page['sidebar_first']); ?>
         </aside> <?php // /.section, /#sidebar-first  ?>
        <?php endif; ?>
      
      
      
        <?php // Content Region  ?>
        <div id="content" class="columns <?php print $content_size; ?>" role="main">
    	      <?php print $messages; 
    	      if ($title && !$is_front): ?>
    	        <h1 id="page-title"><?php print $title; ?></h1>
    	      <?php endif; 
    	      if ($tabs): ?>
    	        <div class="drupal_tabs"><?php print render($tabs); ?></div>
    	      <?php endif; 
    	      print render($page['help']); 
    	      if ($action_links): ?>
    	        <ul class="action-links"><?php print render($action_links); ?></ul>
    	      <?php endif;
    	      print $feed_icons; ?>
    
         	<?php 
         	if ($is_front){
         	  hide($page['content']['system_main']);
         	}
         	print render($page['content']);?>
    
          <div class="row">
            <?php print render($page['post_content1']); ?>
          </div>
          <div class="row">
            <?php print render($page['post_content2']); ?>
          </div>
    
        </div> <?php // /.section, /#content  ?>
    
      
        <?php // Right Sidebar  ?>
        <?php if ($page['sidebar_second']): ?>
          <aside id="sidebar-right" class="columns <?php print $rsb_size; ?>" role="complementary">
            <?php print render($page['sidebar_second']); ?>
          </aside> <?php // /.section, /#sidebar-second  ?>
        <?php endif; ?>
    
    	</div> <?php //eleven centered columns for spacing  ?>
    </div> <?php // /#main, /#main-wrapper  ?>
  </div> <?php // /#wrapper  ?>
  
  <?php // Footer  ?>
  <footer id="footer" role="contentinfo" class="row">
    <div class="eleven columns centered"><?php //This just gives a little room on the edges.?>
      <?php print render($page['footer']); ?>
    </div>
  </footer> <?php // /.section, /#footer  ?>



</div> <?php // /#page, /#page-wrapper  ?>
