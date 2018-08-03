void setup() {
 
    //Set pinModes
    pinMode(alertLED, OUTPUT);    
    pinMode(successLED, OUTPUT);
    pinMode(LED, OUTPUT);
    pinMode(buzzer, OUTPUT);
    esp_deep_sleep_enable_ext0_wakeup(GPIO_NUM_32, 0);

    //Initialize serial and wait for port to open:
    Serial.begin(115200);
    delay(100);

}

void loop() {

    Serial.println("");
    Serial.println("I'm awake!");

    //Checking Battery
    Serial.println("Checking my battery...");
    battery_level();

    //Connect To Wifi
    
    if (sleepInit == 1) {
        Serial.println("You've pressed the button...Lets talk to the Pantri API!");
        connectToWifi();
    } else {
        Serial.println("Just a battery start - no button pressed!");
    }

        //Closing Down Until Button Press
    sleepInit = 1;
    Serial.println("Done... Night!");
    delay(1000);
    esp_deep_sleep_start();

}
