<?php

/**
 * Implementation of hook_views_default_views().
 */
function btm_features_hp_slideshow_linked_image_views_default_views() {
  $views = array();

  // Exported view: frontpage_slideshow
  $view = new view;
  $view->name = 'frontpage_slideshow';
  $view->description = 'A cycling slideshow';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_slide_url_url' => array(
      'label' => 'Slide Link',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_slide_url_url',
      'table' => 'node_data_field_slide_url',
      'field' => 'field_slide_url_url',
      'relationship' => 'none',
    ),
    'field_slide_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<img src="/sites/default/files/imagecache/front_page_slide/[field_slide_fid]" />',
        'make_link' => 1,
        'path' => '[field_slide_url_url]',
        'link_class' => '',
        'alt' => 'Click to Read More',
        'prefix' => '',
        'suffix' => '',
        'target' => '_parent',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'front_page_slide_default',
      'multiple' => array(
        'group' => 0,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_slide_fid',
      'table' => 'node_data_field_slide',
      'field' => 'field_slide_fid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_sort_order_value' => array(
      'order' => 'ASC',
      'delta' => -1,
      'id' => 'field_sort_order_value',
      'table' => 'node_data_field_sort_order',
      'field' => 'field_sort_order_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'front_page_slide' => 'front_page_slide',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('css_class', 'frontpage-slideshow');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'type' => 'ul',
  ));
  $handler = $view->new_display('page', 'Slideshow Admin', 'page_1');
  $handler->override_option('fields', array(
    'field_sort_order_value' => array(
      'label' => 'Sort order',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_sort_order_value',
      'table' => 'node_data_field_sort_order',
      'field' => 'field_sort_order_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_slide_url_url' => array(
      'label' => 'Slide Link',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_slide_url_url',
      'table' => 'node_data_field_slide_url',
      'field' => 'field_slide_url_url',
      'relationship' => 'none',
    ),
    'field_slide_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<img src="/sites/default/files/imagecache/front_page_slide/[field_slide_fid]" />',
        'make_link' => 1,
        'path' => '[field_slide_url_url]',
        'link_class' => '',
        'alt' => 'Click to Read More',
        'prefix' => '',
        'suffix' => '',
        'target' => '_parent',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'front_page_slide_thumbnail_default',
      'multiple' => array(
        'group' => 0,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_slide_fid',
      'table' => 'node_data_field_slide',
      'field' => 'field_slide_fid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'edit_node' => array(
      'label' => 'Edit Slide',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'label' => 'Published',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 0,
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'delete_node' => array(
      'label' => 'Delete Slide',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'text' => '',
      'exclude' => 0,
      'id' => 'delete_node',
      'table' => 'node',
      'field' => 'delete_node',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '4' => 4,
      '6' => 6,
      '3' => 3,
    ),
  ));
  $handler->override_option('title', 'Slideshow Admin');
  $handler->override_option('header', '<br /><br />
<h2><a href="/node/add/front-page-slide" title="Add new slide" target="_self">Add New Slide</a></h2>');
  $handler->override_option('header_format', '4');
  $handler->override_option('header_empty', 0);
  $handler->override_option('style_plugin', 'draggabletable');
  $handler->override_option('style_options', array(
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'field_slide_url_url' => 'field_slide_url_url',
      'field_slide_fid' => 'field_slide_fid',
      'field_sort_order_value' => 'field_sort_order_value',
    ),
    'info' => array(
      'field_slide_url_url' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_slide_fid' => array(
        'separator' => '',
      ),
      'field_sort_order_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => -1,
    'tabledrag_order' => array(
      'field' => 'field_sort_order_value',
      'handler' => 'cck',
    ),
    'tabledrag_order_visible' => array(
      'visible' => 'visible',
    ),
    'tabledrag_hierarchy' => array(
      'field' => 'none',
      'handler' => 'native',
    ),
    'tabledrag_hierarchy_visible' => array(
      'visible' => 0,
    ),
    'draggableviews_depth_limit' => '0',
    'draggableviews_repair' => array(
      'repair' => 'repair',
    ),
    'tabledrag_types_add' => 'Add type',
    'tabledrag_expand' => array(
      'expand_links' => 0,
      'collapsed' => 0,
      'by_uid' => 0,
    ),
    'draggableviews_extensions' => array(
      'extension_top' => '3',
      'extension_bottom' => '3',
    ),
    'tabledrag_lock' => array(
      'lock' => 0,
    ),
    'draggableviews_default_on_top' => '1',
    'draggableviews_button_text' => 'Save sort order',
    'draggableviews_arguments' => array(
      'use_args' => 0,
    ),
  ));
  $handler->override_option('path', 'admin/content/slideshow');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Manage Front Page Slideshow',
    'description' => '',
    'weight' => '0',
    'name' => 'admin',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
