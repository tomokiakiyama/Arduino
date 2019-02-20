#include <avr/sleep.h>
#include <MsTimer2.h>
  // put your setup code here, to run once:
const byte out7seg[]={6,7,8,9,10,11,12,13,0xff};
const byte pattern[]={
 
                      0b11011110, //0
                      0b10010000, //1
                      0b11001101, //2
                      0b11011001, //3
                      0b10010011, //4
                      0b01011011, //5
                      0b01011111, //6
                      0b11010000, //7
                      0b11011111, //8
                      0b11011011, //9
                      0b11010111, //A
                      0b00011111, //b
                      0b01001110, //C
                      0b10011101, //d
                      0b01001111, //E
                       0b01000111 //F

};
byte counter;
void setup() {
  for(byte i=0;out7seg[i]!=0xff;i++){
    pinMode(out7seg[i], OUTPUT);
  }
  counter=0;
  MsTimer2::set(1000,vect);
  dispcounter();
  MsTimer2::start();
}

void dispcounter(){
  for(byte i=0; i<8;i++){
    digitalWrite(out7seg[i],pattern[counter]&1<<i);
  }
}
void inccounter(){
  counter++;
  if(counter>=sizeof(pattern)){
    counter=0;
  }
}
void vect(){
  inccounter();
  dispcounter();
}
void loop() {
  sleep_cpu();
}
