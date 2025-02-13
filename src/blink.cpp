#include <Arduino.h>

#define LED_ESP_01   2  //= 2 ESP-01 + WemosD1 mini: GPIO2 = D4
#define LED_NODEMCU  16 //= 16 NodeMCU: GPIO16 = D0 + GPIO2 = D4, WROOM-02: GPIO16 = D0

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(LED_ESP_01, OUTPUT);
    pinMode(LED_NODEMCU, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(LED_ESP_01, LOW);
    digitalWrite(LED_NODEMCU, LOW);
    delay(300);

    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_ESP_01, HIGH);
    digitalWrite(LED_NODEMCU, HIGH);
    delay(300);
}
