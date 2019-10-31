#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <wiringPi.h>
#include <softTone.h>

#define PIN 3

int scale [8] = {262, 294, 330, 349, 392, 440, 494, 525} ;

int main() {
if(-1 == wiringPiSetup())
{
	return 1;
}


softToneCreate(PIN);


  for (;;)


  {

      printf ("%3d\n", 1);
      softToneWrite (PIN, scale [1]);
	delay(100);

	      printf ("%3d\n", 0);
      softToneWrite (PIN, scale [0]);
      delay (10000);

      printf ("%3d\n", 7);
      softToneWrite (PIN, scale [7]);
	delay(100);

      printf ("%3d\n", 0);
      softToneWrite (PIN, scale [0]);
      delay (1000);

      printf ("%3d\n", 7);
      softToneWrite (PIN, scale [7]);
	delay(100);

      printf ("%3d\n", 0);
      softToneWrite (PIN, scale [0]);
      delay (10000);

  }
return 0;
}
