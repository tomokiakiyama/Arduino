const byte out[] = {6,7,8,9,10,11,12,13,A0,A1,A2,A3,0xff};


void setup() {
  for(byte i = 0;out[i] != 0xff; i++){
    pinMode(out[i], OUTPUT);
  }
  for(byte i=0; out[i]!=0xff; i++){
    digitalWrite(out[i], LOW);
    }
}

void loop() {
  for(byte i=0; out[i]!=0xff; i++){
    digitalWrite(out[i], HIGH);
    delay(1000);
    digitalWrite(out[i], LOW);
    }
    
}
