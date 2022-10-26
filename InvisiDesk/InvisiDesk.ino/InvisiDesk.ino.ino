// Open desktop, disable icons via context menu
#include "DigiKeyboard.h"
void setup() {}

void loop() { 
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_V);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_D);
  for (;;) {
    /*Stops the digispark from running the script again*/
  }
}
