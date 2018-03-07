<div class="bean-hero-ex <?php print $bean->field_hero_ex_position['und'][0]['value'] ?> <?php print $bean->field_hero_ex_color['und'][0]['value'] ?>" style="background-image: url(<?php print file_create_url($bean->field_hero_ex_image['und'][0]['uri']); ?>) ;" <?php print $attributes; ?>>

  <div class="bean-hero-ex_caption">
    <div class="bean-hero-ex_content">
      <?php if ($bean->title !== ''): ?>
        <h2 class="bean-hero-ex_title"><?php print $title; ?></h2>
      <?php endif; ?>
      <?php print $bean->field_hero_ex_content['und'][0]['value']; ?>
    </div>
  </div>
</div>