const byte out[] = {6,7,8,9,10,11,12,13,A0,A1,A2,A3,0xff};
const byte button1 = 4;
const byte button2 = 5;
void setup() {
  for(byte i = 0; out[i] != 0xff; i++){
    pinMode(out[i], OUTPUT);
  }
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void writeArray(bool signal){
  for(byte i = 0; out[i] != 0xff; i++){
    digitalWrite(out[i], signal);
  }
}
void loop() {
  static bool prev = HIGH;
  static bool now = HIGH;
  static bool condition = HIGH;

  now = digitalRead(button2);
  if(now == HIGH && prev == LOW){
    condition ^= true;
  }
  prev = now;
  writeArray(condition == digitalRead(button1));
}
