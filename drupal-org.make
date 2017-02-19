; seo_sites_default_build make file for d.o. usage
core = "7.x"
api = "2"
projects[drupal][type] = core
projects[drupal] = 7.54
; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc5"

projects[module_filter][version] = "2.0"

projects[ctools][version] = "1.12"

projects[profiler_builder][version] = "1.2"

projects[ds][version] = "2.14"

projects[features][version] = "2.10"

projects[features_builder][version] = "1.2"

projects[iek][version] = "1.4"

projects[imce][version] = "1.10"

projects[l10n_update][version] = "2.1"

projects[colorbox][version] = "2.12"

projects[entity][version] = "1.8"

projects[google_plusone][version] = "1.3"

projects[libraries][version] = "2.3"

projects[linkchecker][version] = "1.3"

projects[navigation404][version] = "1.0"

projects[node_clone][version] = "1.0"

projects[pathauto][version] = "1.3"

projects[redirect][version] = "1.0-rc3"

projects[search404][version] = "1.4"

projects[site_map][version] = "1.3"

projects[token][version] = "1.6"

projects[globalredirect][version] = "1.5"

projects[rules][version] = "2.9"

projects[rules_conditional][version] = "1.0-beta2"

projects[metatag][version] = "1.18"

projects[yoast_seo][version] = "1.1"

projects[honeypot][version] = "1.22"

projects[google_analytics][version] = "2.3"

projects[ckeditor][version] = "1.17"

projects[variable][version] = "2.5"

projects[views][version] = "3.14"

projects[webform][version] = "4.14"

projects[xmlsitemap][version] = "2.3"

; +++++ Libraries +++++

; ColorBox
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/master.zip"

