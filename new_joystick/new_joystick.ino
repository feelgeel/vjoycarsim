#include "ibus.h"
#define UPDATE_INTERVAL 10 // milliseconds
byte analogPins[] = {A0};
#define ANALOG_INPUTS_COUNT sizeof(analogPins)
#define NUM_CHANNELS ( (ANALOG_INPUTS_COUNT)/16 )

#define BAUD_RATE 9600
IBus ibus(NUM_CHANNELS);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
   int i, bm_ch = 0;
   unsigned long time = millis();

   ibus.begin();
  // put your main code here, to run repeatedly:
 int steeringWheel = analogRead(A0);
// byte analogPins[] = {A0};
//  for(i=0; i < ANALOG_INPUTS_COUNT; i++)
//       {
//       ibus.write(analogRead(analogPins[i])); // map 0-1023 to 1000-2000
//       // Print(analogRead(analogPins[i])*1000/1023));
//       Serial.println(analogRead(analogPins[i]));
//       Serial.println("heloo");
//       Serial.println(analogRead(analogPins[0]));
//       // Serial.println(i);
//       }
// ibus.write(analogRead(analogPins[0]));
//       ibus.end();
  Serial.println(steeringWheel*1000/1023);
      // Serial.println(analogRead(analogPins[0]));

}


