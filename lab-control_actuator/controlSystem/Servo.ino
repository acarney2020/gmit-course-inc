#include <Servo.h>

class Servoangle{
  private:
  byte Servopin;
  int min = 0;
  int max = 0;
  
};


// even though the system is working and physically mapping the servo angle to the distance, i was not able to do it within its own class. 

// as asked in Q3, i checked the servo actuator specification. This is really a toy for demonstartion purposes only. it works 0 to 180 degrees. it works well with arduino as 
// it is between 4 and 6 volts. Three wires, sinal, power and ground. Controlled by PWM (Pulse Width Modulation)
