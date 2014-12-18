#include <ZumoBuzzer.h>
#include <ZumoReflectanceSensorArray.h>
#include <ZumoMotors.h>

ZumoMotors motors;

void setup()
{   
}

int IR_Reading = 0;
int IRThreshold = 450;
int IRpin = 0;
int MotorSpeed = 255;

void loop() 
  {
    motors.setLeftSpeed(MotorSpeed);
    motors.setRightSpeed(MotorSpeed);
    
    IR_Reading=analogRead(A0);
    if (IR_Reading > IRThreshold)
      {
        motors.setLeftSpeed(-255);//turn left while sensing a value>threshold
        motors.setRightSpeed(255);//400 is max speed
        delay(200);
      }
      else
      {
      }
  }
