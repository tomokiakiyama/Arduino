#include <MsTimer2.h>
#include <avr/sleep.h>
const byte led = A3;
const byte mot = A0;
const byte button = 4;
static byte a;
static byte b;


void setup() {
    a = 0;
    b = 0;
    pinMode(led, OUTPUT);
    digitalWrite(led,LOW);
    pinMode(mot, OUTPUT);
    digitalWrite(mot,LOW);
    pinMode(button,INPUT_PULLUP); 
    MsTimer2::set(500,vect);
    MsTimer2::start();
      }

void vect(){
  b = b + 1;
  if(a == 0 && b%10 == 0){
    right();
    }
   else if(a == 1){
      right();
      if(b == 10){
        a = 2;
        }
       }
   else if(a == 2 && b%4 == 0){
      right();
    }
  }
  
void right(){
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW); 
  }
  
void loop() {
  static int i = 2; 
  static bool prev = HIGH;
  static bool now = HIGH;

  now = digitalRead(button);
  if(now == HIGH && prev == LOW){
    if(a == 0){
      a = 1;
      b = 0; 
      delay(20);
     } 
     else if(a == 2){
      a = 0;
      delay(20);
      digitalWrite(mot, LOW);
      }
     }
  prev = now;

  if(a == 0);
  else if(a == 1){
    digitalWrite(mot, HIGH);
    }
  else if(a == 2){
    if(i == 0){
      digitalWrite(mot, LOW);
      i = 2;
      }
     else digitalWrite(mot, HIGH);
    }
    if(i == 0){
      i = 2;
      }
  i = i-1;
}
