
class depthSensor{
private:
byte pinSensor;
float voltage = 0;
float value=0;
float distance=0;
float angleservo=0;
unsigned long readInterval = 0;
unsigned long nextChangeTime = 0;

public:
depthSensor(byte pinSense, unsigned long readInterv) {
      this->pinSensor = pinSense;
      this->readInterval = readInterv;
      pinMode(pinSensor, INPUT);
}
  void Distancemeasurement(){
     unsigned long currentTime = millis();
      if(currentTime >= nextChangeTime) {
        value = analogRead(pinSensor);
        voltage = value * (5.0/1023.0); // to give the correct sensitivity of voltage 
        distance =  -21.745*voltage+59.705;

        angleservo = map(distance, 10, 20, 0, 180);  //this is a map function which links the 10cm to zero degrees and 20cm to 189 degrees.
       
        nextChangeTime = currentTime + readInterval;
      }
  }
  
  
float getVoltage(){
  return voltage;
}
float getDistance(){
return distance;
  
}
int getAngle(){
  return angleservo;
}

 

  
};
