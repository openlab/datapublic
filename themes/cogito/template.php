<?php

/**
 * @file
 * Contains theme override functions and preprocess functions for the Boron theme.
 */

/*****************************************************************************************************************************/
/* WARNING!!!! NEVER CHANGE ANYTHING IN THIS FOLDER!!! USE A CHILD THEME! CHECK OUT "STARTER-CHILD" FOLDER FOR INSTRUCTIONS  */
/*****************************************************************************************************************************

/**
 * Changes the default meta content-type tag to the shorter HTML5 version
 */
function cogito_html_head_alter(&$head_elements) {
  global $theme; 
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );

  //Throw an Error if foundation is not found.
  if (!is_file( getcwd() . "/" . drupal_get_path('theme', 'cogito') . '/foundation/stylesheets/foundation.css' ) ) {
    drupal_set_message("Foundation not found. You must install it before this theme can work. Please see the Cogito README file.", 'error', TRUE);
  }
  
  //Throw a warning if Cogito Base theme is enabled.
  if ( $theme == 'cogito' ) {
    drupal_set_message("Cogito is not meant to be run as an actual theme. Please consult README.txt in order to get your child theme up and running. It's REALLY easy!!", 'status', TRUE);
  }
    
}


function cogito_preprocess_block(&$variables){

}


/**
 * Implements hook_theme().
 */
function cogito_theme($existing, $type, $theme, $path) {
  return array(
    'cogito_header' => array(
     'template' => 'header',
     'render element' => 'cogito_header',
    ),
  );
}




function cogito_preprocess_region(&$variables){
  //Since we're rendering the logo etc inside the header region we will need to pass some
  //variables to it 
}

/**
 * Implements hook_preprocess_html().
 *
 * @see bootstrap_html_head_alter().
 */
function cogito_preprocess_html(&$variables) {
  global $theme;
  global $base_path;
  
  $root_d7 = getcwd();
  
  // Cache path to theme for duration of this function:
  $path_to_cogito = "/" . drupal_get_path('theme', 'cogito') . '/images/icons/';
  $path_to_child = "/" . drupal_get_path('theme', $theme) . '/images/icons/';
  
  $favicon =is_file( $path_to_child . 'favicon.ico' ) ? $path_to_child . 'favicon.ico' : $path_to_cogito . 'favicon.ico'; 

  $icon57 = is_file( $root_d7 . $path_to_child . 'apple-57x57.png' ) ? $path_to_child . 'apple-57x57.png' : $path_to_cogito . 'apple-57x57.png'; 
  $icon72 = is_file( $root_d7 . $path_to_child . 'apple-72x72.png' ) ? $path_to_child . 'apple-72x72.png' : $path_to_cogito . 'apple-72x72.png'; 
  $icon114 =is_file( $root_d7 . $path_to_child . 'apple-114x114.png' )?$path_to_child . 'apple-114x114.png':$path_to_cogito . 'apple-114x114.png'; 
  
  drupal_add_html_head_link(array('rel' => 'apple-touch-icon', 'href' => $icon57));
  drupal_add_html_head_link(array('rel' => 'apple-touch-icon', 'href' => $icon72));
  drupal_add_html_head_link(array('rel' => 'apple-touch-icon', 'href' => $icon114));
  
  drupal_add_html_head_link(array('rel' => 'shortcut icon', 'href' => $favicon, 'type' => 'image/vnd.microsoft.icon'));


} // bootstrap_preprocess_html()



