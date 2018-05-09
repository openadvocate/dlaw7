<?php
/**
 * @file
 * solr_search_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function solr_search_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'site_search';
  $page->task = 'page';
  $page->admin_title = 'Site search';
  $page->admin_description = '';
  $page->path = 'search-site/!query';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_site_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'site_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = 'e02b8bce-7c36-4072-84bc-1363690e3d6d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Type',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $display->content['new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58'] = $pane;
  $display->panels['left'][0] = 'new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $pane = new stdClass();
  $pane->pid = 'new-2b3561f5-a0af-498e-88ad-f925d17fb768';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2b3561f5-a0af-498e-88ad-f925d17fb768';
  $display->content['new-2b3561f5-a0af-498e-88ad-f925d17fb768'] = $pane;
  $display->panels['left'][1] = 'new-2b3561f5-a0af-498e-88ad-f925d17fb768';
  $pane = new stdClass();
  $pane->pid = 'new-9494d637-d6be-4ada-9327-46860a18a3c1';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Tags',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9494d637-d6be-4ada-9327-46860a18a3c1';
  $display->content['new-9494d637-d6be-4ada-9327-46860a18a3c1'] = $pane;
  $display->panels['left'][2] = 'new-9494d637-d6be-4ada-9327-46860a18a3c1';
  $pane = new stdClass();
  $pane->pid = 'new-ecf62246-6acf-4c79-9c94-fcdfc2a44a70';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-uBJ9iZ0w9tFRd9Vg6ujFq2pIpOnOkRe5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Zip Code',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ecf62246-6acf-4c79-9c94-fcdfc2a44a70';
  $display->content['new-ecf62246-6acf-4c79-9c94-fcdfc2a44a70'] = $pane;
  $display->panels['left'][3] = 'new-ecf62246-6acf-4c79-9c94-fcdfc2a44a70';
  $pane = new stdClass();
  $pane->pid = 'new-70ef85fb-5f99-48ac-af29-daa820554cd7';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-p5ktS8tHWfiKow7pMGDoz8bAZw1bmtgE';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Language',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '70ef85fb-5f99-48ac-af29-daa820554cd7';
  $display->content['new-70ef85fb-5f99-48ac-af29-daa820554cd7'] = $pane;
  $display->panels['left'][4] = 'new-70ef85fb-5f99-48ac-af29-daa820554cd7';
  $pane = new stdClass();
  $pane->pid = 'new-b1628b31-aeff-442e-8b27-792a755ec6e4';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_form';
  $pane->subtype = 'apachesolr_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path_type' => 'same',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'show_keys' => 1,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b1628b31-aeff-442e-8b27-792a755ec6e4';
  $display->content['new-b1628b31-aeff-442e-8b27-792a755ec6e4'] = $pane;
  $display->panels['right'][0] = 'new-b1628b31-aeff-442e-8b27-792a755ec6e4';
  $pane = new stdClass();
  $pane->pid = 'new-007017fd-393c-4560-b916-f44afaadf10f';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_info';
  $pane->subtype = 'apachesolr_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title_override' => FALSE,
    'title_override_text' => '',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '007017fd-393c-4560-b916-f44afaadf10f';
  $display->content['new-007017fd-393c-4560-b916-f44afaadf10f'] = $pane;
  $display->panels['right'][1] = 'new-007017fd-393c-4560-b916-f44afaadf10f';
  $pane = new stdClass();
  $pane->pid = 'new-343bb610-271b-4eb2-aaab-436fd56c652f';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_spellchecker';
  $pane->subtype = 'apachesolr_spellchecker';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title_override' => FALSE,
    'title_override_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '343bb610-271b-4eb2-aaab-436fd56c652f';
  $display->content['new-343bb610-271b-4eb2-aaab-436fd56c652f'] = $pane;
  $display->panels['right'][2] = 'new-343bb610-271b-4eb2-aaab-436fd56c652f';
  $pane = new stdClass();
  $pane->pid = 'new-a388bc5f-1aea-4d2c-801b-43ce50d4680a';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_result';
  $pane->subtype = 'apachesolr_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'keys_action' => 'none',
    'keys' => '',
    'keys_required' => 0,
    'filters_action' => 'override',
    'filters' => '-bundle:contact',
    'rows' => '10',
    'env_id' => '',
    'sort_action' => 'none',
    'sort' => '',
    'breadcrumb' => 1,
    'title_override' => 1,
    'title_override_text' => '<none>',
    'empty_override' => 0,
    'empty_override_title' => '',
    'empty_override_text' => array(
      'value' => '',
      'format' => 'plain_text',
    ),
    'empty_override_format' => 'plain_text',
    'log' => 0,
    'substitute' => 0,
    'context' => 'argument_string_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a388bc5f-1aea-4d2c-801b-43ce50d4680a';
  $display->content['new-a388bc5f-1aea-4d2c-801b-43ce50d4680a'] = $pane;
  $display->panels['right'][3] = 'new-a388bc5f-1aea-4d2c-801b-43ce50d4680a';
  $pane = new stdClass();
  $pane->pid = 'new-e72546ab-e356-4458-a6ae-37a286c75915';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<?php if (function_exists(\'solr_search_panel_has_contact_nodes\') and solr_search_panel_has_contact_nodes()) { ?>
<div class="">
  <div class="panel-panel left col-sm-4">
    <h1 class="page-header search-header">Search</h1>
  </div>
  <div class="panel-panel left col-sm-8">
    <ul class="nav nav-tabs nav-justified lead">
    <li class="active"><a href="#">Find Info</a></li>
    <li class=""><a href="/search-help/%query:html_safe">Find Help</a></li>
    </ul>
  </div>
</div>
<?php } ?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e72546ab-e356-4458-a6ae-37a286c75915';
  $display->content['new-e72546ab-e356-4458-a6ae-37a286c75915'] = $pane;
  $display->panels['top'][0] = 'new-e72546ab-e356-4458-a6ae-37a286c75915';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['site_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'site_search_help';
  $page->task = 'page';
  $page->admin_title = 'Help search';
  $page->admin_description = '';
  $page->path = 'search-help/!query';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'query' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_site_search_help_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'site_search_help';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-search-help',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Find Help';
  $display->uuid = 'e02b8bce-7c36-4072-84bc-1363690e3d6d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Type',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $display->content['new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58'] = $pane;
  $display->panels['left'][0] = 'new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $pane = new stdClass();
  $pane->pid = 'new-2b3561f5-a0af-498e-88ad-f925d17fb768';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Topics',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2b3561f5-a0af-498e-88ad-f925d17fb768';
  $display->content['new-2b3561f5-a0af-498e-88ad-f925d17fb768'] = $pane;
  $display->panels['left'][1] = 'new-2b3561f5-a0af-498e-88ad-f925d17fb768';
  $pane = new stdClass();
  $pane->pid = 'new-9494d637-d6be-4ada-9327-46860a18a3c1';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Tags',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9494d637-d6be-4ada-9327-46860a18a3c1';
  $display->content['new-9494d637-d6be-4ada-9327-46860a18a3c1'] = $pane;
  $display->panels['left'][2] = 'new-9494d637-d6be-4ada-9327-46860a18a3c1';
  $pane = new stdClass();
  $pane->pid = 'new-ecf62246-6acf-4c79-9c94-fcdfc2a44a70';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-uBJ9iZ0w9tFRd9Vg6ujFq2pIpOnOkRe5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Zip Code',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ecf62246-6acf-4c79-9c94-fcdfc2a44a70';
  $display->content['new-ecf62246-6acf-4c79-9c94-fcdfc2a44a70'] = $pane;
  $display->panels['left'][3] = 'new-ecf62246-6acf-4c79-9c94-fcdfc2a44a70';
  $pane = new stdClass();
  $pane->pid = 'new-70ef85fb-5f99-48ac-af29-daa820554cd7';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-p5ktS8tHWfiKow7pMGDoz8bAZw1bmtgE';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Language',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '70ef85fb-5f99-48ac-af29-daa820554cd7';
  $display->content['new-70ef85fb-5f99-48ac-af29-daa820554cd7'] = $pane;
  $display->panels['left'][4] = 'new-70ef85fb-5f99-48ac-af29-daa820554cd7';
  $pane = new stdClass();
  $pane->pid = 'new-b1628b31-aeff-442e-8b27-792a755ec6e4';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_form';
  $pane->subtype = 'apachesolr_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path_type' => 'same',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'show_keys' => 1,
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b1628b31-aeff-442e-8b27-792a755ec6e4';
  $display->content['new-b1628b31-aeff-442e-8b27-792a755ec6e4'] = $pane;
  $display->panels['right'][0] = 'new-b1628b31-aeff-442e-8b27-792a755ec6e4';
  $pane = new stdClass();
  $pane->pid = 'new-08384014-db50-4766-82f6-5cfa44b65aff';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_info';
  $pane->subtype = 'apachesolr_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title_override' => FALSE,
    'title_override_text' => '',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '08384014-db50-4766-82f6-5cfa44b65aff';
  $display->content['new-08384014-db50-4766-82f6-5cfa44b65aff'] = $pane;
  $display->panels['right'][1] = 'new-08384014-db50-4766-82f6-5cfa44b65aff';
  $pane = new stdClass();
  $pane->pid = 'new-5f67be14-98c6-4243-b8bc-0c1d7ed20106';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_spellchecker';
  $pane->subtype = 'apachesolr_spellchecker';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'title_override' => FALSE,
    'title_override_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5f67be14-98c6-4243-b8bc-0c1d7ed20106';
  $display->content['new-5f67be14-98c6-4243-b8bc-0c1d7ed20106'] = $pane;
  $display->panels['right'][2] = 'new-5f67be14-98c6-4243-b8bc-0c1d7ed20106';
  $pane = new stdClass();
  $pane->pid = 'new-a388bc5f-1aea-4d2c-801b-43ce50d4680a';
  $pane->panel = 'right';
  $pane->type = 'apachesolr_result';
  $pane->subtype = 'apachesolr_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'keys_action' => 'none',
    'keys' => '',
    'keys_required' => 0,
    'filters_action' => 'override',
    'filters' => 'bundle:contact',
    'rows' => '10',
    'env_id' => '',
    'sort_action' => 'none',
    'sort' => '',
    'breadcrumb' => 1,
    'title_override' => 1,
    'title_override_text' => '<none>',
    'empty_override' => 0,
    'empty_override_title' => '',
    'empty_override_text' => array(
      'value' => '',
      'format' => 'plain_text',
    ),
    'empty_override_format' => 'plain_text',
    'log' => 0,
    'substitute' => 0,
    'context' => 'argument_string_1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a388bc5f-1aea-4d2c-801b-43ce50d4680a';
  $display->content['new-a388bc5f-1aea-4d2c-801b-43ce50d4680a'] = $pane;
  $display->panels['right'][3] = 'new-a388bc5f-1aea-4d2c-801b-43ce50d4680a';
  $pane = new stdClass();
  $pane->pid = 'new-b36238db-c50f-49dc-b92d-b3054edc0320';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="">
  <div class="panel-panel left col-sm-4">
    <h1 class="page-header search-header">Search</h1>
  </div>
  <div class="panel-panel left col-sm-8">
    <ul class="nav nav-tabs nav-justified lead">
      <li class=""><a href="/search-site/%query:html_safe">Find Info</a></li>
      <li class="active"><a href="#">Find Help</a></li>
    </ul>
  </div>
</div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b36238db-c50f-49dc-b92d-b3054edc0320';
  $display->content['new-b36238db-c50f-49dc-b92d-b3054edc0320'] = $pane;
  $display->panels['top'][0] = 'new-b36238db-c50f-49dc-b92d-b3054edc0320';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-20a0fd7a-fec0-44f9-bd4e-9eb03ce22f58';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['site_search_help'] = $page;

  return $pages;

}
