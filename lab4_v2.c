#include <stdio.h>
#include <wiringPi.h>

#define PIN 0
int val;

int main(void){

printf("\ntestButt ");

if(wiringPiSetup() == -1) return 1;

pinMode(PIN, INPUT);
for(;;){
	val = digitalRead(PIN);
	if(val == 0) printf("buttIsPressed\n");

}
}