function cogito_preprocess_page(&$variables){
  $root_d7 = getcwd();
  global $base_path;
  global $theme;
  $path_to_cogito = "/" . drupal_get_path('theme', 'cogito');
  $path_to_child = "/" . drupal_get_path('theme', $theme);

  //If it's not a user uploaded logo and it's not in the child root. look in the /images folder
  $logo = &$variables['logo'];
  if ($logo == url(drupal_get_path('theme', $theme) . "/logo.png", array('absolute'=>TRUE))) {

    if ( !is_file( $root_d7 . "/" . $path_to_child . "/logo.png") && 
          is_file( $root_d7 . "/" . $path_to_child . "/images/logo.png") ){

      $logo = url(drupal_get_path('theme', $theme) . "/images/logo.png");
 
    }
  }


  /**
   * WE need to do a little work to figure out the widths of things
   */
  $page = &$variables['page'];
  
  if ($page['sidebar_second'] && $page['sidebar_first']){
  	$cols = "3col";
  }
  elseif (!$page['sidebar_second'] && !$page['sidebar_first']){
  	$cols = "1col";
  }
  elseif ($page['sidebar_first']){
  	$cols = "2col_lsb";
  }
  elseif ($page['sidebar_second']){
  	$cols = "2col_rsb";
  }
  else {
  	$cols = "1col";
  }
  
  switch ($cols) {
    case "2col_rsb":
    	$variables['rsb_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('two_columns_rsb_right'));
    	$variables['lsb_size'] = "";
    	$variables['content_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('two_columns_rsb_content'));
    	break;
    case "2col_lsb":
    	$variables['rsb_size'] = "";
    	$variables['lsb_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('two_columns_lsb_left')) . "pull-" . cogito_foundation_sizer(theme_get_setting('two_columns_lsb_content'));
    	$variables['content_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('two_columns_lsb_content')) . "push-" . cogito_foundation_sizer(theme_get_setting('two_columns_lsb_left'));
    	break;
    case "1col":
    	$variables['rsb_size'] = "";
    	$variables['lsb_size'] = "";
    	$variables['content_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('one_column_content')) . " centered";
    	break;
    //four is a nice small number that will still show something      
    default:
    	$variables['rsb_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('three_columns_right'));
    	$variables['lsb_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('three_columns_left')) . "pull-" . cogito_foundation_sizer(theme_get_setting('three_columns_content'));;
    	$variables['content_size'] = "columns " . cogito_foundation_sizer(theme_get_setting('three_columns_content')) . "push-" . cogito_foundation_sizer(theme_get_setting('three_columns_left'));;
    	break;
  }
  

  /**
   * The header gets defined in header.tpl.php and needs access to some information
   */
   $variables['cogito_header'] = theme('cogito_header', $variables);  
  
}


/**
 * Changes the search form to use the HTML5 "search" input attribute
 */

function cogito_preprocess_search_block_form(&$variables) {

  $variables['search_form'] = str_replace('type="text"', 'type="search"', $variables['search_form']);
  $variables['search_form'] = str_replace('class="form-submit"', 'class="form-submit button black"', $variables['search_form']);
}

function cogito_preprocess_menu_link(&$variables) {
	//$variables['element']['#attributes']['class'][] = "button black";
}
	
/**
 * Implements theme_breadcrumb().
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function cogito_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('breadcrumb_display');
  if ($show_breadcrumb == 'yes') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $separator = filter_xss(theme_get_setting('breadcrumb_separator'));
      $trailing_separator = $title = '';

      // Add the title and trailing separator
      if (theme_get_setting('breadcrumb_title')) {
        if ($title = drupal_get_title()) {
          $trailing_separator = $separator;
        }
      }
      // Just add the trailing separator
      elseif (theme_get_setting('breadcrumb_trailing')) {
        $trailing_separator = $separator;
      }

      // Assemble the breadcrumb
      return implode($separator, $breadcrumb) . $trailing_separator . $title;
    }
  }
  // Otherwise, return an empty string.
  return '';
}

/**
 * Implements theme_status_messages().
 *
 * Squash drupal's status messages to fit with foundation
 */

function cogito_status_messages(&$variables){
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'), 
    'error' => t('Error message'), 
    'warning' => t('Warning message'),
  );
  
  $equiv = Array(
  'status' => 'success',
  'warning' => 'warning',
  'error' => 'error');
  
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages alert-box $equiv[$type]\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= "<a href=\"#\" class=\"close\">&times;</a></div>\n";
  }
  return $output;
}


/**
 * Helper Function: You say "3", I say "three"
 *
 */

function cogito_foundation_sizer($num){
  $nums = Array ("denada", "one","two", "three","four","five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve");
	return $nums[$num];
}


/**
 * Implements theme_pager().
 *
 * Drupal's pager system is terrible so this is a first stab at a rewrite.
 * Basically we're squashing it into a shape that Foundation Pager likes
 */

function cogito_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'), 
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'), 
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'), 
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for ($i=1; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'), 
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('current'), 
            'data' => "<a href='#'>$i</a>", //First person to criticize this has to fix it. It's late and I can't figure it out.
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'), 
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'), 
          'data' => '…',
        );
      }
    }

    
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'), 
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'), 
        'data' => $li_last,
      );
    }
    return '<div class="row cogito_paginate"><h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items, 
      'attributes' => array('class' => array('pagination')),
    )) . "</div>";
  }
}


/**
 * Implements theme_button().
 *
 * This is how we force drupal to use Foundation's buttons
 */
function cogito_button($variables) {
  $variables['element']['#attributes']['class'][] = 'nice small button black';
  return theme_button($variables);
}


/**
 * Implements theme_form().
 *
 * Forcing Drupal to use foundation's "nice" forms elements
 */

function cogito_form($variables) {
  $variables['element']['#attributes']['class'][] = 'nice';
  return theme_form($variables);
  
}

//Not working yet: need to add input-text class to all relevant inputs
function cogito_form_element($variables) {
  //kpr($variables);
  return theme_form_element($variables);
}