<?php
// $Id$

class Ogdi {
  
  public $datasource;
  public $dataset_id;
  
  private $errors = array( 
    '0'    =>   'Network Error?',
    '301'  =>   'Moved Permanently',
    '400'  =>   'Bad Request',
    '403'  =>   'Not Authorized',
    '404'  =>   'Not Found',
    '409'  =>   'Conflict (e.g. name already exists)',
    '500'  =>   'Internal Server Error', 
  );
  
  public function __construct($datasource=null, $dataset_id=null){
    if ($datasource){
      $this->datasource = $datasource;
    }
    
    if ($dataset_id) {
      $this->dataset_id = $dataset_id;
    }
  }
  
  private function transfer($querystring){
    $url = $this->datasource . $querystring;
    $response = drupal_http_request($url, $headers = array(), $method = 'GET', $data = NULL, $retry = 3);
    if ($response->code == 200) {
      return $response->data;
    }
    else {
      throw new OgdiException($info['http_code'] . ' : ' . $this->errors[$info[http_code]]);
    }
  }

  public function getTableMetadata($parameters){
    foreach($parameters as $key => $value) {
      $string[] = $key .'='. urlencode($value);
    }
    $querystring = implode('&', $string);
    $results = $this->transfer('/TableMetadata?'. $querystring);
    if (!$results->count){
      throw new OgdiException("Table Metadata Error");
    }
    return $results;
  }
  
  public function getEntityMetadata($parameters){
    foreach($parameters as $key => $value) {
      $string[] = $key .'='. urlencode($value);
    }
    $querystring = implode('&', $string);
    $results = $this->transfer('/EntityMetadata?'. $querystring);
    if (!$results){
      throw new OgdiException("Entity Metadata Error");
    }
    return $results;
  }

  public function getDataset($dataset_id, $parameters){
    foreach($parameters as $key => $value) {
      $string[] = $key .'='. urlencode($value);
    }
    $querystring = implode('&', $string);
    $results = $this->transfer('/'. $dataset_id . '?' .$querystring);
    if (!$results){
      throw new OgdiException("Dataset Load Error");
    }
    return $results;
  }

  public function getDatasetList(){
    $list =  $this->transfer(NULL);
    if (!is_array($list)){
      throw new OgdiException("Dataset List Error");
    }
    return $list;
  }

}

class OgdiException extends Exception{}