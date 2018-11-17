/*
  Melody

 Plays happy birthday kushi Bhutni :p

 circuit:
 * 8-ohm speaker on digital pin 8
 by Harshit Verma
 */
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4,
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4,NOTE_G4,NOTE_F4,
  NOTE_C4, NOTE_C4,NOTE_C5,NOTE_A4,NOTE_F4, NOTE_E4,NOTE_D4,
  NOTE_AS4,NOTE_AS4,NOTE_A4,NOTE_F4,NOTE_G4,NOTE_F4,
   NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4,
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4,NOTE_G4,NOTE_F4,
  NOTE_C4, NOTE_C4,NOTE_C5,NOTE_A4,NOTE_F4, NOTE_E4,NOTE_D4,
  NOTE_AS4,NOTE_AS4,NOTE_A4,NOTE_F4,NOTE_G4,NOTE_F4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4,2,2,2,2,
   4, 4,2,2,2,2,
    4, 4,2,2,2,2,2,
     4, 4,2,2,2,2,
     4, 4,2,2,2,2,
   4, 4,2,2,2,2,
    4, 4,2,2,2,2,2,
     4, 4,2,2,2,2
};

void setup() {
 /* // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 52; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration +50;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(9);*/
  
}


void loop() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 52; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration +50;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(9);
  }
}
