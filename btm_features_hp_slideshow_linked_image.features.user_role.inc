<?php

/**
 * Implementation of hook_user_default_roles().
 */
function btm_features_hp_slideshow_linked_image_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
  );

  // Exported role: Site Admin
  $roles['Site Admin'] = array(
    'name' => 'Site Admin',
  );

  // Exported role: Super Admin
  $roles['Super Admin'] = array(
    'name' => 'Super Admin',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  return $roles;
}
