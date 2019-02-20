#include <avr/sleep.h>
const byte out7seg[]={6,7,8,9,10,12,13,0xff};
void setup() {
   for(byte i=0;out7seg[i]!=0xff;i++){
    pinMode(out7seg[i], OUTPUT);
  }
  set_sleep_mode(SLEEP_MODE_IDLE);
  sleep_enable();
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  sleep_cpu();
  digitalWrite(9,HIGH);
}
void loop() {

}
