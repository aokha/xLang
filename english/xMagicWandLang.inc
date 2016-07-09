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
class xMagicWandLang{
  // Used for Complex values.
  var $_LANG = array(
    'ICON' => 'fa-magic',
    'JUMBO' => array(
      'HEAD' => 'Magic Wand',
      'QUOTE' => 'Point, Click, Amaze!',
      'BTN' => array(
        'xs'  => array(
          'a'     => '<i class="fa fa-mobile"></i> Mobile',
          'class' => 'btn-primary',
          'modal' => 'sm',
          'buttons' => [
            [
              'html'    => '<i class="fa fa-ban"></i> Close',
              'dismiss' => true,
              'class'   => 'btn-danger',
            ]
          ]
        ),
        'sm'  => array(
          'a' => '<i class="fa fa-tablet"></i> Tablet',
          'class' => 'btn-primary hidden-xs hidden-sm',
          'modal' => true,
          'buttons' => [
            [
              'html'    => '<i class="fa fa-ban"></i> Close',
              'dismiss' => true,
              'class'   => 'btn-danger',
            ]
          ]
        ),
        'md'  => array(
          'a' => '<i class="fa fa-laptop"></i> Laptop',
          'class' => 'btn-primary hidden-xs hidden-sm',
          'modal' => 'lg',
          'buttons' => [
            [
              'html'    => '<i class="fa fa-ban"></i> Close',
              'dismiss' => true,
              'class'   => 'btn-danger',
            ]
          ]
        ),
        'lg'  => array(
          'a' => '<i class="fa fa-tv"></i> Desktop',
          'class' => 'btn-primary hidden-xs hidden-sm hidden-md',
          'modal' => 'lg',
          'buttons' => [
            [
              'html'    => '<i class="fa fa-ban"></i> Close',
              'dismiss' => true,
              'class'   => 'btn-danger',
            ]
          ]
        )
      )
    ),
    'catalog' => array(
      'JUMBO' => array(
        'HEAD' => 'Catalog',
        'QUOTE' => 'An interactive catalog manager. Oragnize your goods for the good of your customers ;)',
        'BTN' => array(
          'shelves' => array(
            'a' => '<i class="fa fa-book"></i> Catalog &nbsp; ',
            'class' => 'btn-info'
          ),
          //'products'  => '<i class="fa fa-coffee"></i> Products & Serives &nbsp; ',
          'orders'  => array(
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
