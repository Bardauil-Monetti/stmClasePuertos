#include <Arduino.h>

#define LED_PIN 7

void setup() {
  RCC -> APB2ENR |=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN ;
  RCC -> APB2ENR = (1u<<2)
  RCC -> APB2ENR = (1u<<3)

  GPIOA ->CRL= 0X11111111;// DECLARAR PINES
  GPIOB ->CRL= 0X44444444;
  GPIOB ->CRL |=GPIO_CRL_CNF0_0 | ~GPIO_CRL_MODE0;// DECLARAR REGISTROS CON MASCARAS
  GPIOB ->CRL |=GPIO_CRL_CNF1_0 | ~GPIO_CRL_MODE1;// DECLARAR REGISTROS CON MASCARAS
  GPIOB ->CRL |=GPIO_CRL_CNF2_0 | ~GPIO_CRL_MODE2;// DECLARAR REGISTROS CON MASCARAS
  GPIOB ->CRL |=GPIO_CRL_CNF3_0 | ~GPIO_CRL_MODE3;// DECLARAR REGISTROS CON MASCARAS
}

void loop() {
  uint16_t est = GPIOB ->IDR(~(1<<0));
  if(est){
    GPIOA ->BSSR |=GPIO_BSRR_BS0|GPIO_BSRR_BR4|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
                   GPIO_BSRR_BS1|GPIO_BSRR_BR5|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
                   GPIO_BSRR_BS2|GPIO_BSRR_BR6|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
                   GPIO_BSRR_BS3|GPIO_BSRR_BR7|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
    
  }else{
    GPIOA ->BSSR  |=GPIO_BSRR_BR0|GPIO_BSRR_BS4|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
                    GPIO_BSRR_BR1|GPIO_BSRR_BS5|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
                    GPIO_BSRR_BR2|GPIO_BSRR_BS6|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
                    GPIO_BSRR_BR3|GPIO_BSRR_BS7|//REGISTROS PARA PRENDESOAPAGAR SALIDAS
    
  }
  
}