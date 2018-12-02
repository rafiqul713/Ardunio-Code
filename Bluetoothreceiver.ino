#include <SoftwareSerial.h>

#define rxPin 2
#define txPin 3

SoftwareSerial XSERIAL =  SoftwareSerial(rxPin, txPin, false);

void setup()  
{
   XSERIAL.begin(9600);

   Serial.begin(9600);

   Serial.println("Start Listening...");
}

void loop() 
{
  if (XSERIAL.available())
  {
      Serial.print((char)XSERIAL.read());
  }
}
