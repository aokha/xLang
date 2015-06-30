<?php
/** 
 */
class xWwwSetupLang {
	// Used for Complex values.
	var $_LANG = array(
		'CONFIG' => array(
			'SITE' => array(
				'NAME'      => 'My SuperDom Site',
				'MOTO'      => 'A Network of Sites!',
				'COPYRIGHT' => 'SuperDomX &#copy; 2010~13'
			)
		),
		'ICON' => 'fa-smile-o',
		'JUMBO' => array(

			'HEAD' => "Let's get started!",
			'QUOTE' => "Use the menu on the left to navigate your way around.",
			'BTN'	=> array(
				'intro'	=> array(
					'a' => '<i class="fa fa-info"></i> Intro',
					'class' => 'btn-danger'
				),
				'todo'	=> array(
					'a' => '<i class="fa fa-check-circle"></i> Checklist',
					'class' => 'btn-info'
				),
				'about'	=> array(
					'a' => '<i class="fa fa-question"></i> About &nbsp; ',
					'class' => 'btn-success'
				)
				// 'buildHtml'	=> array(
				// 	'a' => '<i class="fa fa-html5"></i> 5. HTML Master &nbsp; ',
				// 	'class' => 'btn-warning'
				// )
			)
		),
		'intro'=> array(
			'ICON' => 'fa-info',
			'JUMBO' => array( 
				'HEAD' => "Introducing...",
				'QUOTE' => 'Use the wizard below to setup your <b>Super Domain</b> in a jiffy.' 
			),
			'input' => array(
				'html','css','js'
			)
		),
	);
}
?>