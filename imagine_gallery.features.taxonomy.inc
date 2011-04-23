<?php
/**
 * @file
 * imagine_gallery.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function imagine_gallery_taxonomy_default_vocabularies() {
  return array(
    'image_galleries' => array(
      'name' => 'Image Galleries',
      'machine_name' => 'image_galleries',
      'description' => 'A vocabulary specifically for sorting images.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
