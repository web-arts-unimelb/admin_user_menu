<?php
/**
 * @file
 * admin_user_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function admin_user_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-user-menu:admin/content
  $menu_links['menu-admin-user-menu:admin/content'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-admin-user-menu:admin/content/dashboard
  $menu_links['menu-admin-user-menu:admin/content/dashboard'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/content/dashboard',
    'router_path' => 'admin/content/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure
  $menu_links['menu-admin-user-menu:admin/structure'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure/menu/manage/main-menu
  $menu_links['menu-admin-user-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-admin-user-menu:admin/structure/nodequeue/2/view/2
  $menu_links['menu-admin-user-menu:admin/structure/nodequeue/2/view/2'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'admin/structure/nodequeue/2/view/2',
    'router_path' => 'admin/structure/nodequeue/%/view/%',
    'link_title' => 'Banner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-admin-user-menu:node/add
  $menu_links['menu-admin-user-menu:node/add'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: menu-admin-user-menu:node/add/event
  $menu_links['menu-admin-user-menu:node/add/event'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/news
  $menu_links['menu-admin-user-menu:node/add/news'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/page
  $menu_links['menu-admin-user-menu:node/add/page'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-admin-user-menu:node/add/slider
  $menu_links['menu-admin-user-menu:node/add/slider'] = array(
    'menu_name' => 'menu-admin-user-menu',
    'link_path' => 'node/add/slider',
    'router_path' => 'node/add/slider',
    'link_title' => 'Banner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Banner');
  t('Content');
  t('Dashboard');
  t('Event');
  t('Main menu');
  t('News');
  t('Page');
  t('Structure');


  return $menu_links;
}
