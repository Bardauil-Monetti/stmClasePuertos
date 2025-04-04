#include <Arduino.h>

#define LED_PIN 7

void setup() {
  RCC -> APB2ENR|=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPAEN;

  GPIOA ->CRL= 0X44444444;
  GPIOB ->CRH= 0X44444444;
  
  GPIOA ->CRL= 0X11111111;
  GPIOB ->CRH= 0X11111111;
}

void loop() {
  uint16_t est = GPIOA -> IDR;
  GPIOA -> BSRR = est;

}