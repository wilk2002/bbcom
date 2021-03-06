<?php
// $Id: views_flipped_table.views.inc,v 1.1.2.1 2010/05/22 13:50:26 kratib Exp $
/**
 * @file views_flipped_table.views.inc
 * Contains the flipped table style plugin, flipping rows and columns.
 */

/**
 * Implementation of hook_views_plugins().
 */
function views_flipped_table_views_plugins() {
  return array(
    'style' => array(
      'flipped' => array(
        'title' => t('Flipped table'),
        'help' => t('Displays a table with rows and columns flipped.'),
        'handler' => 'views_plugin_style_table',
        'parent' => 'table',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'theme' => 'views_flipped_table',
        'even empty' => TRUE,
      ),
    ),
  );
}