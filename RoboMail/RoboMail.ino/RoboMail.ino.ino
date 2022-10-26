// Open Outlook
// Create new email
// Fill in recipient, subject, email body
// Send email 

// Un-comment final lines to enable sending

#include "DigiKeyboard.h"

void setup() {
  #define KEY_TAB 43
  #define KEY_PLUS_EQUAL 46
}
void loop() { 
  // waitInitial gives time for Outlook to open
  // tabpresses allows for proceeding through email input fields
  //   ALTER depending on fields which may/may not be present (eg: Bcc) 
  int waitOutlook = 5000;
  int tabPresses = 3;
  String emailTo = "linus.kay@honeylightconsulting.com.au";
  String emailSubject = "[EMAIL SUBJECT]";
  String emailText = "[EMAIL BODY TEXT]";

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("outlook");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(waitOutlook);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(emailTo);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  for(int i = 0; i < tabPresses; i++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(100);
  }
  DigiKeyboard.print(emailSubject);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(emailText);
  // SEND EMAIL
  // DigiKeyboard.delay(100);
  // DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT);
  // ACCEPT CTRL+ENTER SEND WARNING POPUP
  // DigiKeyboard.delay(500);
  // DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*Stops the digispark from running the script again*/
  }
}
