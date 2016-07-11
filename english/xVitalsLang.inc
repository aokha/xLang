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
class xVitalsLang {
  // Used for Complex values.
  var $_LANG = array(
    'ICON' => 'fa-globe',
    'JUMBO' => array(
      'HEAD' => 'Visitors',
      'QUOTE' => 'Visitor statistics',
      'BTN' => array(
        'index'  => array(
          'a' => '<i class="fa fa-bar-chart-o"></i> Statistics',
          'class' => 'btn-transparent'
        ),
        'settings'  => array(
          'a' => '<i class="fa fa-cog"></i> Settings',
          'class' => 'btn-transparent',
          'modal' => true
        ),
      )
    ),
    'settings' => array(
      'step_1'    => 'Setup Your 3rd Party tracking IDs',
      'wizard'      => array(
        'title'   => 'Setup your 3rd party tracking IDs',
        'subtitle'   => '',
        'step_1' => array( 
          'google_analytics_id' => array(
            'icon' => 'fa fa-google',
            'desc' => 'Your Google Analytics ID'
          ),
          'facebook_id' => array(
            'icon' => 'fa fa-facebook',
            'desc' => 'Your Facebook ID'
          ),
          'yahoo_id' => array(
            'icon' => 'fa fa-yahoo',
            'desc' => 'Your Yahoo ID'
          ),
        ),
      ),
    )
  );
}
?>
