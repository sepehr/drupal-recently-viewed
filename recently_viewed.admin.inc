<?php
// $Id$

/**
 * @file
 * Provides the administration form.
 */

/**
 * The administration form.
 *
 * @ingroup forms
 */
function recently_viewed_settings() {
  $forms = array();
  
  return system_settings_form($form);
}

/**
 * Validation callback for administration form.
 */
function recently_viewed_settings_validate($form, &$form_state) {

}

