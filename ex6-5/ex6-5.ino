const byte out[] = {6,7,8,9,10,11,12,13,A0,A1,A2,A3,0xff};
const byte button = 4;

void setup() {
  for(byte i = 0;out[i] != 0xff; i++){
    pinMode(out[i], OUTPUT);
  }
  for(byte i=0; out[i]!=0xff; i++){
    digitalWrite(out[i],LOW);
    }
  pinMode(button,INPUT_PULLUP); 
}

void loop() {
  static bool prev = HIGH;
  static bool now = HIGH;

  now=digitalRead(button);  
  if(now==HIGH && prev==LOW){
    for(byte i = 0; out[i] != 0xff; i++){
      if(digitalRead(out[i])==LOW){
        digitalWrite(out[i], HIGH);
        break;
        }
       else if(digitalRead(A3)==HIGH){
         for(byte j = 0; out[j] != 0xff; j++){
           digitalWrite(out[j], LOW);   
          }
          break;
        }        
      }
    }
    prev=now;
    delay(100);
    
}
