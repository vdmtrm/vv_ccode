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

    for (int i = 0 ; i < 8 ; ++i)

    {

      printf ("%3d\n", i);

      softToneWrite (PIN, scale [i]);

      delay (500);

    }

  }
return 0;
}
