const byte out7seg[]={6,7,8,9,10,11,12,13,0xff};
const byte pattern[]={
  
                      0b11011110, //0
                      0b10010000, //1
                      0b11001101, //2
                      0b11011001, //3
                      0b10010011, //4
                      0b01011011, //5
                      0b01011111, //6
                      0b11010000, //7
                      0b11011111, //8
                      0b11011011, //9
                      0b11010111, //A
                      0b00011111, //b
                      0b01001110, //C
                      0b10011101, //d
                      0b01001111, //E
                       0b01000111 //F
                       
};
const byte button1 = 4;
const byte button2 = 5;
void setup() {
  for(byte i = 0; out7seg[i] != 0xff; i++){
    pinMode(out7seg[i], OUTPUT);
  }
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  for(byte i=0; out7seg[i] != 0xff; i++){
    digitalWrite(out7seg[i], HIGH);
    } 
    digitalWrite(out7seg[5], LOW);
    digitalWrite(out7seg[0], LOW);
}


void ld(byte x){
  for(byte i=0; i<8;i++){
    digitalWrite(out7seg[i],pattern[x]&1<<i);
  }
}
  

void loop() {
  static bool prev1 = HIGH;
  static bool now1 = HIGH;
  static bool prev2 = HIGH;
  static bool now2 = HIGH;
  static int i=0;

  now1 = digitalRead(button1);
  if(now1 == HIGH && prev1 == LOW){
    if(i==15){
      i=0;
      }
    else{
      i++;
    }
    ld(i);     

  }
  prev1 = now1;

  now2 = digitalRead(button2);
  if(now2 == HIGH && prev2 == LOW){
    if(i==0){
      i=15;
      }
    else{
      i--;
    }
    ld(i);
  }
  prev2 = now2;

  delay(100);
 }
  
