/**
 * @file
 * This file provides whatever javascript logic and functions are necessary for
 * the Foundation Orbit plugin in the re_contextlibraries module.
 *
 * Developed by the Zurb Foundation people.
 *
 * @see http://foundation.zurb.com/docs/orbit.php
 * @see http://www.zurb.com/playground/orbit-jquery-image-slider
 */
(function ($) {
  Drupal.behaviors.orbit = {
    attach: function(context) {
      $('#featured').orbit({
        animation: 'fade', // fade, horizontal-slide, vertical-slide, horizontal-push
        animationSpeed: 800, // how fast animtions are
        timer: true, // true or false to have the timer
        advanceSpeed: 4000, // if timer is enabled, time between transitions
        pauseOnHover: false, // if you hover pauses the slider
        startClockOnMouseOut: false, // if clock should start on MouseOut
        startClockOnMouseOutAfter: 1000, // how long after MouseOut should the timer start again
        directionalNav: true, // manual advancing directional navs
        directionalNavRightText: Drupal.t('Next'),
        directionalNavLeftText: Drupal.t('Previous'),
        captions: true, // do you want captions?
        captionAnimation: 'fade', // fade, slideOpen, none
        captionAnimationSpeed: 800, // if so how quickly should they animate in
        bullets: false, // true or false to activate the bullet navigation
        bulletThumbs: false, // thumbnails for the bullets
        bulletThumbLocation: '', // location from this file where thumbs will be
        afterSlideChange: function(){}, // empty function
        fluid: true // or set a aspect ratio for content slides (ex: '4x3')
      });
      $('#photo_gallery').orbit({
        animation: 'horizontal-slide', // fade, horizontal-slide, vertical-slide, horizontal-push
        animationSpeed: 800, // how fast animtions are
        timer: true, // true or false to have the timer
        advanceSpeed: 4000, // if timer is enabled, time between transitions
        pauseOnHover: false, // if you hover pauses the slider
        startClockOnMouseOut: false, // if clock should start on MouseOut
        startClockOnMouseOutAfter: 1000, // how long after MouseOut should the timer start again
        directionalNav: true, // manual advancing directional navs
        directionalNavRightText: Drupal.t('Next'),
        directionalNavLeftText: Drupal.t('Previous'),
        captions: true, // do you want captions?
        captionAnimation: 'fade', // fade, slideOpen, none
        captionAnimationSpeed: 800, // if so how quickly should they animate in
        bullets: true, // true or false to activate the bullet navigation
        bulletThumbs: false, // thumbnails for the bullets
        bulletThumbLocation: '', // location from this file where thumbs will be
        afterSlideChange: function(){}, // empty function
        fluid: '4x3' // or set a aspect ratio for content slides (ex: '4x3')
      });      
    }
  }; /* Drupal.behaviors.orbit */
})(jQuery);