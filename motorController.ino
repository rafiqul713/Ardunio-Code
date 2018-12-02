#include <AFMotor.h> //import your motor shield library

AF_DCMotor motor1(1,MOTOR12_64KHZ); // set up motors.
AF_DCMotor motor2(2, MOTOR12_8KHZ);
 
void setup() 
{
  Serial.begin(9600); // begin serial communitication  
  Serial.println("Motor test!");
  motor1.setSpeed(255); //set the speed of the motors, between 0-255
  motor2.setSpeed (255);  
}
 
 
void loop() 
{

    motor1.setSpeed(255); 
    motor2.setSpeed (255);  
    motor1.run(FORWARD);  
    motor2.run(BACKWARD);
   
 }
  


 
