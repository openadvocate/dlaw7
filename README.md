# DLAW
DLAW is a Drupal distribution for building public information websites. DLAW is developed and maintained by Urban Insight, Inc. (http://urbaninsight.com). Development of the DLAW has been supported by Legal Service Corporation (LSC) Technology Initiative Grants. For more information see http://openadvocate.org

## Installation guide:
- Download or git clone DLAW distribution.
- Install with DLAW installation profile.
- Start configuring the site at /admin/dashboard
- All the DLAW configurations are under /admin/dashboard/. Only user 1 needs to administer the site with Drupal configurations beyond DLAW settings.

## Configurations and Settings
- At /admin/structure/pages, enable "Node template" and "Taxonomy term template"
- At /admin/config/system/site-information, set default front page to /home
- At /admin/config/system/quarkfield, set "Content type to generate QR code for" as "page" and set "Image Field to save generated QR code" as "page -- field_qr_url"

## Recommended blocks for dashboard

### Dashboard (main)
- Manage content
- View: Dashboard: Recently edited
- View: Dashboard: Unpublished

### Dashboard (sidebar)
- DLAW Notification
- Google Analytics
- Site Summary

## Recommended blocks for Home Page Builder
- Slides banner: start adding pages to the slide and slideshow will appear
- Mission: Add a mission statement and it will appear
- Upcmoning Events
- Latest News
- Twitter Feed
- You can also create custom blocks
