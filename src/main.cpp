#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "humanDetect.h"
#include "WiFiConnect.h"
#include "button.h"

const char* ssid = "minhtra";
const char* password = "minhtra1908";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);
  
  // Attach button to external interupt
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(BUTTON_PIN, checkButton, FALLING);

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

