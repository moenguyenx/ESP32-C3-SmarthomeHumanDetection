#include "button.h"

void buttonSetup()
{
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    attachInterrupt(BUTTON_PIN, checkButton, FALLING);
}

void checkButton()
{
    Serial.println("Clicked");
}
