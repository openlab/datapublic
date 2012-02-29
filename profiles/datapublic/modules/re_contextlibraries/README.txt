RE Context Libraries README.txt
--------------------------------------------------------------------------------

INTRODUCTION


In Drupal, modules are often used to provide access to javascript libraries, but
it's often undesirable to include those libraries on every page. The theming
system makes it possible to specify where and when a javascript library file is
included, but this system is not always sufficiently flexible.

The Context module provides a way of defining 'reactions' (such as blocks) to
specific contexts (such as path, page or view), but there's no default way to use
Context to include a javascript library.

The RE Context Libraries module provides a way to make javascript (or CSS)
libraries available as reactions in contexts. To make individual javascript
library files available, it is only necessary to write a very short 'library'
module. These modules register their js and/or css files with the system so
that they can be used as 'reactions' within the context administration form.


INSTALLATION


1.  To install the module, move it into one of Drupal's standard module director-
    ies such as sites/all/modules and enable it from the Modules administration
    page at admin/build/modules.

2.  Enable at least one library module from the Modules administration page.


EXAMPLES


The RE CL Example module in the re_clexample folder demonstrates how to provide
a simple javascript library for use in any Context reaction. To use the module,
first enable it on the modules page, then add it as a reaction on the edit page
for a context.