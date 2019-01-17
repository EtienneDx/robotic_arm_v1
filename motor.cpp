#include "motor.h"

#include <Arduino.h>

Motor::Motor(int stepPin, int dirPin, int stepCount) : stepPin(stepPin), dirPin(dirPin), stepCount(stepCount)
{}

Motor::Init()
{
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

Motor::SetDir(int dir)
{
  digitalWrite(dirPin, dir);
}

Motor::Step()
{
  digitalWrite(this->stepPin,HIGH); 
  delayMicroseconds(500); 
  digitalWrite(this->stepPin,LOW); 
  delayMicroseconds(500);
}

Motor::Step(int num)
{
  for(int i = 0; i < num; i++)
  {
    this->Step();
  }
}

