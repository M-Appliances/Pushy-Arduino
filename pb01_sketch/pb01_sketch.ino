// Before Launch
// Remove any instances of "// [coming soon]

/***************************************************

  // Libraries

***************************************************/

#include "esp_deep_sleep.h"
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>



// Insert your personal WLAN device (home router, etc) credentials inside the speach marks.

const char* ssid     = "";    //  This is the name or your wireless network
const char* password = "";      //  This is your wireless network password
const char* objectID = "";      //  This is the objectID issued to your device (on the Pantri device dashboard)

//  This section defines pins that link your Adafruit Arduino Huzzah ESP32 Feather board to your button, buzzer & LED.

int buzzer = 33;          // This is the pin output leading to your Buzzer
int LED = 12;             // This is the pin output leading to your LED
int successLED = 27;      // This is the pin output leading to your LED
int alertLED = 13;        // This is the pin output leading to the red alert LED
