//www.elegoo.com
//2016.12.9 

int tDelay = 100;
int latchPin = 11;    // (11) ST_CP [RCK] on 74HC595 (storage)
int clockPin = 9;     // (9) SH_CP [SCK] on 74HC595 (shift)
int dataPin = 12;     // (12) DS [S1] on 74HC595 (data serial)

byte leds = 0;

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void setup() 
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  // turn off all LEDs:
  leds = 0;
  updateShiftRegister();
  // loop to increase LED, update, and wait:
  //delay(tDelay);
  for (int i = 0; i < 8; i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
    delay(tDelay);
  }
  // loop to turn off LEDs in order:
  for (int i = 0; i < 8; i++)
  {
    bitClear(leds, i);
    updateShiftRegister();
    delay(tDelay);
  }
}

