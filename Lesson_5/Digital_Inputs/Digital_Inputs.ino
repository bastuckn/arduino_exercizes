//www.elegoo.com
//2016.12.08

int ledPin = 5;
int buttonApin = 8;
int buttonBpin = 9;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
  // INPUT_PULLUP means input and high by default
}

void loop() 
{
  // test LED:
  // digitalWrite(ledPin, HIGH);

  // when button is pressed, it connects to ground, so reading becomes LOW
  if (digitalRead(buttonApin) == LOW) 
  {
    digitalWrite(ledPin, HIGH);
    //delay(5000);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
