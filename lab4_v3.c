#include "stdio.h"
#include <wiringPi.h>

#define PIN 1
int val = 1;
int wait = 0;
int count = 0;

int main(void){

	if (wiringPiSetup() == -1) return 1;

	pinMode(PIN, INPUT);
	for(;;){
	while(count != 1){
			val = digitalRead(PIN);
			if(val != 0){
				printf("Button is pressed");
				count++;
				}
		}
	}
}

