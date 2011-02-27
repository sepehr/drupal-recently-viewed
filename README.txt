Description
===========
The module tracks recently viewed nodes for both anonymous and authenticated users.
It provides an API function for other modules to get a list of recently viewed items and also defines a configurable "recently viewed items" block.
You might want to make use of the recently_viewed_views submodule which provides a customised default View to benefit the endless flexibility of Views.
Also if the Ubercart module suite is enabled, there's another useful submodule called recently_viewed_products which adds an another default view for ubercart specific products with the same functionality.


Important Notice
================
Since the module initiates sessions, it's incompatible with Varnish Cache for now.
In future releases there might be an option to work with cookies instead of sessions to make it compatible with Varnish.


Recommended Modules
===================
Here is a list of recommended modules to be used with "Recently viewed Views integration" and "Recently viewed products" submodules:

  - Views Argument Sort (http://drupal.org/project/views_argsort)
  Using this module you can sort the items by their visit time order in a view.

  - Semantic Views (http://drupal.org/project/semanticviews)
  You're going to get a more semantic view.

  - Views Slideshow (http://drupal.org/project/views_slideshow)
  Using this you can show the recently viewed items in a slideshow format.


Author and Maintainer
=====================
Sepehr Lajevardi (http://drupal.org/user/668010)

