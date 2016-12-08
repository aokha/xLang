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
      'HEAD' => 'Navigation',
      'QUOTE' => 'Help setup your menus and site maps correctly to optimize your search rankings. ',
      'BTN' => array(

        'navigation'  => array(
         'a' => '<i class="fa fa-list"></i> Menus &nbsp; ',
         'class' => 'btn-transparent'
        ),
        'read'  => array(
          'a' => '<i class="fa fa-link"></i> Links &nbsp; ',
          'class' => 'btn-transparent'
        ),
        'create' => array(
         'a' => '<i class="fa fa-sitemap"></i> Sitemap&nbsp; ',
         'class' => 'btn-transparent'
        ),

        'update'  => array(
          'a' => '<i class="fa fa-warning"></i> Error Pages &nbsp; ',
          'class' => 'btn-danger'
        ),
        // ,
        // 'delete' => array(
        //  'a' => '<i class="fa fa-bomb"></i> Delete &nbsp; ',
        //  'class' => 'btn-transparent'
        // )
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
    ),
    'navigation' => array(
      'ICON' => 'fa-anchor',
      'JUMBO' => array(
        'HEAD' => 'Navigation',
        'QUOTE' => 'Help your visitors see their way through your sea of information.',
        // 'BTN'  => array(
        //  'shelves' => array(
        //    'class' => 'btn-transparent',
        //    'i' => 'fa fa-pencil',
        //    'modal' => array(
        //      'title' => 'Select a Menu to Edit',
        //      'tpl'  => 'select-menu'
        //    )
        //  ),
        //  //'products'  => '<i class="fa fa-coffee"></i> Products & Serives &nbsp; ',
        //  'orders'  => array(
        //    'class' => 'btn-transparent',
        //    'i' => 'fa fa-plus',
        //    'modal' => array(
        //      'title' => 'Create a New Menu',
        //      'tpl'  => 'create-menu'
        //    )
        //  )
        // )
      ),
      'TABS' => [
        [
          'a'   => 'Edit Menus',
          'i'   => 'fa-list',
          'tpl' => 'edit-menus'
        ],
        [
          'a' => 'Manage Locations'
        ],
        // [
        //  'a' => 'More...',
        //  'dropdown' => true,
        //  'TABS' => [
        //    [
        //      'a'   => 'Links',
        //      'tpl' => 'links'
        //    ]
        //  ]
        // ]
      ],
      'MENU' => [
        [
          'a'   => 'Offline Pages',
          'i'   => 'eye',
          'tpl' => 'pages'
        ],
        [
          'a'   => 'Links',
          'i'   => 'link',
          'tpl' => 'links'
        ],
        [
          'a' => 'Categories',
          // Example to show that you can also use an array to set the i.
          'i' => [
            'class' => 'fa fa-book',
            'html' => ''
          ]
        ]
      ],
      'PAGES' =>  array(
        'TABS' => [
          [
            'a'   => 'Most Recent'
          ],
          [
            'a' => 'Manage Locations'
          ]
        ]
      ),
      'FORMS' => array(
        'read' => [ 
          'html' => [
            'fieldset' => [
              'html' => [
                'legend' => 'choose a menu to edit',
                'tpl' => 'form.control.group'
                
              ]
            ],
            'button' => [
              'class' => 'btn btn-danger',
              'style' => 'color: red;',
              'onclick' => "alert('hello')",
              'html' => 'Testing 123.'
            ],
          ]
        ],
        'create' => [ 
          'menus' => array(
            'icon' => 'fa fa-list',
            'desc' => 'Choose a Menu.'
          )
        ]
      )
    )
  );
}
?>
