#include "button.h"

void buttonSetup(int PIN_NUM)
{
    pinMode(PIN_NUM, INPUT_PULLUP);
    attachInterrupt(BUTTON_PIN, checkButton, FALLING);
}

void checkButton()
{
    Serial.println("Clicked");
}
