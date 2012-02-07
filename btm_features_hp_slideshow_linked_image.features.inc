<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function btm_features_hp_slideshow_linked_image_imagecache_default_presets() {
  $items = array(
    'front_page_slide' => array(
      'presetname' => 'front_page_slide',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '940',
            'height' => '358',
          ),
        ),
      ),
    ),
    'front_page_slide_thumbnail' => array(
      'presetname' => 'front_page_slide_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '160',
            'height' => '60',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function btm_features_hp_slideshow_linked_image_node_info() {
  $items = array(
    'front_page_slide' => array(
      'name' => t('Frontpage Slide'),
      'module' => 'features',
      'description' => t('A slide to be displayed in the rotating slideshow on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function btm_features_hp_slideshow_linked_image_views_api() {
  return array(
    'api' => '2',
  );
}
