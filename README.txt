-- SUMMARY --

The BTM Features HP Slideshow Linked Image module is a Features-generated module that
eases the deployment of a simple home page slideshow with linked images.


-- FEATURES --

  - Non-configurable rotating home page slideshow.
  - Linked images, no controls
  - size of slideshow is determined by the imagecache preset
  - no CSS is provided
  - images are re-orderable


-- REQUIREMENTS --

None.


-- INSTALLATION --

* This module is dependent on the following modules:

  - BTM Support HP Slideshow Linked Image - available at:

    git@github.com:ShaunLaws/btm_support_hp_slideshow_simple.git

  - Features
  - ImageApi
  - ImageApi GD
  - Imagecache and Imagecache UI
  - Image Field
  - Jquery Plugin - contains the cycle plugin that is used by this module
  - Location
  - Views

* Download these modules to your site if they are not already downloaded -
navigating to Admin -> Site Building -> Features -> Manage
(/admin/build/features/manage) will tell you if any modules are missing

* enable the slideshow feature at Admin -> Site Building -> Features -> Manage
(/admin/build/features/manage). This will enable all dependent modules

* Installation will introduce the following feature elements:

  - Frontpage Slide content type with a field_slide image field,
    field_sort_order integer field, field_slide_url link field
  - "front_page_slide" and "front_page_slide_thumbnail" imagecache presets
  - Frontpage Slide content type permissions
  - Anon, Auth, Content Editor, Site Admin and Super Admin role (if they don't
    already exist)
  - the frontpage_slideshow view and "frontpage_slideshow: Block: Home Page
    Slideshow" block
  - the 'Manage Front Page Slideshow' menu item (/admin/content/slideshow) under
    Content Management

-- CONFIGURATION --

* Configure user permissions in User Management » Permissions »
  features module:

  - create Frontpage Slide content
  - delete any Frontpage Slide content
  - delete own Frontpage Slide content
  - edit any Frontpage Slide content
  - edit own Frontpage Slide content

* place the "frontpage_slideshow: Block: Home Page
    Slideshow" block in the desired region - Site Building » Blocks » List

  - 'configure' the block and set it to only show on <front>

* to quickly test, use devel generate to generate some nodes of type Frontpage
Slide


-- CUSTOMIZATION --

* Frontpage Slide content type

  - /admin/content/node-type/front-page-slide/fields/field_slide

    - change the help text, permitted file extensions, min and max resolution,
      path settings, file size restrictions, alt/title text settings, default
      image and global settings to suit your needs

  - /admin/content/node-type/front-page-slide/fields/field_slide_url

    - change the link settings to suit your needs

  - /admin/build/imagecache/front_page_slide

    - click 'override defaults' and edit the front_page_slide preset to suit
      your needs

  - /admin/build/imagecache/front_page_slide_thumbnail

    - click 'override defaults' and edit the front_page_slide_thumbnail preset
      to suit your needs

  - no styling is supplied, so add css as needed