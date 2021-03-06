<?php

/**
 * Implementation of hook_strongarm().
 */
function bbcom_dictionary_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_entry';
  $strongarm->value = 0;
  $export['comment_anonymous_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_entry';
  $strongarm->value = '3';
  $export['comment_controls_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_entry';
  $strongarm->value = '4';
  $export['comment_default_mode_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_entry';
  $strongarm->value = '2';
  $export['comment_default_order_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_entry';
  $strongarm->value = '50';
  $export['comment_default_per_page_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_entry';
  $strongarm->value = '2';
  $export['comment_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_entry';
  $strongarm->value = '0';
  $export['comment_form_location_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_entry';
  $strongarm->value = '1';
  $export['comment_preview_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_entry';
  $strongarm->value = '0';
  $export['comment_subject_field_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_entry';
  $strongarm->value = array(
    'title' => '3',
    'revision_information' => '10',
    'comment_settings' => '11',
    'language' => '1',
    'translation' => '12',
    'menu' => '4',
    'path' => '13',
    'flag' => '8',
    'pos' => '2',
    'pos_reload' => '0',
    'lingwo_fields' => '7',
    'lingwo_pron' => '5',
    'lingwo_senses' => '6',
    'notifications' => '14',
  );
  $export['content_extra_weights_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_entry';
  $strongarm->value = '1';
  $export['i18n_node_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_language';
  $strongarm->value = 1;
  $export['i18n_node_language'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_entry';
  $strongarm->value = '2';
  $export['language_content_type_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_data_field_source_copyright';
  $strongarm->value = 'field_source_copyright';
  $export['lingwo_data_field_source_copyright'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_data_field_source_license';
  $strongarm->value = 'field_source_license';
  $export['lingwo_data_field_source_license'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_data_field_source_name';
  $strongarm->value = 'field_source_name';
  $export['lingwo_data_field_source_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_data_field_source_raw';
  $strongarm->value = 'field_source_raw';
  $export['lingwo_data_field_source_raw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_data_field_source_timestamp';
  $strongarm->value = 'field_source_timestamp';
  $export['lingwo_data_field_source_timestamp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_data_field_source_url';
  $strongarm->value = 'field_source_url';
  $export['lingwo_data_field_source_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_entry_content_type';
  $strongarm->value = 'entry';
  $export['lingwo_entry_content_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_entry_lookup_path';
  $strongarm->value = 'dictionary/lookup';
  $export['lingwo_entry_lookup_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_entry_node_title_munging';
  $strongarm->value = array(
    'language' => 0,
    'pos' => 0,
  );
  $export['lingwo_entry_node_title_munging'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_entry_pos_allowed_values';
  $strongarm->value = 'abbreviation|Abbreviation
adjective|Adjective
adverb|Adverb
article|Article
auxilary verb|Auxilary Verb
conjunction|Conjunction
determiner|Determiner
exclamation|Exclamation
noun|Noun
onomatopoeia|Onomatopoeia
particle|Particle
phrase|Phrase
prefix|Prefix
preposition|Preposition
pronoun|Pronoun
suffix|Suffix
symbol|Symbol
title|Title
verb|Verb';
  $export['lingwo_entry_pos_allowed_values'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_language_content_type';
  $strongarm->value = 'language';
  $export['lingwo_language_content_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lingwo_senses_relationship_allowed_values';
  $strongarm->value = 'imieslow.przy.t.c|present active participle
imieslow.przy.p.b|past passive participle
imieslow.przy.p.c|past active participle
';
  $export['lingwo_senses_relationship_allowed_values'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_entry';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_entry'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_language';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_language'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_entry';
  $strongarm->value = '0';
  $export['upload_entry'] = $strongarm;

  return $export;
}
