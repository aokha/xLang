<?php
/** 
 */
class xShippingLang {
	// Used for Complex values.
	var $_LANG = array(
		'JUMBO' => array(
			'HEAD' => 'Shipping Services',
			'ICON' => 'fa-truck',
			'QUOTE' => 'Offer various shipping services for your customers',
			'BTN'	=> array(

				// 'upload'	=> array(
				// 	'a' => '<i class="fa fa-photo"></i> Upload &nbsp; ',
				// 	'class' => 'btn-info btn-sm'
				// ),
				// 'catalog'	=> array(
				// 	'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
				// 	'class' => 'btn-primary btn-sm'
				// ),
				// 'inventory'	=> array(
				// 	'a' => '<i class="fa fa-cube"></i> Inventory &nbsp; ',
				// 	'class' => 'btn-success btn-sm'
				// ),
				// 'orders'	=> array(
				// 	'a' => '<i class="fa fa-truck fa-flip-horizontal"></i> Orders &nbsp; ',
				// 	'class' => 'btn-danger btn-sm'
				// ),
				'settings'	=> array(
					'a' => '<i class="fa fa-gear"></i> Settings &nbsp; ',
					'class' => 'btn-info btn-lg'
				),
				'calculator'	=> array(
					'a' => '<i class="fa fa-dollar"></i> Test Calulator',
					'class' => 'btn-danger btn-lg'
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
				'HEAD' => 'Shipping Settings',
				'QUOTE' => 'Configure your site\'s shipping settings.',
				 
			),
			'input' => array( 
				
				'UPS_handling_charge' => array(
					'icon' => 'fa fa-money',
					'desc' => 'How much do you want to charge for handling UPS packages?',
				),

				'enable_UPS' => array(
					'icon' => 'fa fa-truck',
					'desc' => 'Do you want to use USP?',
					'type' => 'radio', 
					'labels' => array(
						array(
							'txt' => 'Enable',
							'value' => true
						),
						array(
							'txt' => 'Disable ',
							'value' => false
						),
						array(
							'txt' => 'Limit ',
							'value' => 'limit'
						)
					)
				),

				'USPS_handling_charge' => array(
					'icon' => 'fa fa-money',
					'desc' => 'How much do you want to charge for handling USPS packages?',
				), 

				'enable_USPS' => array(
					'icon' => 'fa fa-truck',
					'desc' => 'If your business has a fax number, enter it here.',

					'type' => 'radio', 
					'labels' => array(
						array(
							'txt' => 'Enable',
							'value' => true
						),
						array(
							'txt' => 'Disable ',
							'value' => false
						),
						array(
							'txt' => 'Limit ',
							'value' => 'limit'
						)
					)
				),

				'FedEx_handling_charge' => array(
					'icon' => 'fa fa-money',
					'desc' => 'How much do you want to charge for handling FedEx packages?',
				),

				'enable_FedEx' => array( 
					'txt'  => '',
					'desc' => 'Enter the main email address that should recieve all point of sale emails',

					'type' => 'radio', 
					'icon' => 'fa fa-truck',
					'labels' => array(
						array(
							'txt' => 'Enable',
							'value' => true
						),
						array(
							'txt' => 'Disable ',
							'value' => false
						),
						array(
							'txt' => 'Limit ',
							'value' => 'limit'
						)
					)
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