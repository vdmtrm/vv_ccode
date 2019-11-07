#include "stdio.h"
#include "bcm2835.h"
#define PIN_IN RPI_V2_GPIO_P1_05

int main(){

if(!bcm2835_init()) return 1;

	for(;;){
	bcm2835_gpio_fsel(PIN_IN, BCM2835_GPIO_FSEL_INPT);

	bcm2835_gpio_set_pud(PIN_IN, 2);

	//printf("WaitForPress ");

		if (bcm2835_gpio_lev(PIN_IN)){
			printf("Pressed\n");
			return(bcm2835_close());
		}
	}
}
