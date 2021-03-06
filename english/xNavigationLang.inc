<?php
/** 
 * @NEW New<br/>Link
 * @BTN2 Copy<br/>Section
 * @BTN3 ReDraw<br/>Section
 * @BTN4 ?
 * @BTN5 New
 * @BTN6 Load Blueprint
 * @BTN7 Save
 * @BTN8 Load Box
 * @DELETEBTN Remove<br/>Section
 * @blah
 */
class xNavigationLang {
	// Used for Complex values.
	var $_LANG = array(
		'ICON' => 'fa-sitemap',
		'JUMBO' => array(

			'HEAD' => 'Welcome Aboard!',
			'QUOTE' => 'Here is ware yar set a path for ye vistors.',
			'BTN'	=> array(
				'create'	=> array(
					'a' => '<i class="fa fa-link"></i> New Link &nbsp; ',
					'class' => 'btn-success'
				),
				'read'	=> array(
					'a' => '<i class="fa fa-book"></i> Index &nbsp; ',
					'class' => 'btn-info'
				),
				'update'	=> array(
					'a' => '<i class="fa fa-warning"></i> 404 Pages &nbsp; ',
					'class' => 'btn-warning'
				),
				'delete'	=> array(
					'a' => '<i class="fa fa-bomb"></i> Delete &nbsp; ',
					'class' => 'btn-danger'
				)
			)
		),
		'catalog' => array(
			'JUMBO' => array(
				'HEAD' => 'Catalog',
				'QUOTE' => 'An interactive catalog manager. Oragnize your goods for the good of your customers ;)',
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
		)

	);
}
?>