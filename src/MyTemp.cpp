/*
 * MyTemp.cpp
 *
 *  Created on: 05.02.2022
 *      Author: Dave
 */



#include "MyTemp.h"

void MyTemp::init(uint8_t dhtpin, uint8_t dhttype){
dht = new DHT(dhtpin, dhttype);
dht->begin();
}
 
float MyTemp::readTemperature(){
    float t = dht->readTemperature();
  return(t);
  
};