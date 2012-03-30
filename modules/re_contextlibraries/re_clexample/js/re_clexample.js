/**
 * @file
 * This file provides whatever javascript logic and functions are necessary for
 * the Context Libraries Example module.
 */
(function($) {
  Drupal.behaviors.re_clexample = {
    attach: function(context) {
      // Create our new element, complete with styles:
      $box = $('<div/>')
          .attr('id', 're_clexample')
          .html('<h2>RE CL Example</h2><p>' + Drupal.t('This box demonstrates the RE CL Example javascript library provided by the RE CL Example module.' + '</p><p>' + Drupal.t('Click anywhere in the box to dismiss this message.')) + '</p>')
          .click(function(){
            $(this).hide();
          })
          .appendTo('body');
    }
  } /* Drupal.behaviors.re_clexample */
})(jQuery);