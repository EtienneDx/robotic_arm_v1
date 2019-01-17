#include "motor.h"

const int buttons[6] = {2, 3, 4, 5, 6, 7};

Motor baseRotation(13, 12, 200 * 8);
Motor baseY(11, 10, 200 * 8);
Motor centre(8, 9, 200 * 8);

void setup()
{
  baseRotation.Init();
  baseY.Init();
  centre.Init();
  for(int i = 0; i < 6; i++)
  {
    pinMode(buttons[i], INPUT);
  }
}

void loop()
{baseRotation.Step(10); delay(200);
  /*if(digitalRead(buttons[0]))
  {
    baseRotation.SetDir(HIGH);
    baseRotation.Step();
  }
  else if(digitalRead(buttons[1]))
  {
    baseRotation.SetDir(LOW);
    baseRotation.Step();
  }
  
  if(digitalRead(buttons[2]))
  {
    baseY.SetDir(HIGH);
    baseY.Step();
  }
  else if(digitalRead(buttons[3]))
  {
    baseY.SetDir(LOW);
    baseY.Step();
  }
  
  if(digitalRead(buttons[4]))
  {
    centre.SetDir(HIGH);
    centre.Step();
  }
  else if(digitalRead(buttons[5]))
  {
    centre.SetDir(LOW);
    centre.Step();
  }*/
}
