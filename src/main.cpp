#include <Arduino.h>

#define LED_PIN 7

void setup() {
  RCC -> APB2ENR|=(1u<<2)|(1u<<3);
  
}

void loop() {
  
}