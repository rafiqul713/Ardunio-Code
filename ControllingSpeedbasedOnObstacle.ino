// Controlling speed according to Obstacle
#include <AFMotor.h> //import your motor shield library
#define trigPin 6 // define the pins of your sensor
#define echoPin 7 

AF_DCMotor motor1(1,MOTOR12_64KHZ); // set up motors.
AF_DCMotor motor2(2, MOTOR12_8KHZ);
 
void setup() 
{
  Serial.begin(9600); // begin serial communitication  
  Serial.println("Motor test!");
   pinMode(trigPin, OUTPUT);// set the trig pin to output (Send sound waves)
  pinMode(echoPin, INPUT);// set the echo pin to input (recieve sound waves)
  motor1.setSpeed(255); //set the speed of the motors, between 0-255
  motor2.setSpeed (255);  
}
 
 
void loop() 
{

  long duration, distance;
  int SPEED; 
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if(distance>=25)
  {
    motor1.setSpeed(255); 
    motor2.setSpeed (255);  
    motor1.run(FORWARD);  
    //motor2.run(BACKWARD);
    Serial.println(distance);
    delay(100);
  }
  
  if (distance <  25 && distance>=7)   
   {
     Serial.println(distance);
     delay(100);
     SPEED= ((255)/25)*distance;
     motor1.setSpeed(SPEED);
     //motor2.setSpeed(SPEED);
     motor1.run(FORWARD); 
     //motor2.run(BACKWARD);

   }
   if(distance<7){
     Serial.println(distance);
     motor1.setSpeed(255);
   motor1.run(BACKWARD);
   }
   
  }
  


 