#include "motor.h"

const int button1 = 5;
const int button2 = 6;

Motor baseRotation(3, 4, 200 * 8);

void setup()
{
  baseRotation.Init();
  pinMode(button1, INPUT); 
  pinMode(button2, INPUT);
}

void loop()
{
  if(digitalRead(button1))
  {
    baseRotation.SetDir(HIGH);
    baseRotation.Step();
  }
  else if(digitalRead(button2))
  {
    baseRotation.SetDir(LOW);
    baseRotation.Step();
  }
}
