/*
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
void mydelay(){
  for(volatile long i=0; i< ???; i++){
  }
}
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  mydelay();
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
*/

// the setup function runs once when you press reset or power the board
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
void mydelay(){
  for(long i=0; i<400000; i++){
  }
}
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  mydelay();
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
