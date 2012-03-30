// $Id$


What is OGDI? - http://www.microsoft.com/industry/government/opengovdata/

Module development was sponsored by Microsoft Canada and Raised Eyebrow Web Studio (http://www.raisedeyebrow.com).
Module developed by Colin Calnan @ Raised Eyebrow Web Studio

The OGDI Field Module allows you to add a CCK field to any content type, which
accepts a valid URL to a OGDI dataset as input, and outputs a slick, themed
scrollable, filterable, sortable, searchable table and a map displaying that data.
It does all this magic by communicating with the OGDI API.

This module was originally developed as an extension the DataDotGC.ca website, 
a citizen-led open government data portal for Canada. The site was built in Drupal and uses CKAN (the Comprehensive Knowledge Archive Network) for cataloguing the data. 
When we became aware of Microsoft's open-source OGDI application, which allows users to browse & filter cloud-hosted datasets within an easy-to-use web interface,
we wanted to integrate OGDI's functionality as well. 
Microsoft Canada generously sponsored the module development project, and we now have a method of displaying OGDI instances on Drupal-powered websites. 

============================================================================
MODULE DEPENDENCIES:
============================================================================

This module requires a few extra modules be installed to work correctly.

1.  JQuery Update - 6.x-2.0-alpha1 or newer as this module requires jQuery 1.3
    http://drupal.org/project/jquery_update

2.  jQuery UI - 6.x-1.3 or newer
    http://drupal.org/project/jquery_ui

============================================================================
LIBRARY DEPENDENCIES:
============================================================================

This module also requires some extra libraries to work correctly.

1.  JQuery UI - 1.7.3 or newer
    http://jqueryui.com/
    See how to update to Jquery UI 1.7 here - http://drupalcode.org/viewvc/drupal/contributions/modules/jquery_ui/README.txt?view=co&pathrev=DRUPAL-6--1

2.  DataTable jQuery plugin - 1.7.0 beta 3 or newer
    http://www.datatables.net/

============================================================================
INSTALLATION INSTRUCTIONS:
============================================================================

* Download and install the above modules to your modules folder.
* Download the DataTable file and unzip it into the plugins folder of this module.
* Your folder structure should look like:
    
      path/to/your/modules/ogdi_field/plugins/dataTables (please rename the folder from dataTables-1.x to dataTables)
                                              --> /media
                                                  --> /css
                                                  --> /images
                                                  --> /js

============================================================================
USING A DIFFERENT JQUERY UI THEME:
============================================================================

This module uses the "base" jQuery UI theme to style the DataTable. 
If you want to use your own pre-rolled theme you will have to change the path
to that theme in the ogdi_field.module file.

Look for the function called ogdi_field_init() at the very top of the file and find the line

/* Jquery UI */
drupal_add_css(drupal_get_path('module', 'jquery_ui') ."/jquery.ui/themes/base/ui.all.css", 'module', 'all');

You can then change this path to be whatever you want.

The future plan is to allow this path to be customizable in the backend.


============================================================================
KNOWN ISSUES:
============================================================================

It appears that on some hosting accounts running Apache (mostly shared hosting), submitting the URL in the OGDI Field can 
cause a 403 error to occur. This is due to a mod_security issue on Apache and can be corrected by letting your hosting company know.

Here is an error message from one hosting company for reference:

ModSecurity: Access denied with code 403 (phase 2). Match of “beginsWith http://%{SERVER_NAME}/” against “MATCHED_VAR” required. 
[file “/usr/local/apache/conf/turtle-rules/10_asl_rules.conf”] [line “787”] [id “340162”] [rev “176”] 
[msg “Atomicorp.com – FREE UNSUPPORTED DELAYED FEED - WAF Rules: Remote File Injection attempt in ARGS (AE)”] [data “/node/793/edit”] [severity “CRITICAL”] 