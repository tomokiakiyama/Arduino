/*
1.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
bool flag = true;
void loop(){
  digitalWrite(LED_BUILTIN, flag);
  flag = !flag;
  delay(1000);
}

2.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
void loop(){
  static bool flag = true;
  digitalWrite(LED_BUILTIN, flag);
  flag = !flag;
  delay(1000);
}

3.
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
void loop(){
  bool flag = true;
  digitalWrite(LED_BUILTIN, flag);
  flag = !flag;
  delay(1000);
}
*/

// the setup function runs once when you press reset or power the board
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);    
}
bool flag = true;
void loop(){
  digitalWrite(LED_BUILTIN, flag);
  flag = !flag;
  delay(1000);
}
