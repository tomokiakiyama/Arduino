/*
1.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  int times;
  void blinkLed(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
  }
public:
  Led(int t):times(t){}
  void flash(){
    for(int i=0; i<times; ++i){ 
      blinkLed();
    }    
    delay(1000);
  }
};
void loop(){
  static Led led(3);
  led.flash();
}

2.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  int times;
  void blinkLed(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
  }
public:
  Led(int t):times(t){}
  void flash(){
    for(int i=0; i<times; ++i){ 
      blinkLed();
    }    
    delay(1000);
  }
};
void loop(){
  static Led* leds[]={new Led(1), new Led(2), new Led(3), NULL};
  for(Led** p = leds; *p != NULL; ++p){
    (*p)->flash();
  }
}

3.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  int times;
  void blinkLed();
public:
  Led(int t);
  void flash();
};
Led::Led(int t):times(t){}
void Led::blinkLed(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}
void Led::flash(){
  for(int i=0; i<times; ++i){ 
    blinkLed();
  }    
  delay(1000);
}
void loop(){
  static Led* leds[]={new Led(1), new Led(2), new Led(3), NULL};
  for(Led** p = leds; *p != NULL; ++p){
    (*p)->flash();
  }
}
*/
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  int times;
  void blinkLed();
public:
  Led(int t);
  void flash();
};
Led::Led(int t):times(t){}
void Led::blinkLed(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}
void Led::flash(){
  for(int i=0; i<times; ++i){ 
    blinkLed();
  }    
  delay(1000);
}
void loop(){
  static Led* leds[]={new Led(1), new Led(2), new Led(3), NULL};
  for(Led** p = leds; *p != NULL; ++p){
    (*p)->flash();
  }
}
