#include "WiFiConnect.h"

connectionStatus establishConnection(const char* ssid, const char* password)
{
    connectionStatus status;

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.print("Connecting ..");

    uint8_t attemps = 0;
    while (WiFi.status() != WL_CONNECTED  && attemps < 5)
    {
        Serial.print(".");
        attemps++;
        delay(1000);
    }
    Serial.println("");

    // Check if connection is successful
    if (WiFi.status() == WL_CONNECTED) {
        status = E_CONNECTED; // Connected to WiFi
    } else {
        status = E_DISCONNECTED; // Failed to connect to WiFi
    }

    return status;
}