

#define PIN_LED 8 
#define pin_ID A0


Blinker ALAN = Blinker(PIN_LED, 500, 500);
depthSensor depthSensorALAN = depthSensor(pin_ID, 0);


void setup() {

  Serial.begin(9600);

}

void loop() {
  ALAN.check();
  depthSensorALAN.check();


Serial.println(depthSensorALAN).getvalue());
Serial.println("  ");
}
