<?php
/**
 * @file
 * valsi.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function valsi_node_info() {
  $items = array(
    'valsi' => array(
      'name' => t('valsi'),
      'base' => 'node_content',
      'description' => t('A word'),
      'has_title' => '1',
      'title_label' => t('Spelling'),
      'help' => '',
    ),
  );
  return $items;
}
