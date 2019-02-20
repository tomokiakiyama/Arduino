/* ex63 */
const static int tmax=10000;
const byte out[]={6,7,8,9,10,11,12,13,A0,A1,A2,A3,0xff};
byte buf[sizeof(out)]={LOW};
const byte button1=4;
const byte button2=5;
void setup() {
  for(byte i=0;out[i]!=0xff;i++){
    pinMode(out[i], OUTPUT);
  }
  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
}

void writeArray(bool cond){
  for(byte i=0; out[i]!=0xff;i++){
    digitalWrite(out[i],cond?buf[i]:LOW);
  }
}
void next(){
  static byte i=0;
  static byte prev=0;
  buf[prev]=LOW;
  buf[prev=i++]=HIGH;
  if(out[i]==0xff){
    i=0;
  }
}
void loop() {
  static bool prev=HIGH;
  static bool now=HIGH;
  static bool condition=HIGH;
  static int t = 0;
  if(++t>tmax){
    t=0;
    next();
  }

  now=digitalRead(button2);
  if(now==HIGH && prev==LOW){
    condition ^= true;
  }
  prev=now;
  writeArray(condition == digitalRead(button1));
}
