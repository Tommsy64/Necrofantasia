#include "pitches.h"
#include <LiquidCrystal.h>

// dtostrf(floatVar, minStringWidthIncDecimalPoint, numVarsAfterDecimal, charBuf);

// Connections:
// rs (LCD pin 4) to Arduino pin 12
// rw (LCD pin 5) to Arduino pin 11
// enable (LCD pin 6) to Arduino pin 10
// LCD pin 15 to Arduino pin 13
// LCD pins d4, d5, d6, d7 to Arduino pins 5, 4, 3, 2
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

int backLight = 13;    // pin 13 will control the backlight
int tonePort = 9;

int melody[] = {NOTE_DS4, NOTE_FS4, NOTE_AS4, NOTE_F4, NOTE_GS4, NOTE_CS5, NOTE_AS4, NOTE_GS4, NOTE_FS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_CS4, NOTE_GS3, NOTE_DS4, NOTE_FS4, NOTE_D4, NOTE_F4, NOTE_AS4, NOTE_FS4, NOTE_DS4, NOTE_AS3, NOTE_FS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_DS4, NOTE_F4, NOTE_FS4, NOTE_GS4, NOTE_AS4, NOTE_GS4, NOTE_CS5, NOTE_DS5, NOTE_AS4, NOTE_CS5, NOTE_GS4, NOTE_AS4, NOTE_FS4, NOTE_AS3, NOTE_F4, NOTE_CS4, NOTE_AS3, NOTE_DS4, NOTE_FS4, NOTE_F4, NOTE_D4, NOTE_GS3, NOTE_AS3, NOTE_AS3, NOTE_CS4, NOTE_F5, NOTE_DS5, NOTE_FS5, NOTE_AS5, NOTE_F5, NOTE_GS5, NOTE_CS6, NOTE_AS5, NOTE_GS5, NOTE_FS5, NOTE_F5, NOTE_FS5, NOTE_F5, NOTE_CS5, NOTE_GS4, NOTE_DS5, NOTE_FS5, NOTE_D5, NOTE_F5, NOTE_AS5, NOTE_FS5, NOTE_DS5, NOTE_AS4, NOTE_FS5, NOTE_F5, NOTE_FS5, NOTE_F5, NOTE_FS5, NOTE_F5, NOTE_FS5, NOTE_F5, NOTE_DS5, NOTE_F5, NOTE_FS5, NOTE_GS5, NOTE_AS5, NOTE_GS5, NOTE_CS6, NOTE_DS6, NOTE_AS5, NOTE_CS6, NOTE_GS5, NOTE_AS5, NOTE_FS5, NOTE_AS4, NOTE_F5, NOTE_CS5, NOTE_AS4, NOTE_DS5, NOTE_FS5, NOTE_F5, NOTE_D5, NOTE_GS4, NOTE_AS4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_AS4, NOTE_C5, NOTE_B4, NOTE_DS5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_G4, NOTE_AS4, NOTE_F4, NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_AS3, NOTE_C4, NOTE_G3, NOTE_AS3, NOTE_F3, NOTE_D3, NOTE_C3, NOTE_B2, NOTE_DS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_GS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_DS4, NOTE_DS4, NOTE_FS4, NOTE_FS4, NOTE_GS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_CS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_DS4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_GS4, NOTE_GS4, NOTE_GS4, NOTE_R0, NOTE_FS4, NOTE_D5, NOTE_CS5, NOTE_E4, NOTE_FS4, NOTE_R0, NOTE_FS4, NOTE_E5, NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_FS4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_FS4, NOTE_A4, NOTE_FS4, NOTE_E4, NOTE_FS4, NOTE_A4, NOTE_FS4, NOTE_R0, NOTE_FS4, NOTE_FS4, NOTE_D5, NOTE_CS5, NOTE_E4, NOTE_FS4, NOTE_FS4, NOTE_E5, NOTE_D5, NOTE_CS5, NOTE_D5, NOTE_CS5, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_FS4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_FS4, NOTE_A4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4};
float noteDurations[] = {8.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 8.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 8.0, 8.0, 8.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 4.0, 8.0, 8.0, 1.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 8.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 32.0, 8.0, 8.0, 8.0, 8.0, 8.0, 5.0, 8.0, 8.0, 5.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0, 4.0, 8.0, 8.0, 1.0, 4.0, 4.0, 7.0, 5.0, 4.0, 7.0, 4.0, 3.0, 7.0, 7.0, 6.0, 3.0, 4.0, 7.0, 6.0, 6.0, 6.0, 6.0, 3.0, 3.0, 6.0, 3.0, 5.0, 6.0, 6.0, 6.0, 6.0, 6.0, 4.0, 2.0, 1.0, 4.0, 8.0, 4.0, 8.0, 4.0, 4.0, 8.0, 4.0, 8.0, 4.0, 3.5, 3.5, 1.0, 4.0, 8.0, 4.0, 8.0, 4.0, 4.0, 8.0, 4.0, 8.0, 4.0, 4.0, 8.0, 4.0, 8.0, 4.0, 3.0, 3.0, 5.0, 4.0, 8.0, 4.0, 8.0, 4.0, 4.0, 8.0, 4.0, 8.0, 5.0, 4.0, 4.0, 1.0, 4.0, 8.0, 4.0, 8.0, 4.0, 4.0, 8.0, 4.0, 8.0, 4.0, 4.0, 8.0, 4.0, 8.0, 4.0, 3.0, 3.0, 5.0, 1.5, 6.0, 6.0, 6.0, 10.0, 2.0, 3.0, 6.0, 6.0, 6.0, 10.0, 4.0, 6.0, 6.0, 12.0, 6.0, 6.0, 6.0, 12.0, 4.0, 6.0, 6.0, 12.0, 6.0, 6.0, 6.0, 12.0, 4.5, 5.0, 12.0, 5.0, 6.0, 6.0, 12.0, 2.0, 6.0, 6.0, 6.0, 12.0, 4.0, 6.0, 6.0, 12.0, 6.0, 6.0, 6.0, 12.0, 4.5, 6.0, 6.0, 12.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 48.0, 0.8};

int totalNotes = 276;

void setup() {  
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH);
  lcd.begin(16, 2);
}

void loop() {
  char noteDurationBuffer [16];
  for (int thisNote = 0 ; thisNote < totalNotes; thisNote++) {
    float noteDuration = 1000.0/noteDurations[thisNote];
    displayInfo(melody[thisNote], thisNote, noteDuration);
    tone(tonePort, melody[thisNote], noteDuration);
    delay(noteDuration * 1.40);
    noTone(tonePort);
  }
  delay(-1);
}

void displayInfo(int pitch, int note, float duration) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Pitch: ");
    lcd.print(pitch);
    lcd.print("  ");
    lcd.print(note);
    lcd.setCursor(0,1);
    lcd.print("Duration: ");
    lcd.setCursor(10,1);
    lcd.print(duration);     
}
