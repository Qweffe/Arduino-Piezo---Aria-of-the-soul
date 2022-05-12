#include "pitches.h"

int velvet[] = {
  NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_D4,
        0,        0,        0,  NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_G3,  NOTE_A3,  NOTE_AS3, NOTE_G3,
  NOTE_A3,  NOTE_AS3, NOTE_D4,        0,        0,        0,  NOTE_AS3, NOTE_C4,  NOTE_D4,  NOTE_AS3, NOTE_C4,  NOTE_D4,  NOTE_AS3,
  NOTE_C4,  NOTE_CS4, NOTE_D4,  NOTE_E4,  NOTE_CS4, NOTE_D4,  NOTE_E4,  NOTE_CS4, NOTE_D4,  NOTE_D4,  NOTE_E4,  NOTE_F4,  NOTE_D4,
  NOTE_E4,  NOTE_F4,  NOTE_D4,  NOTE_E4,  NOTE_F4,  NOTE_D4,  NOTE_DS4, NOTE_F4,  NOTE_D4,  NOTE_DS4, NOTE_F4,  NOTE_D4,  NOTE_F4,
  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_F4,  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_F4,  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_F3,  NOTE_AS3,
  NOTE_A3,  NOTE_AS3, NOTE_A3,        0,        0,        0,        0,        0,        0,        0,  NOTE_A3,        0,        0,
        0,  NOTE_GS3,       0,  NOTE_A3,        0,  NOTE_G3,        0,        0,        0,        0,        0,        0,  NOTE_G3,  NOTE_A3,
  NOTE_AS3,       0,        0,        0,  NOTE_A3,        0,  NOTE_D4,        0,  NOTE_G3,        0,        0,        0,        0,
        0,        0,        0,        0,        0,        0,        0,  NOTE_D4,        0,        0,  NOTE_C4,  NOTE_AS3, NOTE_A3,        0,
        0,        0,  NOTE_F3,        0,  NOTE_DS3,       0,  NOTE_D3,        0,        0,        0,  NOTE_C4,        0,        0,
  NOTE_AS3, NOTE_A3,  NOTE_G3,        0,        0,        0,  NOTE_A3,        0,  NOTE_AS3,       0,  NOTE_DS3,       0,  NOTE_AS3,       0,
  NOTE_A3,        0,  NOTE_AS3,       0,  NOTE_AS3,       0,        0,        0,  NOTE_A3,        0,  NOTE_AS3,       0,  NOTE_G3,
        0,        0,        0,        0,        0,  NOTE_G3,  NOTE_A3,  NOTE_AS3,       0,        0,        0,  NOTE_A3,        0,
  NOTE_D4,        0,  NOTE_G3,        0,  NOTE_F4,        0,        0,        0,        0,  NOTE_G3,  NOTE_A3,  NOTE_AS3,       0,        0,
        0,  NOTE_A3,        0,  NOTE_D4,        0,  NOTE_G3,        0,  NOTE_DS4,       0,        0,        0,        0,  NOTE_G3,  NOTE_A3,
  NOTE_AS3,       0,        0,        0,  NOTE_A3,        0,  NOTE_D4,        0,  NOTE_G3,        0,        0,        0,  NOTE_A3,
        0,  NOTE_AS3,       0,  NOTE_DS3,       0,  NOTE_D4,        0,  NOTE_C4,        0,  NOTE_AS3,       0,  NOTE_A3,        0,
        0,        0,        0,        0,        0,        0,  NOTE_F4,        0,        0,        0,        0,        0,        0,
        0,  NOTE_E4,        0,        0,  NOTE_D4,  NOTE_CS4, NOTE_D4,  NOTE_E4,  NOTE_CS4, NOTE_D4,        0,        0,        0,
        0,        0,        0,        0,  NOTE_DS4,       0,        0,  NOTE_DS4, NOTE_D4,  NOTE_C4,  NOTE_AS3, NOTE_A3,  NOTE_F3,
        0,        0,        0,        0,        0,  NOTE_F3,  NOTE_D3,  NOTE_AS3,       0,        0,        0,        0,        0,
        0,  NOTE_C4,  NOTE_D4,  NOTE_DS4, NOTE_D4,  NOTE_C4,  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_C4,  NOTE_D4,  NOTE_A3,        0,        0,
        0,        0,        0,        0,        0,  NOTE_AS3,       0,        0,        0,        0,        0,  NOTE_AS3, NOTE_D3,
  NOTE_DS3,       0,        0,  NOTE_D4,  NOTE_C4,  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_A3,        0,        0,        0,        0,
        0,  NOTE_A3,  NOTE_C3,  NOTE_D3,        0,        0,  NOTE_C4,  NOTE_AS3, NOTE_A3,  NOTE_G3,  NOTE_A3,  NOTE_G3,        0,
        0,        0,        0,        0,  NOTE_A3,  NOTE_AS3, NOTE_AS3,       0,        0,        0,        0,  NOTE_G3,  NOTE_A3,
  NOTE_AS3, NOTE_AS3, NOTE_A3,  NOTE_A3,        0,        0,        0,        0,        0,  NOTE_G3,  NOTE_FS3, NOTE_FS3,       0,
        0,        0,        0,        0,  NOTE_AS3,       0,        0,        0,        0,        0,  NOTE_AS3, NOTE_D3,  NOTE_DS3,
        0,        0,  NOTE_D4,  NOTE_C4,  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_A3,        0,        0,        0,        0,        0,
  NOTE_A3,  NOTE_F4,  NOTE_DS4, NOTE_D4,  NOTE_C4,  NOTE_AS3, NOTE_A3,  NOTE_AS3, NOTE_C4,  NOTE_D4,  NOTE_G3,        0,        0,
        0,        0,        0,  NOTE_A3,  NOTE_AS3, NOTE_AS3,       0,        0,        0,        0,  NOTE_G3,  NOTE_A3,  NOTE_AS3,
  NOTE_AS3, NOTE_A3,  NOTE_A3,        0,        0,        0,        0,        0,  NOTE_G3,  NOTE_FS3, NOTE_FS3,       0,        0,
        0,        0,        0,  NOTE_D4,        0,        0,        0,        0,        0,  NOTE_D4,  NOTE_FS3, NOTE_G3,        0,
        0,  NOTE_FS4, NOTE_E4,  NOTE_D4,  NOTE_CS4, NOTE_D4,  NOTE_CS4,       0,        0,        0,        0,        0,  NOTE_CS4,
  NOTE_FS4, NOTE_G4,  NOTE_FS4, NOTE_E4,  NOTE_D4,  NOTE_CS4, NOTE_D4,  NOTE_E4,  NOTE_FS4, NOTE_B3,        0,        0,        0,
        0,        0,  NOTE_CS4, NOTE_D4,  NOTE_D4,        0,        0,        0,        0,  NOTE_B3,  NOTE_CS4, NOTE_D4,  NOTE_D4,
  NOTE_CS4, NOTE_CS4,       0,        0,        0,        0,        0,  NOTE_B3,  NOTE_AS3, NOTE_AS3,       0,        0,        0,
        0,        0,  NOTE_FS3,       0,        0,        0,        0,        0,        0,        0,        0,        0,        0,

};

void muzik(int melody[], int delka) {
	for (int thisNote = 0; thisNote < delka; thisNote++) {
		int noteDuration = 1000 / 5;
		tone(8, melody[thisNote], noteDuration);
		int pauseBetweenNotes = noteDuration * 1.20;
		delay(pauseBetweenNotes);
		noTone(8);
	}
}

void setup() {
	muzik(velvet, sizeof(velvet) / 2);
}

void loop() {

	// no need to repeat the melody.
}
