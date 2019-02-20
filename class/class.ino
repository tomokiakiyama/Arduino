/*
1.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  bool flag = true;
public:
  void invert(){
  flag = !flag;
  digitalWrite(LED_BUILTIN, flag);
  }    
};
Led led;
void loop(){
  led.invert();
  delay(1000);
}

2.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  bool flag = true;
public:
  void invert(){
  flag = !flag;
  digitalWrite(LED_BUILTIN, flag);
  }    
};
void loop(){
  static Led led;
  led.invert();
  delay(1000);
}

3.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  bool flag = true;
public:
  void invert(){
  flag = !flag;
  digitalWrite(LED_BUILTIN, flag);
  }    
};
void loop(){
  Led led;
  led.invert();
  delay(1000);
}

4.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  bool flag = true;
public:
  void invert(){
  flag = !flag;
  digitalWrite(LED_BUILTIN, flag);
  }    
};
void loop(){
  static Led* p = new Led();
  p->invert();
  delay(1000);
}
*/

void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
class Led {
  bool flag = true;
public:
  void invert(){
  flag = !flag;
  digitalWrite(LED_BUILTIN, flag);
  }    
};
Led led;
void loop(){
  led.invert();
  delay(1000);
}
