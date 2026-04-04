//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  tone(8, NOTE_C6, 500);
  delay(500);
  tone(8, NOTE_G5, 250);
  delay(250);
  tone(8, NOTE_G5, 250);
  delay(250);
  tone(8, NOTE_A5, 500);
  delay(500);
  tone(8, NOTE_G5, 500);
  delay(500);
  delay(500);
  tone(8, NOTE_B5, 500);
  delay(500);
  tone(8, NOTE_C6, 500);
  delay(500);
  delay(1000);

  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 second
    tone(8, melody[thisNote], duration);
     
    // Output the voice after several minutes
    delay(1000);
  }
   
  // restart after two seconds 
  delay(2000);
}
