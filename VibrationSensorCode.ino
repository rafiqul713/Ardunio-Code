//RAFIQUL ISLAM 

int Led = 13 ;// define LED pin
int jack = 10; // define the vibration sensor pin
int value; 
void setup ()
{
  pinMode (Led, OUTPUT) ; // define LED as output interface
  pinMode (jack, INPUT) ; 
}
void loop ()
{
  value = digitalRead (jack) ;
  if (value == HIGH) //  detects a signal LED flashes
  {
    digitalWrite (Led, LOW);
  }
  else
  {
    digitalWrite (Led, HIGH);
  }
}
