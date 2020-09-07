#include <NewPing.h> 
#include <Time.h> 
#include <TimeLib.h>
#define TRIGGER_PIN 11 
#define ECHO_PIN 12 
int maximumRange = 70;
int minimumRange = 35; 
long duration, distance; 
void setup()
{
  Serial.begin (115200);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  }
  void loop()
  {
    digitalWrite(TRIGGER_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIGGER_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER_PIN, LOW);
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = (duration/2) / 29.1; 
    if (distance >= maximumRange || distance <= minimumRange)
    {
      Serial.println("0"); 
      }
      else
      {
        Serial.println("1");
        }
        delay(50); 
        }        
