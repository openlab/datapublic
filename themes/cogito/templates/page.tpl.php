<?php 
/**
 * @file
 * Cogito's theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $content: The markup content of the header region. This will be a series
 *   of blocks. Typically it's just the search block.  
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity: (These are applied in template.php)
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */  ?>

<div id="page" class="hfeed container" role="main">

  <?php // Header  ?>
	<header id="branding" role="banner" class="row">
	
	   <?php print $cogito_header; ?>
	   
  </header>

  <?php //Navbar Menu ?>
  <?php if ($page['nav']): ?>
		<nav id="access" role="navigation" class="row">
        	<?php print render($page['nav']); ?>
    </nav>
  <?php endif; ?>
<?php //kpr(get_defined_vars()); ?>
  <?php // Main Row  ?>
  <div id="main" class="row">
  	<div class="columns eleven centered"><?php //This just gives a little room on the edges.?>
  	
      <?php // Content Region  ?>
      <div id="content" class="<?php print $content_size; ?>" role="main">
  	      <?php if ($page['highlighted']): ?>
  	        <?php print render($page['highlighted']); ?>
  	      <?php endif; 
  	      if ($breadcrumb): ?>
  	        <div id="breadcrumb" class="twelve columns"><?php print $breadcrumb; ?></div>
  	      <?php endif; 
  	      print $messages; 
  	      if ($title): ?>
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
  
       	<?php print render($page['content']);?>
      </div> <?php // /.section, /#content  ?>

    	<?php // Left Sidebar  ?>
      <?php if ($page['sidebar_first']): ?>
        <aside id="sidebar-left" class="<?php print $lsb_size; ?>" role="complementary">
          <?php print render($page['sidebar_first']); ?>
       </aside> <?php // /.section, /#sidebar-first  ?>
      <?php endif; ?>  
    
      <?php // Right Sidebar  ?>
      <?php if ($page['sidebar_second']): ?>
        <aside id="sidebar-right" class="<?php print $rsb_size; ?>" role="complementary">
          <?php print render($page['sidebar_second']); ?>
        </aside> <?php // /.section, /#sidebar-second  ?>
      <?php endif; ?>
  
  	</div> <?php //eleven centered columns for spacing  ?>
  </div> <?php // /#main, /#main-wrapper  ?>
  
  
  <?php // Footer  ?>
  <footer id="footer" role="contentinfo" class="row">
  	 <div class="eleven columns centered"><?php //This just gives a little room on the edges.?>
	    <?php print render($page['footer']); ?>
	   </div>
  </footer> <?php // /.section, /#footer  ?>

</div> <?php // /#page, /#page-wrapper  ?>
