# DLAW
DLAW is a Drupal distribution for building public information websites. DLAW is developed and maintained by Urban Insight, Inc. (http://urbaninsight.com). Development of the DLAW has been supported by Legal Service Corporation (LSC) Technology Initiative Grants. For more information see http://openadvocate.org

# DLAW9 Roadmap
We are undertaking an upgrade of DLAW to use Drupal 9 (currently on Drupal 7). Our current roadmap for this upgrade includes visual theme upgrades, greater control over homepage layout, adoption of new legal aid standards for schema.org, adoption of WCAG 2.1 accessibility standards, and adoption of the new NSMI taxonomy. We will begin with community input from the legal aid community in Q1 2021 and then with the upgrade to Drupal 9 by Q4 2021. Organizations hosting DLAW sites using OpenAdvocate will be migrated (with training) to Drupal 9 in Q1 2022.

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
