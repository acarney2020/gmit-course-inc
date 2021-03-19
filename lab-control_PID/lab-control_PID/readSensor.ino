
class lightSensor {
  private:
    byte pin_ID;


    unsigned long timeLedOn;
    unsigned long nextChangeTime = 0;
     int pinValue = 0;
     int sensorValue = 0;
     float voltage = 0;
     

   
     
  public:
    lightSensor(byte pinValue, unsigned long frequency) {
      this->pin_ID = pinValue;
      this->timeLedOn = frequency;
  

      pinMode(pin_ID, INPUT);
      
    }

void check() {
      unsigned long currentTime = millis();

      if(currentTime >= nextChangeTime) {

         sensorValue = analogRead(pin_ID);
      
      
       voltage = sensorValue * (5.0 / 1023.0);
       nextChangeTime = currentTime + timeLedOn;

      }
       
}
     
    
        float getValue(){
          return voltage;
      }


      
    };
