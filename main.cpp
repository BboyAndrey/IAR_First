#include "stm32f4xx.h"
#include "stm32f401_discovery.h"

int main()
{
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
  GPIOD->MODER = 0x55000000;
  GPIOD->OTYPER = 0;
  GPIOD->OSPEEDR = 0;
  GPIOD->PUPDR = 0;
  
  
    while(1) {
      GPIOD->ODR = 0xF000;
      for(int i = 0; i < 2000000; i++) {}
      GPIOD->ODR = 0x0000;
      for(int i = 0; i < 2000000; i++) {}
    }  
    
  return 0;
}
