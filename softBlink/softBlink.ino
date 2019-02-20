void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
void softBlink(){
  for(long a=1024;a>0;a=a/2){
    for(volatile long i=0; i< 1000; i++){
      if(i%a==0)
        digitalWrite(LED_BUILTIN, HIGH);
      else 
        digitalWrite(LED_BUILTIN, LOW);
        }
    }    
  for(long a=1;a<=1024;a=a*2){
    for(volatile long i=0; i< 1000; i++){
      if(i%a==0)
        digitalWrite(LED_BUILTIN, HIGH);
      else 
        digitalWrite(LED_BUILTIN, LOW);
        }
    }    
}
     
void loop(){
  softBlink();
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}  
