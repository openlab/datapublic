/**
 * @file
 * This file provides utility functions that may be useful to library modules.
 * Library modules decide whether or not this file should ever be included.
 *
 * Originally developed for use with the re_slideshow feature.
 */

(function ($) {
  /**
   * This function builds, and returns, a generic menu based on the items in a
   * list.
   *
   * @param object options The configuration options fo the function:
   *
   *    * string slideSelector Selector for individual slides in a slideshow
   *    * string navItemParent Element ready for jquery creation, e.g.
   *      <div id="foo" /> or <div></div> etc
   *    * string navItem Element ready for jquery creation, e.g. <a /> etc
   * @todo Make wrapping available for navItem
   */
  $.re_contextlibraries_menu = function(options) {  
    var defaults = {
        slideSelector: '#block-views-re-slideshow-block .view-display-id-block > .view-content > ul > li',
        menuItemParent: '<div id="re-slideshow-view-display-id-block-navigation" />',
        menuItem: '<a href="#" />'
    },
    options = $.extend(defaults, options),
    $menuElement = $(options.menuItemParent);
    $(options.slideSelector).each(function(i, e){
      $menuElement.append($(options.menuItem).text(i + 1));
    });
    return $menuElement;
  }; /* $.re_contextlibraries_menu */
  
  
  /**
   * This function builds previous and next links in the page and appends them to
   * the supplied element.
   *
   * @param object options The configuration options to this function:
   *
   *    * string buttonsParent Element ready for jquery creation, or selector
   *    * string nextElement Element ready for jquery creation
   *    * string prevElement Element ready for jquery creation
   */
  $.re_contextlibraries_buttons = function(options) {
    var defaults = {
      buttonsParent: '<div class="re_slideshow-buttons" />',
      prevElement: '<div class="re_slideshow-prev-wrapper"><a class="re_slideshow-prev">Prev</a></div>',
      nextElement: '<div class="re_slideshow-next-wrapper"><a class="re_slideshow-next">Next</a></div>'
    },
    options = $.extend(defaults, options);
    $(options.buttonsParent).append(options.prevElement).append(options.nextElement);
  }; /* $.re_contextlibraries_buttons */
})(jQuery);