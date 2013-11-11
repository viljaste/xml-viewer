<?php
/**
 * @file
 * xmlviewer_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function xmlviewer_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'xml';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_xml';
  $view->human_name = 'XML';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: XML: Payload */
  $handler->display->display_options['fields']['field_payload']['id'] = 'field_payload';
  $handler->display->display_options['fields']['field_payload']['table'] = 'field_data_field_payload';
  $handler->display->display_options['fields']['field_payload']['field'] = 'field_payload';
  $handler->display->display_options['fields']['field_payload']['label'] = '';
  $handler->display->display_options['fields']['field_payload']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_payload']['alter']['text'] = '<pre>[field_payload]</pre>';
  $handler->display->display_options['fields']['field_payload']['element_label_colon'] = FALSE;
  /* Contextual filter: XML: Access token (field_access_token) */
  $handler->display->display_options['arguments']['field_access_token_value']['id'] = 'field_access_token_value';
  $handler->display->display_options['arguments']['field_access_token_value']['table'] = 'field_data_field_access_token';
  $handler->display->display_options['arguments']['field_access_token_value']['field'] = 'field_access_token_value';
  $handler->display->display_options['arguments']['field_access_token_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_access_token_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_access_token_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_access_token_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_access_token_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_access_token_value']['limit'] = '0';
  /* Filter criterion: XML: xml type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_xml';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'xml' => 'xml',
  );

  /* Display: Full content */
  $handler = $view->new_display('page', 'Full content', 'full_content');
  $handler->display->display_options['path'] = 'xml/%';

  /* Display: XML list */
  $handler = $view->new_display('page', 'XML list', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'XML list';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: XML: Access token */
  $handler->display->display_options['fields']['field_access_token']['id'] = 'field_access_token';
  $handler->display->display_options['fields']['field_access_token']['table'] = 'field_data_field_access_token';
  $handler->display->display_options['fields']['field_access_token']['field'] = 'field_access_token';
  $handler->display->display_options['fields']['field_access_token']['exclude'] = TRUE;
  /* Field: XML: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['path'] = 'xml/[field_access_token] ';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: XML: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_xml';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'xml/list';
  $export['xml'] = $view;

  return $export;
}
