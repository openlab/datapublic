<?php 

/**
 * Implements theme_breadcrumb().
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function datapublic_theme_breadcrumb($vars) {
  $breadcrumb = $vars['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('breadcrumb_display');
  $separator = ' / ';
  if ($show_breadcrumb == 'yes') {
    // Assemble the breadcrumb
    return implode($separator, $breadcrumb) . $title;
  }
  // Otherwise, return an empty string.
  return '';
}


/**
 * Implements hook_library_alter().
 *
 * Specifically, it allows for the default condition of the distro where the theme
 * provides foundation.js. If the theme does this, alter it out of the re_orbit
 * context library.
 */
function datapublic_theme__library_alter(&$libraries, $module) {
  // If there are (or should be) two orbits, get rid of one:
  // If this is executing, then we KNOW that cogito is providing the foundation
  // js file:
  if (module_exists('re_orbit')) {
    $path_to_re_orbit = drupal_get_path('module', 're_orbit');
    // css:
    //
    // Usually in Drupal, a module/feature css file is overridden by placing a
    // file with the same name in the active theme's info file. If the file
    // exists in the theme, it will be used instead of the file provided by the
    // module. If it does not exist, the module's stylesheet will not be included
    // in the generated pages.
    //
    // It's also possible to simply remove css files using hook_css_alter() or,
    // as we do here, hook_library_alter(). To remove the css files provided by
    // the re_orbit module, uncomment the following two lines:
    //
    //unset($libraries['re_orbit']['css'][$path_to_re_orbit . '/css/orbit.css']);
    //unset($libraries['re_orbit']['css'][$path_to_re_orbit . '/css/re_orbit.css']);    
    // js:
    unset($libraries['re_orbit']['js'][$path_to_re_orbit . '/js/jquery.orbit-1.4.0.min.js']);
    unset($libraries['re_orbit']['js'][$path_to_re_orbit . '/js/re_orbit.js']);
  }
} // distro_library_alter()



/**
 * Implements tempalte_preprocess_page().
 *
 * @param $variables
 *   Variables related to the page template
 */
function datapublic_theme_preprocess_page(&$variables) {

  $logo = &$variables['logo'];
  $site_name = $variables['site_name'];

  if (preg_match("|^.*/files/(.*)|", $logo, $m)) {
    $file = "public://" . $m[1];
    $logo = image_style_url('logo', $file);
  }
  elseif ($logo == url(drupal_get_path('theme', 'datapublic_theme') . "/logo.png", array('absolute'=>TRUE))) {
    $logo = $logo;
  }
  else {
    $logo = $logo;
  }

}