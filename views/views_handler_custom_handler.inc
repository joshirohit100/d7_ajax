<?php

/*
 * @file
 * Custom handler for views.
 */

class views_handler_custom_handler extends views_handler_field {
   function query() {
     // do nothing -- to override the parent query.
   }

   function option_definition() {
     $options = parent::option_definition();

     // Override the alter text option to always alter the text.
     $options['alter']['contains']['alter_text'] = array('default' => TRUE);
     return $options;
   }

   function options_form(&$form, &$form_state) {
     parent::options_form($form, $form_state);

     // Remove the checkbox
     unset($form['alter']['alter_text']);
     unset($form['alter']['text']['#dependency']);
     unset($form['alter']['text']['#process']);
   }

   function render($values) {
     // Render your content.
     return 'This is my output';
   }
}
