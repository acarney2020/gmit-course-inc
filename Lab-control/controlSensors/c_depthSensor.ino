
class depthSensor {
  private:
    byte pin_ID;


    unsigned long timeLedOn;
    unsigned long nextChangeTime = 0;
     int pinValue = analogRead(A0);
     int sensorValue;
     float voltage = sensorValue * (5.0 / 1023.0);
   
               
     
  public:
    DepthSensor(byte pinValue, unsigned long frequency) {
      this->pin_ID = pinValue;
      this->timeLedOn = frequency;
  

      pinMode(pin_ID, INPUT);
    }
    
   void setup() {
  // INITIALISE SERIAL COMMUNICATION AT 9600 BITS PER SECOND:
  Serial.begin(9600);
  
}
void check() {
      unsigned long currentTime = millis();

      if(currentTime >= nextChangeTime) {
        
       nextChangeTime = currentTime + timeLedOn;
      }
}
     
      

        float getValue(){
      }
    };







  
