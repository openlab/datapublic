WARNING: This branch (and repo) is no longer being actively maintained
====================================================================== 

If you want the latest version of Cogito you need to get it on drupal.org

http://drupal.org/sandbox/raychaser/1494826





Cogito is a theme based on the HTML5 Boilerplate and using Foundation for its
grid layouts and CSS styling. Originally it was based on Boron but it has since
been modified beyond recognition and about 90% of the boron code has been 
replaced.

NOTE: Foundation is classified as third party software by drupal so it cannot be 
included in this repository. You MUST download it from Zurb.

To Download Foundation from Zurb there are two methods:

1. Download it directly by going to http://foundation.zurb.com/
2. Clone it from Zurb's git repo: https://github.com/zurb/foundation

Any way you do it you must work it so that the theme directory looks as follows:

  themes/cogito/foundation/stylesheets/foundation.css
  themes/cogito/foundation/javascripts/foundation.js
  themes/cogito/foundation/images/

====================================================
Creating a New Child Theme:
====================================================

Cogito should never be enabled. Instead use a child theme that you can customize.
We've even created one for you called "STARTER_CHILD"

1. Copy STARTER_CHILD into the themes directory so you should have:

      /themes/cogito     and
      /themes/STARTER_CHILD
      
2. Rename the STARTER_CHILD directory. Let's call it 'mysite'
    So now you have:

      /themes/mysite

3. Now go into the mysite folder and rename STARTER_CHILD.css and STARTER_CHILD.info
    so now you have:
      
      /themes/mysite/mysite.info
      /themes/mysite/mysite.css
      
4. Go into 'mysite.info' and change the name and description in the top part of the 
    file.

      name = mysite theme
      description = mysite theme is a wicked-cool theme based on cogito

5. That's it!! Now go to 'Appearance' in the Drupal menus and you should see your 
    theme right there.
    
====================================================
Setting Sidebar widths:
====================================================   

Cogito allows you to set the sidebar widths for all pages

Note the following lines in the child_theme's .info file:    

    settings[three_columns_left] 	  = 3
    settings[three_columns_content]	= 6
    settings[three_columns_right]	  = 3
    
    settings[two_columns_lsb_left] 	    = 3
    settings[two_columns_lsb_content] 	= 9
    
    settings[two_columns_rsb_right]     = 3
    settings[two_columns_rsb_content] 	= 9
    
    settings[one_column_content] 	= 10

Notice how all but the last line add up to twelve (it is centered). Change these values 
to set how wide you want your sidebars to be in these four cases:

    1. Three columns: Left - Content - Right
    2. Two columns: Left - Content
    3. Two columns: Content - Right
    4. One column:  Content (Centered)
    
====================================================
Block alignment:
====================================================  

By setting the following lines in the child_theme's .info file you can tell your regions
if they should contain blocks that stack vertically or align horizontally in columns.

The defaults are as follows:

  settings[region][header]          = h
  settings[region][footer]          = h
  settings[region][content]         = v
  settings[region][highlighted]     = v
  settings[region][sidebar_first]   = v
  settings[region][sidebar_second]  = v
  settings[region][nav]             = h
  settings[region][help]            = v

Where 'h' = horizontal

We created a module here:
  https://github.com/reyebrow/re_block_width
  
That can let you change the width of each block for a horizontal section.


====================================================
Theming with Cogito
====================================================

All your custom CSS can go into 'mysite.css' and all your custom code can go into
'template.php'

header.tpl.php has been included in the starer kit because most people want to 
customize their header first. Anything that goes in this file will be included between 
the html <HEADER></HEADER> tags on all pages. 

You might want to put special logic in this file so it behaves differently on 
every page or you might want to customize it with a particular logo and site
title. All of this is possible using this file.

Any other of Cogito's .tpl files (in the tempalates folder) can be copied to your
child theme and they will override Cogito's defaults.

====================================================
Logos, Favicons and Apple Touch Icons
====================================================

Cogito looks for the following in the following places:

Site Logo:
  /child_theme/images/logo.png

Favicon:
  /child_theme/images/icons/favicon.ico

Apple Touch Icons:
  /child_theme/images/icons/apple-114x114.png
  /child_theme/images/icons/apple-72x72.png
  /child_theme/images/icons/apple-57x57.png