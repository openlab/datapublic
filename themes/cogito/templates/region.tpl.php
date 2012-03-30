<?php
/**
 * @file
 * Default theme implementation to display a region
 *
 * Drupal uses WAY too much markup so we want to keep this simple: If region, print region
 *
 **/
 
if ($content){
  print $content;
}