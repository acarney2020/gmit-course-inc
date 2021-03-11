//note: original code taken from cian as agreed as copy and paste from teams comment box caused complie issues. 

#define PIN_LED1 3
#define pinSensor A1
//#define Servopin 9
#include <Servo.h>
Servo myservo;



depthSensor depthread(pinSensor, 500);


void setup() {
 // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  myservo.attach(9,600,2300);  // (pin, min, max)
}

void loop() {
  
  depthread.Distancemeasurement();
  

Serial.println(depthread.getVoltage());Serial.println(depthread.getDistance());
Serial.println("   ");

myservo.write(depthread.getAngle());  // tell servo to go to a particular angle
  //delay(1000);

  
}

  
