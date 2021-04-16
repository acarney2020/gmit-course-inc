#define PinA 2
#define PinB 3
#define PinC 4
#define PinD 5
#define NUMBER_OF_STEPS_PER_REV 512


void setupPINS () {

  pinMode(PinA, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinC, OUTPUT);
  pinMode(PinD, OUTPUT);
  
}

void writePINS (int a, int b, int c, int d) {

  digitalWrite(PinA,a);
  digitalWrite(PinB,b);
  digitalWrite(PinC,c);
  digitalWrite(PinD,d);
  
}

void onestepCW(int variabledelay){

  writePINS(1,0,0,0);
  delay(variabledelay);
  writePINS(1,1,0,0);
  delay(variabledelay);
  writePINS(0,1,0,0);
  delay(variabledelay);
  writePINS(0,1,1,0);
  delay(variabledelay);
  writePINS(0,0,1,0);
  delay(variabledelay);
  writePINS(0,0,1,1);
  delay(variabledelay);
  writePINS(0,0,0,1);
  delay(variabledelay);
  writePINS(1,0,0,1);
  delay(variabledelay);
  
}

void onestepCCW(int variabledelay){

  writePINS(1,0,0,1);
  delay(variabledelay);
  writePINS(0,0,0,1);
  delay(variabledelay);
   writePINS(0,0,1,1);
  delay(variabledelay);
   writePINS(0,0,1,0);
  delay(variabledelay);
  writePINS(0,1,1,0);
  delay(variabledelay);
  writePINS(0,1,0,0);
  delay(variabledelay);
  writePINS(1,1,0,0);
  delay(variabledelay);
  writePINS(1,0,0,0);
  delay(variabledelay);
  
}
