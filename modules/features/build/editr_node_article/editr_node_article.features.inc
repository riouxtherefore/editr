<?php
/**
 * @file
 * editr_node_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function editr_node_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function editr_node_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('An article is a written work published in a print or electronic medium. It may be for the purpose of propagating the news, research results, academic analysis or debate.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
