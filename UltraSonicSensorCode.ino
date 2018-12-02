
/*
Rafiqul Islam

*/
#include <SoftwareSerial.h>

const int triggerPin=2;
const int echoPin=5;

void setup(){
Serial.begin(9600); // Connect the Ardunio with PC through Serial Communication
}
void loop(){
  
  float microseconds, inches,centimeter;
  // here, the sensor is Triggered by High pulse of 10 microseconds
  pinMode(triggerPin,OUTPUT);
  digitalWrite(triggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin,LOW);
  
  // here, Now read the Signal from the Sensor
 
 pinMode(echoPin,INPUT);
 microseconds= pulseIn(echoPin,HIGH);
/*
here, I declare  pulsein() method which takes 2 variable. pin and values
pin mean pin number in Ardunio
values mean pulse to read. this pulse may be HIGH or may be LOW.
Here I set value HIGH. It returns the High pulse in Microseconds. 
wait for Echo Pin to go High Pulse and Start Timing. 
And also wait for Echo Pin to go Low and Stop Timing.
The width of the Echo pulse is used to calculate distance.
*/

 //here, I convert Microseconds to Inches and Centimeter


inches= microToInch(microseconds);
centimeter= microToCm(microseconds);
Serial.print(inches);
Serial.print("  Inches OR ");
Serial.print(centimeter);
Serial.print("  Centimeter");
Serial.println();
delay(500); // delay 500 milli seconds   
}



float microToInch(float microSeconds){
return (microSeconds/74)/2;
// here, 74 because Sound need 73.746 microseconds to travel 1 inch
// and it divide by 2 becuase from the source to Obtacle and Obstacle to Source
// 2 times travel so divide by 2
}
float microToCm(float microSeconds){
return (microSeconds/29)/2;
// Sound need 29 Microseconds to travel 1 centimeter
}

