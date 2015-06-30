<?php
/** 
 * @BTN1 New<br/>Section
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
class xBloxLang {
	// Used for Complex values.
	var $_LANG = array(
		'BLOX' => array(
			'cover' => array(
				'name' => 'Coversheet',
				'desc' => 'Every great Website deserves a professionally sexy coverpage',
				'icon' => ''
			),
		),
		'ICON' => 'fa-wrench',
		'JUMBO' => array( 
			'HEAD' => 'The Engine Room',
			'QUOTE' => 'Customize your <b>Super Domain</b> however you like. The Power is your\'s.',
			'BTN'	=> array( 
				
				'templates'	=> array(
					'a' => '<i class="fa fa-paint-brush"></i> Themes',
					'class' => 'btn-transparent'
				),

				'customize'	=> array(
					'a' => '<i class="fa fa-wrench"></i> Customize',
					'class' => 'btn-transparent'
				),
				'html'	=> array(
					'a' => '<i class="fa fa-html5"></i> Engine Blox',
					'class' => 'btn-transparent'
				),
	

				'js'	=> array(
					'a' => '<i class="fa fa-book"></i> Libraries',
					'class' => 'btn-transparent'
				),				
				'css'	=> array(
					'a' => '<i class="fa fa-css3"></i> Style Sheets',
					'class' => 'btn-transparent'
				),

				
			)
		),
		'templates'=> array(
			'ICON' => 'fa-paint-brush',
			'JUMBO' => array( 
				'HEAD' => 'Themes',
				'QUOTE' => 'Pre-designed, ready-to-go, yet customizable, themes for your cloud.' 
			),
			'input' => array(
				'html','css','js'
			)
		),
		'html'=> array(
			'ICON' => 'fa-book',
			'JUMBO' => array( 
				'HEAD' => 'Countless Numbers of Blox',
				'QUOTE' => 'A "Blox" is a universally exchangable blob of code; compromised of HTML, CSS, and Javascript.',
				'QUOTE' => 'The Nexus is Home to a Millions of Blox built from and shared with the world.' 
			)
		),
		'update'=> array(
			'ICON' => 'fa-cubes',
			'JUMBO' => array( 
				'HEAD' => 'Edit Blox to Your Liking',
				'QUOTE' => 'Change a Blox the way You want it to behave.' 
			)
		),
		'delete'=> array(
			'ICON' => 'fa-bomb',
			'JUMBO' => array( 
				'HEAD' => 'Delete Blox',
				'QUOTE' => 'Jump right in! Become aquainted with the many different blocks to use to build your Kingdom.' 
			)
		)

	);
}
?>