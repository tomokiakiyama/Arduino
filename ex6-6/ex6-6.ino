const byte out[] = {6,7,8,9,10,11,12,13,0xff};
void setup() {
  for(byte i = 0;out[i] != 0xff; i++){
    pinMode(out[i], OUTPUT);
  }
  for(byte i=0; out[i]!=0xff; i++){
    digitalWrite(out[i], LOW);
    }
}

void del(){
  for(byte i=0; out[i]!=0xff; i++){
    digitalWrite(out[i], LOW);
    }
  }

void loop() {
 //0:
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();
  
 //1:
  digitalWrite(out[4], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();
  
//2:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//3:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//4:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//5:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  delay(1000);
  del();

//6:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  delay(1000);
  del();

//7:
  digitalWrite(out[1], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//8:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//9:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//A:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[6], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//b:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  delay(1000);
  del();

//C:
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[6], HIGH);
  delay(1000);
  del();

//d:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[4], HIGH);
  digitalWrite(out[7], HIGH);
  delay(1000);
  del();

//E:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[3], HIGH);
  digitalWrite(out[6], HIGH);
  delay(1000);
  del();

//F:
  digitalWrite(out[0], HIGH);
  digitalWrite(out[1], HIGH);
  digitalWrite(out[2], HIGH);
  digitalWrite(out[6], HIGH);
  delay(1000);
  del();
}
