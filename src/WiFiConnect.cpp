#include "WiFiConnect.h"

connectionStatus establishConnection(const char* ssid, const char* password)
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.println("Connecting to WiFi ..");

    int attemps = 0;
    while (WiFi.status() != WL_CONNECTED  && attemps < 10)
    {
        Serial.print(".");
        attemps++;
        delay(1000);
    }

    // Check if connection is successful
    if (WiFi.status() == WL_CONNECTED) {
        return E_CONNECTED; // Connected to WiFi
    } else {
        return E_DISCONNECTED; // Failed to connect to WiFi
    }
}