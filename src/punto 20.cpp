#include <Arduino.h>
#define LED_PIN 7
int pinesB[4] {0, 1, 2, 3};
int est[4];
void setup() {
  RCC -> APB2ENR |=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN ;
  RCC -> APB2ENR = (1u<<2)
  RCC -> APB2ENR = (1u<<3)

  GPIOA ->CRL= 0X33333333;// DECLARAR PINES
  GPIOB ->CRL= 0X44444444;
  GPIOB ->CRL |=GPIO_CRL_CNF0_0 | ~GPIO_CRL_MODE0;// DECLARAR REGISTROS
  GPIOB ->CRL |=GPIO_CRL_CNF1_0 | ~GPIO_CRL_MODE1;// DECLARAR REGISTROS
  GPIOB ->CRL |=GPIO_CRL_CNF2_0 | ~GPIO_CRL_MODE2;// DECLARAR REGISTROS
  GPIOB ->CRL |=GPIO_CRL_CNF3_0 | ~GPIO_CRL_MODE3;// DECLARAR REGISTROS

}

void loop() {
  for(int i=0; i<4; i++){
  est[i] = GPIOB ->IDR(pinesB[i]<<0);
  }
    if(est[0]){
    GPIOA ->BSSR |=GPIO_BSRR_BS0|GPIO_BSRR_BS1|
  }elseif(est[1]){
    GPIOA ->BSSR |=GPIO_BSRR_BS2|GPIO_BSRR_BS3|             
  }elseif(est[2]){
    GPIOA ->BSSR |=GPIO_BSRR_BS4|GPIO_BSRR_BS5|
  }elseif(est[3]){
    GPIOA ->BSSR |=GPIO_BSRR_BS6|GPIO_BSRR_BS7|
  }
  }
  

  
