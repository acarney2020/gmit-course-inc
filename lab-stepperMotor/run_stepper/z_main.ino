


void setup() {
  // put your setup code here, to run once:

setupPINS();
}

void loop() {
int tempDelayspeed =5;
int val = analogRead(A0);
tempDelayspeed = map(val,0, 1023, 5, 10);

for (int i=0; i<512; i++){
onestepCW(tempDelayspeed);
  
}

for (int i=0; i<512; i++){
onestepCCW(tempDelayspeed);
  
}



}
