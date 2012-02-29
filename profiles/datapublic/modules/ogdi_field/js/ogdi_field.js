// $Id$
(function ($) {
  //==========================================//
  // BUILDING THE TABS
  //==========================================//
  Drupal.behaviors.buildTabs = {
    attach: function (context, settings) {
      if($('.ogdi-wrapper').length > 0) {
        
        //==========================================//
        // BUILDING THE MAP(s)
        //==========================================//
        $('.bing-map').each(function(v,e) { // Loop through all map elements on the page...
          var url = $(this).text(); // Get the OGDI URL that will return JSON...
          var fields = Drupal.settings.ogdi_field[v].description.split(',');  // Get the fields that will be displayed on the markers...

          $('#ogdi-map-' + v).gmap({'credentials': Drupal.settings.bingmaps_api_key, 'enableSearchLogo': false, 'showBreadcrumb': true, 'enableClickableLogo': false}).bind('init', function() {  // Attach the Bing Map...
          	$.getJSON(url, function(response) {  // Query the URL to get back JSON...
          		$.each(response.d, function(i, obj) { // Loop through the JSON...
                var description = '';  
                for(field in fields) {
                  description = description + obj[fields[field]] + '<br />';  // Set the description field from the comma separated values...
                }        
          			// Get our location from the fields we defined as lat long in the module
                var location = new Microsoft.Maps.Location(obj[Drupal.settings.ogdi_field[v].latitude], obj[Drupal.settings.ogdi_field[v].longitude]);  // Create a new location for a marker...
                // Add markers at our location
          			$('#ogdi-map-' + v).gmap('addMarker', { 'location': location, 'bounds': true, 'title': obj[Drupal.settings.ogdi_field[v].title] } ) // Add a marker and a popup for that marker...
          			.click(function() {
                  // Set up the marker/pin information...
          				$('#ogdi-map-' + v).gmap('openInfoWindow', { 
          					'title': obj[Drupal.settings.ogdi_field[v].title],
                    'description': description
          				}, this);
          			});
          		});
          	});
          });
        });

        //$('#ogdi-map-0').gmap('pagination', '');
        
        // Create the tabs...   
        $('.ogdi-tabs').tabs();
        
        // Build the datagrid...
        $('.ogdi-datagrid').not('.processed')
          .each(function(i,e){
            $(this).addClass('processed');  // Handle the reloading issues by adding a process class...
          }).
          dataTable({
            "bJQueryUI": true,  // Add support for jQueryUI...
            "bAutoWidth": false, // Allow it's width to be automatic...
            "bProcessing": true,
            "bStateSave": true,
            "sPaginationType": "full_numbers",  // Use full numbers for pagination...
            "sScrollX": "100%", // Provide a horizontal scrollbar...
            "bScrollCollapse": true,
            "bRetrieve" : true,
          });
      }
    }
  }
  
  //==========================================//
  // CREATING THE DIALOG BOX
  //==========================================//
  Drupal.behaviors.dialog = {
    attach: function (context, settings) {
      // If the dialog text exists...
      if($('div.ogdi-helptext').length > 0) {
        // Set a variable to use later...
        var $dialog = $('div.ogdi-helptext');
        // Hide the container...
        $dialog.hide();
        // Get the tooltip link...
        var $tooltip = $('a.ogdi-helptip');
        // On click
        $tooltip.click(function() {
          $dialog.clone().dialog({  // Clone the dialog container to prevent the dialog() function from eating it...
            width: 680,
            modal: true
          });
          return false;
        });
      }
    }
  }
})(jQuery);