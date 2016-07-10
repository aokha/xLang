<?php
  /** 
  */
  class xThemesLang {
    // Used for Complex values.
    var $_LANG = array(
      'JUMBO'   => array(
        'HEAD'  => 'Themes',
        'QUOTE' => 'Quickly change the look and feel!',
        'BTN'   => array(
          'index'  => array(
            'a' => '<i class="fa fa-moon-o"></i> Change Theme',
            'class' => 'btn-transparent'
          ),
          'add' => array(
            'a' => '<i class="fa fa-book"></i> Add New',
            'class' => 'btn-transparent'
          ),
        )
      ),
      'order' 	=> array(
        'status' => array('Placed','Processed','Packaged','Shipped')
      ),
      'add' => array(
        'ICON'  => 'fa-gear',
        'JUMBO' => array(
          'HEAD' => 'Add Themes',
          'QUOTE' => 'Choose from our wide selection of themes.',
        ),
        'tabs'      => [
          'featured'  => [
            'icon'  => 'fa-trophy hidden-xs'
          ],
          'popular'   => [
            'icon'  => 'fa-thumbs-up hidden-xs'
          ],
          'latest'    => [
            'icon'  => 'fa-clock-o hidden-xs'
          ],
          'favorites' => [
            'icon'  => 'fa-star-o hidden-xs'
          ],
        ],
        'input' => array( 
          'phone' => array(
            'icon' => 'fa fa-phone',
            'desc' => 'Enter your business phone number here.'
          ),
          'fax' => array(
            'icon' => 'fa fa-fax',
            'desc' => 'If your business has a fax number, enter it here.',
          ),
          'owner_email' => array( 
            'txt'  => '',
            'desc' => 'Enter the main email address that should recieve all point of sale emails',
            'icon' => 'fa fa-envelope',
          ),
          'primary_street' => array(
            'icon' => 'fa fa-home'
          ),
          'second_street' => array(
            'icon' => 'fa fa-road'
          ),
          'municipality_major' => array(
            'icon' => 'fa fa-building'
          ),
          'district' => array(
            'icon' => 'fa fa-plane'
          ),
          'postal' => array(
            'icon' => 'fa fa-globe'
          ),
          'tax' => array(
            'desc' => 'Enter in the percentage amount to charge tax. Items also must be marked taxable',
            'icon' => 'fa fa-dollar'
          ),
          'shipping' => array(
            'desc' => 'If you have a flat rate shipping rate, enter it here, otherwise leave it blank.',
            'icon' => 'fa fa-truck'
          )
        )
      ),
      'catalog' => array(
        'ICON'  => 'fa-book',
        'JUMBO' => array(
          'HEAD' => 'Catalog New Items',
          'QUOTE' => 'These are pictures that have yet to be added to your shop.',	
          'BTN'	=> array(
            'shelves'	=> array(
              'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
              'class' => 'btn-info'
            ),
            //'products'	=> '<i class="fa fa-coffee"></i> Products & Serives &nbsp; ',
            'orders'	=> array(
              'a' => '<i class="fa fa-truck"></i> Orders &nbsp; ',
              'class' => 'btn-success'	
            )
          ),
          'catalog' => array(
            ''
          )
        ),
      ),
      'upload' => array(
        'ICON'  => 'fa-cloud-upload',
        'JUMBO' => array(
          'HEAD' => 'Upload',
          'QUOTE' => 'Quickly add files to your shop by uploading pictures of the items.',
          
        ),
      ),
      'inventory' => array(
        'ICON'  => 'fa-cubes',
        'JUMBO' => array(
          'HEAD' => 'Inventory',
          'QUOTE' => 'An interactive catalog manager. Oragnize your goods for the good of your customers ;)',
          
        ),
      ),
      'orders' => array(
        'ICON'  => 'fa-truck fa-flip-horizontal',
        'JUMBO' => array(
          'HEAD' => 'Global Economy',
          'QUOTE' => 'Easily see where all your products are going & where to ship to next.',
          
        ),
      ),
    );
  }
?>
