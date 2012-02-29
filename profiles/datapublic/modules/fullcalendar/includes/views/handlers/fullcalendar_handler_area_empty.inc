<?php

/**
 * @file
 * Provide an empty region to display a blank FullCalendar.
 */

class fullcalendar_handler_area_empty extends views_handler_area {
  function render($empty = FALSE) {
    fullcalendar_get_settings($this->view);
    return '<div class="fullcalendar"></div>';
  }
}
