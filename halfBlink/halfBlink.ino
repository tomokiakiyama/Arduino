void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
void halfBlink(){
  for(volatile long i=0; i< 40000; i++){
    if(i%2==0)
      digitalWrite(LED_BUILTIN, LOW);
    else if(i%2==1)
      digitalWrite(LED_BUILTIN, HIGH);
  }
}
void loop(){
  halfBlink();
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
