<?php
/**
 * @file
 * luggage_bean_hero_ex.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_bean_hero_ex_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-hero_ex-field_hero_ex_color'.
  $field_instances['bean-hero_ex-field_hero_ex_color'] = array(
    'bundle' => 'hero_ex',
    'default_value' => array(
      0 => array(
        'value' => 'bean-hero-ex_light',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_ex_color',
    'label' => 'Caption Color',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-hero_ex-field_hero_ex_content'.
  $field_instances['bean-hero_ex-field_hero_ex_content'] = array(
    'bundle' => 'hero_ex',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'We recommend keeping this content brief. If more detail is needed, consider adding a link to another article or page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_ex_content',
    'label' => 'Caption Content',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'dangerous' => 'dangerous',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'suitcase_interim_block' => 'suitcase_interim_block',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'dangerous' => array(
              'weight' => 0,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'suitcase_interim_block' => array(
              'weight' => 0,
            ),
            'wysiwyg' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-hero_ex-field_hero_ex_image'.
  $field_instances['bean-hero_ex-field_hero_ex_image'] = array(
    'bundle' => 'hero_ex',
    'deleted' => 0,
    'description' => 'This is the hero banner image. Recommended width is at least 1500px. The image will be resized automatically to make sure there is room for the whole caption.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_ex_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'title_field_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_hero_ex_full' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_people_full' => 0,
          'image_people_thumb' => 0,
          'image_sceenshot_medium_200' => 0,
          'image_screenshot_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-hero_ex-field_hero_ex_position'.
  $field_instances['bean-hero_ex-field_hero_ex_position'] = array(
    'bundle' => 'hero_ex',
    'default_value' => array(
      0 => array(
        'value' => 'bean-hero_ex_left',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose where the caption will appear on the hero image. The default is Left.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_ex_position',
    'label' => 'Caption Position',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption Color');
  t('Caption Content');
  t('Caption Position');
  t('Choose where the caption will appear on the hero image. The default will be on the right.');
  t('Image');
  t('We recommend keeping this content brief. If more detail is needed, consider adding a link to another article or page.');
  t('This is the hero banner image. Recommended width is at least 1500px. The image will be resized automatically to make sure there is room for the whole caption.');

  return $field_instances;
}
