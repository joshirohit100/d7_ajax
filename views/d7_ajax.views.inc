<?php

/*
 * @file
 * Contains views related hooks.
 */

/**
 * Implements hook_views_data().
 */
 function d7_ajax_views_data() {
   $data['custom']['table']['group'] = t('Custom');
   $data['custom']['table']['join'] = array(
     // #global is a special flag which let's a table appear all the time.
     '#global' => array(),
   );

   $data['custom']['custom_handler'] = array(
     'title' => t('Custom Handler'),
     'help' => t('Custom Handler.'),
     'field' => array(
       'handler' => 'views_handler_custom_handler',
     ),
   );

   return $data;
}
