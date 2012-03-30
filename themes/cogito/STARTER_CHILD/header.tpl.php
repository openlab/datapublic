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
 */ ?>
 
 
<?php // TITLE / LOGO and DESCRIPTION (DESKTOP) ?>
<hgroup id="header-wrapper" class="row hide-on-phones">    
  <?php if ($logo): ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="columns two">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>   
  <div class="columns ten">
    <div class="row">
      <div id="site-name-description-wrap" class="columns eight">        
      <?php if ($site_name): ?>
        <?php if (isset($title)): ?>
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
      <div id="header-region" class="columns four">
        <?php // Actual Header Block Region Here ?>
        <?php if ($page['header']){
             print render($page['header']);
          }
        ?>
      </div>
    </div> 
  </div><?php // columns ten?>
</hgroup>


<?php // TITLE / LOGO and DESCRIPTION  (MOBILE) ?>
<hgroup id="header-wrapper" class="row show-on-phones">    
      <div id="site-name-description-wrap" class="columns twelve">        
      <?php if ($site_name): ?>
        <?php if (isset($title)): ?>
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
</hgroup>