#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "humanDetect.h"
#include "WiFiConnect.h"
#include "button.h"

const char* ssid = "minhtra";
const char* password = "minhtra1908";

void setup() {
  Serial.begin(115200);

  connectionStatus status = establishConnection(ssid, password);
  if (status == E_CONNECTED)
  {
    Serial.println("WiFi connected!");
  }
  else
  {
    Serial.println("Failed to connect!");
  }
  pinMode(SENSOR_PIN, INPUT);
  
  buttonSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
}

