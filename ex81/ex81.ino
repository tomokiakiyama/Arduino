const byte out[] = {6,7,8,9,10,11,12,13,0xff};
const byte button = 4; 

void setup() {
  for(byte i=0; out[i] != 0xff; i++){
    pinMode(out[i], OUTPUT);
    }
  
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  static bool prev = HIGH;
  static bool now = HIGH;
  static int i = 0;
  
  now = digitalRead(button);
  
  if(now == LOW && prev == HIGH){
    ld(i++);  
    }
    prev = now;
   if(i>=16){
    i = 0;
    }
}

void ld(byte a){
  for(byte i=0; out[i]!=0xff; i++){
    digitalWrite(out[i], LOW);
    }
  
  if(a==0){
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==1){
    digitalWrite(out[4], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==2){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==3){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }  
    
  else if(a==4){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==5){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    }
    
  else if(a==6){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    }
    
  else if(a==7){
    digitalWrite(out[1], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==8){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==9){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==10){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[6], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==11){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    }
    
  else if(a==12){
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[6], HIGH);
    }
    
  else if(a==13){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[4], HIGH);
    digitalWrite(out[7], HIGH);
    }
    
  else if(a==14){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[3], HIGH);
    digitalWrite(out[6], HIGH);
    }
    
  else if(a==15){
    digitalWrite(out[0], HIGH);
    digitalWrite(out[1], HIGH);
    digitalWrite(out[2], HIGH);
    digitalWrite(out[6], HIGH);
    }
  }
