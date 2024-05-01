#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "humanDetect.h"
#include "WiFiConnect.h"

const char* ssid = "minhtra";
const char* password = "minhtra1908";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);

  connectionStatus status = establishConnection(ssid, password);
  if (status == E_CONNECTED)
  {
    Serial.println("WiFi connected!");
  }
  else
  {
    Serial.println("Failed to connect!");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

