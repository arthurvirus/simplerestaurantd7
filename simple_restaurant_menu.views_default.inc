<?php
function view_food_admin(){

//----------------------------------------------------
//                    FOOD ITEM ADMIN 
//----------------------------------------------------

$view = new view();
$view->name = 'food_admin';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Food Admin';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Food Admin';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'plus';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Confirmez';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Annuler';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'category',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'weight' => 'weight',
  'category' => 'category',
  'desc' => 'desc',
  'image' => 'image',
  'price' => 'price',
  'delete_node' => 'delete_node',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'weight' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'category' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'desc' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'image' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'price' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'food_item_category';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'food_category' => 'food_category',
  'tags' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Weight: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
/* Field: Content: Category */
$handler->display->display_options['fields']['category']['id'] = 'category';
$handler->display->display_options['fields']['category']['table'] = 'field_data_category';
$handler->display->display_options['fields']['category']['field'] = 'category';
$handler->display->display_options['fields']['category']['label'] = '';
/* Field: Content: Description */
$handler->display->display_options['fields']['desc']['id'] = 'desc';
$handler->display->display_options['fields']['desc']['table'] = 'field_data_desc';
$handler->display->display_options['fields']['desc']['field'] = 'desc';
/* Field: Content: Image */
$handler->display->display_options['fields']['image']['id'] = 'image';
$handler->display->display_options['fields']['image']['table'] = 'field_data_image';
$handler->display->display_options['fields']['image']['field'] = 'image';
$handler->display->display_options['fields']['image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Content: Price */
$handler->display->display_options['fields']['price']['id'] = 'price';
$handler->display->display_options['fields']['price']['table'] = 'field_data_price';
$handler->display->display_options['fields']['price']['field'] = 'price';
$handler->display->display_options['fields']['price']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Sort criterion: Content: Category (category) */
$handler->display->display_options['sorts']['category_tid']['id'] = 'category_tid';
$handler->display->display_options['sorts']['category_tid']['table'] = 'field_data_category';
$handler->display->display_options['sorts']['category_tid']['field'] = 'category_tid';
/* Sort criterion: Weight: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'weight_weights';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'food_item' => 'food_item',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['block_description'] = 'Food Admin';

return $view;

}

function view_food_menu(){
//----------------------------------------------------
//                    CARTE 
//----------------------------------------------------

$view = new view();
$view->name = 'food_menu';
$view->description = 'List of food item';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Food Menu';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'parent_category',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  1 => array(
    'field' => 'child_category',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
  'price' => 'price',
);
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'food item category';
$handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'food_category' => 'food_category',
  'tags' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'view-food-menu-title';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Price */
$handler->display->display_options['fields']['price']['id'] = 'price';
$handler->display->display_options['fields']['price']['table'] = 'field_data_price';
$handler->display->display_options['fields']['price']['field'] = 'price';
$handler->display->display_options['fields']['price']['label'] = '';
$handler->display->display_options['fields']['price']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['price']['element_wrapper_class'] = 'view-food-menu-price';
$handler->display->display_options['fields']['price']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['price']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Description */
$handler->display->display_options['fields']['desc']['id'] = 'desc';
$handler->display->display_options['fields']['desc']['table'] = 'field_data_desc';
$handler->display->display_options['fields']['desc']['field'] = 'desc';
$handler->display->display_options['fields']['desc']['label'] = '';
$handler->display->display_options['fields']['desc']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['desc']['element_wrapper_class'] = 'view-food-menu-description';
$handler->display->display_options['fields']['desc']['element_default_classes'] = FALSE;
/* Field: Content: Child Category */
$handler->display->display_options['fields']['child_category']['id'] = 'child_category';
$handler->display->display_options['fields']['child_category']['table'] = 'field_data_child_category';
$handler->display->display_options['fields']['child_category']['field'] = 'child_category';
$handler->display->display_options['fields']['child_category']['label'] = '';
$handler->display->display_options['fields']['child_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['child_category']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['child_category']['hide_empty'] = TRUE;
/* Field: Content: Parent Category */
$handler->display->display_options['fields']['parent_category']['id'] = 'parent_category';
$handler->display->display_options['fields']['parent_category']['table'] = 'field_data_parent_category';
$handler->display->display_options['fields']['parent_category']['field'] = 'parent_category';
$handler->display->display_options['fields']['parent_category']['label'] = '';
$handler->display->display_options['fields']['parent_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['parent_category']['element_label_colon'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
/* Sort criterion: Weight: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'weight_weights';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'food_item' => 'food_item',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;



return $view;
}



function view_combination(){
//----------------------------------------------------
//                    CARTE 
//----------------------------------------------------

$view = new view();
$view->name = 'combinations';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Combinations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'title',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
  1 => array(
    'field' => 'combination_sub_ref',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['combination_sub_ref_target_id']['id'] = 'combination_sub_ref_target_id';
$handler->display->display_options['relationships']['combination_sub_ref_target_id']['table'] = 'field_data_combination_sub_ref';
$handler->display->display_options['relationships']['combination_sub_ref_target_id']['field'] = 'combination_sub_ref_target_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Sub Combination Ref */
$handler->display->display_options['fields']['combination_sub_ref']['id'] = 'combination_sub_ref';
$handler->display->display_options['fields']['combination_sub_ref']['table'] = 'field_data_combination_sub_ref';
$handler->display->display_options['fields']['combination_sub_ref']['field'] = 'combination_sub_ref';
$handler->display->display_options['fields']['combination_sub_ref']['label'] = '';
$handler->display->display_options['fields']['combination_sub_ref']['exclude'] = TRUE;
$handler->display->display_options['fields']['combination_sub_ref']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['combination_sub_ref']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['combination_sub_ref']['group_rows'] = FALSE;
$handler->display->display_options['fields']['combination_sub_ref']['delta_offset'] = '0';
/* Field: Content: sub_food_ref */
$handler->display->display_options['fields']['sub_food_ref']['id'] = 'sub_food_ref';
$handler->display->display_options['fields']['sub_food_ref']['table'] = 'field_data_sub_food_ref';
$handler->display->display_options['fields']['sub_food_ref']['field'] = 'sub_food_ref';
$handler->display->display_options['fields']['sub_food_ref']['relationship'] = 'combination_sub_ref_target_id';
$handler->display->display_options['fields']['sub_food_ref']['label'] = '';
$handler->display->display_options['fields']['sub_food_ref']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sub_food_ref']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['sub_food_ref']['group_rows'] = FALSE;
$handler->display->display_options['fields']['sub_food_ref']['delta_offset'] = '0';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'combination' => 'combination',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;



return $view;
}