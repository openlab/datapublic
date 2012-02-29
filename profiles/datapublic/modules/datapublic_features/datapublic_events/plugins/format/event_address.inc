<?php

/**
 * @file
 * The default format for adresses.
 */


$plugin = array(
  'title' => t('Address form (Event Specific)'),
  'format callback' => 'event_address_format_address_generate',
  'type' => 'address',
  'weight' => -100,
);


/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function event_address_format_address_generate(&$format, $address, $context = array()) {
  $format['#attached']['css'][] = drupal_get_path('module', 'datapublic_events') . '/plugins/format/event_address.css';

  $need_comma = FALSE;

  if (isset($address['organisation_name']) && $address['organisation_name'] != '') {
    $format['organisation_name'] = array(
      '#title' => t('Company'),
      '#weight' => 1,
    );
    $need_comma = TRUE;
  }
  if (isset($address['thoroughfare']) && $address['thoroughfare'] != '') {
    $format['thoroughfare'] = array(
      '#title' => t('Address 1'),
      '#weight' => 2,
    );
    
    if ($need_comma) {
      $format['thoroughfare']['#prefix'] = ', ';
    }
    $need_comma = TRUE;
  }
  
  if (isset($address['premise']) && $address['premise'] != '') {
    $format['premise'] = array(
      '#title' => t('Address 2'),
      '#weight' => 3,
    );
    
    if ($need_comma) {
      $format['premise']['#prefix'] = ', ';
    }
    $need_comma = TRUE;
  }
  
  if (isset($address['locality']) && $address['locality'] != '') {
    $format['locality'] = array(
      '#title' => t('City'),
      '#weight' => 4,
    );
    
    if ($need_comma) {
      $format['locality']['#prefix'] = ', ';
    }
    $need_comma = TRUE;
  }
  /*
  if (isset($address['postal_code']) && $address['postal_code'] != '') {
    $format['postal_code'] = array(
      '#title' => t('Postal Code'),
      '#prefix' => ', ',
      '#weight' => 5,
    );
  }
  */

  /*
  // Those countries do not seem to have a relevant postal code.
  if (in_array($address['country'], array('AF', 'AG', 'AL', 'AO', 'BB', 'BI', 'BJ', 'BO', 'BS', 'BW', 'BZ', 'CF', 'CG', 'CM', 'CO', 'DJ', 'DM', 'EG', 'ER', 'FJ', 'GD', 'GH', 'GM', 'GQ', 'GY', 'KI', 'KM', 'KP', 'KY', 'LC', 'LY', 'ML', 'MR', 'NA', 'NR', 'RW', 'SB', 'SC', 'SL', 'SR', 'ST', 'TD', 'TG', 'TL', 'TO', 'TT', 'TV', 'TZ', 'UG', 'VC', 'VU', 'WS', 'ZW'))) {
    unset($format['postal_code']);
  }
  */

  // Those countries generally use their administrative division in postal addresses.
  if (in_array($address['country'], array('AR', 'AU', 'BR', 'BS', 'BY', 'BZ', 'CA', 'CN', 'DO', 'EG', 'ES', 'FJ', 'FM', 'GB', 'HN', 'ID', 'IE', 'IN', 'IT', 'JO', 'JP', 'KI', 'KN', 'KR', 'KW', 'KY', 'KZ', 'MX', 'MY', 'MZ', 'NG', 'NI', 'NR', 'NZ', 'OM', 'PA', 'PF', 'PG', 'PH', 'PR', 'PW', 'RU', 'SM', 'SO', 'SR', 'SV', 'TH', 'TW', 'UA', 'US', 'UY', 'VE', 'VI', 'VN', 'YU', 'ZA'))) {
    $format['administrative_area'] = array(
      '#title' => t('State'),
    );
  }

  // A few contries have a well-known list of administrative divisions.
  if ($address['country'] == 'US') {
    $format['administrative_area']['#options'] = array(
      ''   => t('--'),
      'AL' => t('Alabama'),
      'AK' => t('Alaska'),
      'AZ' => t('Arizona'),
      'AR' => t('Arkansas'),
      'CA' => t('California'),
      'CO' => t('Colorado'),
      'CT' => t('Connecticut'),
      'DE' => t('Delaware'),
      'DC' => t('District Of Columbia'),
      'FL' => t('Florida'),
      'GA' => t('Georgia'),
      'HI' => t('Hawaii'),
      'ID' => t('Idaho'),
      'IL' => t('Illinois'),
      'IN' => t('Indiana'),
      'IA' => t('Iowa'),
      'KS' => t('Kansas'),
      'KY' => t('Kentucky'),
      'LA' => t('Louisiana'),
      'ME' => t('Maine'),
      'MD' => t('Maryland'),
      'MA' => t('Massachusetts'),
      'MI' => t('Michigan'),
      'MN' => t('Minnesota'),
      'MS' => t('Mississippi'),
      'MO' => t('Missouri'),
      'MT' => t('Montana'),
      'NE' => t('Nebraska'),
      'NV' => t('Nevada'),
      'NH' => t('New Hampshire'),
      'NJ' => t('New Jersey'),
      'NM' => t('New Mexico'),
      'NY' => t('New York'),
      'NC' => t('North Carolina'),
      'ND' => t('North Dakota'),
      'OH' => t('Ohio'),
      'OK' => t('Oklahoma'),
      'OR' => t('Oregon'),
      'PA' => t('Pennsylvania'),
      'RI' => t('Rhode Island'),
      'SC' => t('South Carolina'),
      'SD' => t('South Dakota'),
      'TN' => t('Tennessee'),
      'TX' => t('Texas'),
      'UT' => t('Utah'),
      'VT' => t('Vermont'),
      'VA' => t('Virginia'),
      'WA' => t('Washington'),
      'WV' => t('West Virginia'),
      'WI' => t('Wisconsin'),
      'WY' => t('Wyoming'),
      ' ' => t('--'),
      'AS' => t('American Samoa'),
      'FM' => t('Federated States of Micronesia'),
      'GU' => t('Guam'),
      'MH' => t('Marshall Islands'),
      'MP' => t('Northern Mariana Islands'),
      'PW' => t('Palau'),
      'PR' => t('Puerto Rico'),
      'VI' => t('Virgin Islands'),
    );
    //$format['postal_code']['#title'] = t('ZIP Code');
  }
  elseif ($address['country'] == 'IT') {
    $format['administrative_area']['#options'] = array(
      ''   => t('--'),
      'AG' => 'Agrigento',
      'AL' => 'Alessandria',
      'AN' => 'Ancona',
      'AO' => 'Valle d\'Aosta/Vallée d\'Aoste',
      'AP' => 'Ascoli Piceno',
      'AQ' => 'L\'Aquila',
      'AR' => 'Arezzo',
      'AT' => 'Asti',
      'AV' => 'Avellino',
      'BA' => 'Bari',
      'BG' => 'Bergamo',
      'BI' => 'Biella',
      'BL' => 'Belluno',
      'BN' => 'Benevento',
      'BO' => 'Bologna',
      'BR' => 'Brindisi',
      'BS' => 'Brescia',
      'BT' => 'Barletta-Andria-Trani',
      'BZ' => 'Bolzano/Bozen',
      'CA' => 'Cagliari',
      'CB' => 'Campobasso',
      'CE' => 'Caserta',
      'CH' => 'Chieti',
      'CI' => 'Carbonia-Iglesias',
      'CL' => 'Caltanissetta',
      'CN' => 'Cuneo',
      'CO' => 'Como',
      'CR' => 'Cremona',
      'CS' => 'Cosenza',
      'CT' => 'Catania',
      'CZ' => 'Catanzaro',
      'EN' => 'Enna',
      'FC' => 'Forlì-Cesena',
      'FE' => 'Ferrara',
      'FG' => 'Foggia',
      'FI' => 'Firenze',
      'FM' => 'Fermo',
      'FR' => 'Frosinone',
      'GE' => 'Genova',
      'GO' => 'Gorizia',
      'GR' => 'Grosseto',
      'IM' => 'Imperia',
      'IS' => 'Isernia',
      'KR' => 'Crotone',
      'LC' => 'Lecco',
      'LE' => 'Lecce',
      'LI' => 'Livorno',
      'LO' => 'Lodi',
      'LT' => 'Latina',
      'LU' => 'Lucca',
      'MB' => 'Monza e Brianza',
      'MC' => 'Macerata',
      'ME' => 'Messina',
      'MI' => 'Milano',
      'MN' => 'Mantova',
      'MO' => 'Modena',
      'MS' => 'Massa-Carrara',
      'MT' => 'Matera',
      'NA' => 'Napoli',
      'NO' => 'Novara',
      'NU' => 'Nuoro',
      'OG' => 'Ogliastra',
      'OR' => 'Oristano',
      'OT' => 'Olbia-Tempio',
      'PA' => 'Palermo',
      'PC' => 'Piacenza',
      'PD' => 'Padova',
      'PE' => 'Pescara',
      'PG' => 'Perugia',
      'PI' => 'Pisa',
      'PN' => 'Pordenone',
      'PO' => 'Prato',
      'PR' => 'Parma',
      'PT' => 'Pistoia',
      'PU' => 'Pesaro e Urbino',
      'PV' => 'Pavia',
      'PZ' => 'Potenza',
      'RA' => 'Ravenna',
      'RC' => 'Reggio di Calabria',
      'RE' => 'Reggio nell\'Emilia',
      'RG' => 'Ragusa',
      'RI' => 'Rieti',
      'RM' => 'Roma',
      'RN' => 'Rimini',
      'RO' => 'Rovigo',
      'SA' => 'Salerno',
      'SI' => 'Siena',
      'SO' => 'Sondrio',
      'SP' => 'La Spezia',
      'SR' => 'Siracusa',
      'SS' => 'Sassari',
      'SV' => 'Savona',
      'TA' => 'Taranto',
      'TE' => 'Teramo',
      'TN' => 'Trento',
      'TO' => 'Torino',
      'TP' => 'Trapani',
      'TR' => 'Terni',
      'TS' => 'Trieste',
      'TV' => 'Treviso',
      'UD' => 'Udine',
      'VA' => 'Varese',
      'VB' => 'Verbano-Cusio-Ossola',
      'VC' => 'Vercelli',
      'VE' => 'Venezia',
      'VI' => 'Vicenza',
      'VR' => 'Verona',
      'VS' => 'Medio Campidano',
      'VT' => 'Viterbo',
      'VV' => 'Vibo Valentia',
    );
    $format['administrative_area']['#title'] = t('Province');
  }
  elseif ($address['country'] == 'BR') {
    $format['administrative_area']['#options'] = array(
      ''   => t('--'),
      'AC' => t('Acre'),
      'AL' => t('Alagoas'),
      'AM' => t('Amazonas'),
      'AP' => t('Amapa'),
      'BA' => t('Bahia'),
      'CE' => t('Ceara'),
      'DF' => t('Distrito Federal'),
      'ES' => t('Espirito Santo'),
      'GO' => t('Goias'),
      'MA' => t('Maranhao'),
      'MG' => t('Minas Gerais'),
      'MS' => t('Mato Grosso do Sul'),
      'MT' => t('Mato Grosso'),
      'PA' => t('Para'),
      'PB' => t('Paraiba'),
      'PE' => t('Pernambuco'),
      'PI' => t('Piaui'),
      'PR' => t('Parana'),
      'RJ' => t('Rio de Janeiro'),
      'RN' => t('Rio Grande do Norte'),
      'RO' => t('Rondonia'),
      'RR' => t('Roraima'),
      'RS' => t('Rio Grande do Sul'),
      'SC' => t('Santa Catarina'),
      'SE' => t('Sergipe'),
      'SP' => t('Sao Paulo'),
      'TO' => t('Tocantins'),
    );
  }
  elseif ($address['country'] == 'CA') {
    $format['administrative_area']['#options'] = array(
      ''   => t('--'),
      'AB' => t('Alberta'),
      'BC' => t('British Columbia'),
      'MB' => t('Manitoba'),
      'NB' => t('New Brunswick'),
      'NL' => t('Newfoundland'),
      'NT' => t('Northwest Territories'),
      'NS' => t('Nova Scotia'),
      'NU' => t('Nunavut'),
      'ON' => t('Ontario'),
      'PE' => t('Prince Edward Island'),
      'QC' => t('Quebec'),
      'SK' => t('Saskatchewan'),
      'YT' => t('Yukon Territory'),
    );
    $format['administrative_area']['#title'] = t('Province');
  }

  $format['administrative_area'] = array(
    '#weight' => 5,
  );
  
  if ($need_comma) {
    $format['administrative_area']['#prefix'] = ', ';
  }
  $need_comma = TRUE;

  /*
  // Those countries tend to put the postal code after the locality.
  if (in_array($address['country'], array('AU', 'BD', 'BF', 'BH', 'BM', 'BN', 'BT', 'CA', 'FM', 'GB', 'ID', 'IE', 'IN', 'JM', 'JO', 'KH', 'LB', 'LS', 'LV', 'MM', 'MN', 'MV', 'MW', 'NG', 'NP', 'NZ', 'PE', 'PK', 'PR', 'PW', 'SA', 'SG', 'SO', 'TH', 'US', 'VI', 'VG', 'VN'))) {
    // Take the widget out of the array.
    $postal_code_widget = $format['postal_code'];
    unset($format['postal_code']);

    // Add it back.
    $format['postal_code'] = $postal_code_widget;
  }
  */
}