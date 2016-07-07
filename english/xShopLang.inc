<?php
/** 
 */
class xShopLang {
	// Used for Complex values.
	var $_LANG = array(
		'JUMBO' => array(
			'HEAD' => 'Storefront',
			'QUOTE' => 'Exchange your <b>Goods & Services</b> to the World!',
			'BTN'	=> array(

				'settings'	=> array(
					'a' => '<i class="fa fa-map-marker"></i> Setup &nbsp; ',
					'class' => 'btn-transparent'
				),
				
				'catalog'	=> array(
					'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
					'class' => 'btn-transparent'
				),
				// 'upload'	=> array(
				// 	'a' => '<i class="fa fa-photo"></i> Batch Upload &nbsp; ',
				// 	'class' => 'btn-info btn-sm'
				// ),
				
				'orders'	=> array(
					'a' => '<i class="fa fa-truck fa-flip-horizontal"></i> Orders &nbsp; ',
					'class' => 'btn-transparent'
				),
				// 'inventory'	=> array(
				// 	'a' => '<i class="fa fa-cube"></i> Inventory &nbsp; ',
				// 	'class' => 'btn-info'
				// ),
				'reports'	=> array(
					'a' => '<i class="fa fa-flag-checkered"></i> Reports &nbsp; ',
					'class' => 'btn-transparent'
				),
				// 'shipments'	=> array(
				// 	'a' => '<i class="fa fa-truck"></i> Shipments &nbsp; ',
				// 	'class' => 'btn-danger'
				// )
			)
		),
		'order' 	=> array(
			'status' => array('Placed','Processed','Packaged','Shipped')
		),
		'settings' => array(
			'ICON'  => 'fa-gear',
			'JUMBO' => array(
				'HEAD' => 'Setup Shop',
				'QUOTE' => 'Enter the information that will be displayed on customer\'s invoices.',
				 
			),
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
