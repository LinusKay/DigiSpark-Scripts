#include "DigiKeyboard.h"
void setup() {
  // define Plus/Equal key
  #define KEY_PLUS_EQUAL 46
}
// my workmate keeps his screen unlocked all the time
// security risk !!
// open notepad, type "lock me", increase font size, bingo
void loop() {
  int zoomLevel = 34;
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("lock me");
  for(int i = 0; i < zoomLevel; i++) {
    DigiKeyboard.sendKeyStroke(KEY_PLUS_EQUAL, MOD_CONTROL_LEFT);
  }
  for (;;) {
    /*Stops the digispark from running the script again*/
  }
}
