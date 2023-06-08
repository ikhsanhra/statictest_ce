#include <Arduino.h>
#include <PIN_ESP32.h>

void SETUP()
{
    pinMode(PIN_BUZZER, OUTPUT);
    pinMode(PIN_POTENSIO, INPUT);
    pinMode(PIN_LED_INDICATOR, OUTPUT);
    pinMode(PIN_PUSH_BUTTON_START, INPUT_PULLUP);
    pinMode(PIN_SERVO_ECD, OUTPUT);
    pinMode(PIN_SERVO_TBW, OUTPUT);

    Serial.begin(9600);
}