core = 7.12
api = 2
projects[drupal][type] = core
projects[drupal][patch][] = http://drupal.org/files/issues/object_conversion_menu_router_build-972536-1.patch
projects[drupal][patch][] = http://drupal.org/files/issues/992540-3-reset_flood_limit_on_password_reset-drush.patch

projects[datapublic][download][type] = "git"
;projects[datapublic][download][url] = "git@github.com:reyebrow/datapublic_build.git"
projects[datapublic][download][url] = "http://git.drupal.org/project/datapublic.git"
projects[datapublic][download][branch] = "7.x-1.x"
projects[datapublic][type] = "profile"