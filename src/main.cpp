#include <Arduino.h>
#include <sonar.h>

void setup()
{
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(500);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
}