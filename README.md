# luggage_bean_hero_ex
A bean for banners with expanded caption area.  

This bean differs from the luggage_bean_hero in the following ways:
- hero_ex prioritizes content over the image, so the banner's height will adjust to fit all content
- The caption area is a full text area, so any amount or type of WYSIWYG content can be entered.
- On narrow screen widths, the caption will stay on top of the image
- The image is implemented as a CSS background-image set to background-size: cover. This allows the image to be very flexible, but means that the edges may be cut off on different screen widths depending on the amount of content and viewport width.
- The options for the caption color are different
- The options for caption position are different

# Requirements
- Requires [suitcase_interim version 1.1.4]
- Relies on the [bean module]

# Installation
- Download the [bean module]
- Enable luggage_bean_hero_ex with drush or through the Drupal UI
- If some fields don't appear after installation, try clearing cache or resetting the feature with `drush fr luggage_bean_hero_ex`

## License

[GPLv2]

**Open Source | Open Access | Open Mind**

[suitcase_interim version 1.1.4]:https://github.com/isubit/suitcase_interim/releases/tag/1.1.4
[bean module]:https://www.drupal.org/project/bean
[GPLv2]:http://www.gnu.org/licenses/gpl-2.0.html
