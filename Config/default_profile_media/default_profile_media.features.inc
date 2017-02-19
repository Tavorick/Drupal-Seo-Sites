<?php
/**
 * @file
 * default_profile_media.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_profile_media_image_default_styles() {
  $styles = array();

  // Exported image style: iek_photo.
  $styles['iek_photo'] = array(
    'label' => 'IEK - Photo',
    'effects' => array(
      0 => array(
        'name' => 'iek_image_padding',
        'data' => array(
          'padding_top' => 10,
          'padding_right' => 10,
          'padding_bottom' => 10,
          'padding_left' => 10,
          'bg_color' => '#ffffff',
        ),
        'weight' => 4,
      ),
      1 => array(
        'name' => 'iek_image_watermark',
        'data' => array(
          'text' => 'Flamez',
          'font' => 'tuffy_bold',
          'color' => '#ffffff',
          'size' => 30,
          'angle' => 0,
          'position' => 'bottom_center',
          'padding_top' => 10,
          'padding_right' => 10,
          'padding_bottom' => 10,
          'padding_left' => 10,
        ),
        'weight' => 3,
      ),
      2 => array(
        'name' => 'iek_image_overlay',
        'data' => array(
          'overlay_name' => 'basic_dropshadow_001_1024x768',
          'overlay_offset' => 20,
          'bg_offset' => 0,
        ),
        'weight' => 10,
      ),
    ),
  );

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (700x700)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => 700,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (300x300)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (200x200)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumbnail_gallery__150x150_.
  $styles['thumbnail_gallery__150x150_'] = array(
    'label' => 'thumbnail_gallery (150x150)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
