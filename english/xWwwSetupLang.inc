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
      'HEAD' => 'Introducing, <b>Mr. Wizard</b>',
      'QUOTE' => "<b>Mr. Wizard</b> is an easy, step-by-step, configuration panel. Click the buttons below to begin.",
      'BTN' => array(
        'settings' => array(
          'a' => '<i class="fa fa-globe"></i> Site Title & Address',
          'class' => 'btn-success',
          'modal' => true
        ),
        'superdom' => array(
          'a' => '<i class="fa fa-gear"></i> Configure SuperDom',
          'class' => 'btn-info',
          'modal' => true
        ),
        // 'todo' => array(
        //  'a' => '<i class="fa fa-check-circle"></i> Checklist',
        //  'class' => 'btn-info'
        // ),
        // 'about'  => array(
        //  'a' => '<i class="fa fa-question"></i> About &nbsp; ',
        //  'class' => 'btn-success'
        // )
        // 'buildHtml'  => array(
        //  'a' => '<i class="fa fa-html5"></i> 5. HTML Master &nbsp; ',
        //  'class' => 'btn-warning'
        // )
      )
    ),
    'intro'=> array(
      'ICON' => 'fa-info',
      'JUMBO' => array( 
        'HEAD' => "Introducing... <b>Mr. Wizard</b>!",
        'QUOTE' => "So Easy it's like Magic: 1, 2, 3, Poof!" 
      ),
      'input' => array(
        'html','css','js'
      )
    ),
    'settings' => array(
      'ICON'  => 'fa-slides',
      'JUMBO' => array(
        'HEAD' => 'Mr. Wizard',
        'QUOTE' => 'Enter the information that will be displayed on customer\'s invoices.',
      ),
      'step_1'    => 'Step 1: Title',
      'wizard'      => array(
        'step_1' => array( 
          'site_title' => array(
            'icon' => 'fa fa-globe',
            'desc' => 'The Main Title of this Site'
          ),
          'tagline' => array(
            'icon' => 'fa fa-quote-left',
            'desc' => 'In a few words, explain what your site is about.',
          ),
          'site_live' => array(
            'icon' => 'fa fa-heartbeat',
            'desc' => 'Turn On or Off your Website from Here.',
            'type' => 'radio',
            'labels' => array(
              array(
                'txt' => 'Online',
                'value' => 'True'
              ),
              array(
                'txt' => 'Offline',
                'value' => false
              )
            )
          ) 
        ),
        'step_2' => array( 
          'superDom_URL' => array(
            'icon' => 'fa fa-anchor',
            'desc' => 'Enter the URL address where SuperDom is installed'
          ),
          'site_address_URL' => array(
            'icon' => 'fa fa-globe',
            'desc' => 'Enter the address here if you want your site home page to be different from your SuperDom installation directory.',
          ),
          'email_address' => array(
            'icon' => 'fa fa-envelope',
            'desc' => 'This address is used for admin purposes, like new user notification.'
          ),
        )
      ),
    ),
  );
}
?>
