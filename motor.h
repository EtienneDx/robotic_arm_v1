

class Motor
{
  public:
    Motor(int stepPin, int dirPin, int stepCount);
    Init();
    SetDir(int dir);
    Step();
    Step(int numStep);
  private:
    int stepPin;
    int dirPin;
    int stepCount;
};

