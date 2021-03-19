

#define PIN_LED 8 
#define pin_ID A0

Relay ALAN = Relay(PIN_LED, 500, 500);

lightSensor lightSensorALAN(pin_ID, 0);


void setup() {

  Serial.begin(9600);

}

void loop() {
  ALAN.check();
  lightSensorALAN.check();


Serial.println(lightSensorALAN.getValue());
Serial.println("  ");
}
