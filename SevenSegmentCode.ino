#include <SoftwareSerial.h>
void setup()
{
  
  pinMode(0,HIGH);
  pinMode(1,HIGH);
  pinMode(2,HIGH);
  pinMode(3,HIGH);
  pinMode(4,HIGH);
  pinMode(5,HIGH);
  pinMode(6,HIGH);
  pinMode(7,HIGH);
  pinMode(8,LOW);
}
 
void loop()
{
  		delay(1000);
		PORTD=0b11000000; // 0
		delay(1000);
		PORTD=0b11111001; // 1
		delay(1000);
		PORTD=0b10100100; // 2
		delay(1000);
		PORTD=0b10110000; // 3	
		delay(1000);
		PORTD=0b10011001; // 4
		delay(1000);
		PORTD=0b10010010; // 5
		delay(1000);
		PORTD=0b10000010; // 6
		delay(1000);
		PORTD=0b11111000; // 7
		delay(1000);
		PORTD=0b10000000; // 8
		delay(1000);
		////PORTD=0b10011000; // 9
		PORTD=0b10010000; // 9

}
