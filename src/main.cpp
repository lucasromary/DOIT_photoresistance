#include <Arduino.h>
int pin_photoresistance = 34;
int val_photoresistance = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin_photoresistance, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val_photoresistance = analogRead(pin_photoresistance);
  Serial.println(val_photoresistance);
  delay(100);
}