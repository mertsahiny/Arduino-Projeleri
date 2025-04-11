#include <Servo.h>
const int trig_pin=11;
const int echo_pin=13;
int mesafe;
int sure;
Servo myservom;
void setup() {
pinMode(trig_pin,OUTPUT);
pinMode(echo_pin,INPUT);
Serial.begin(9600);
myservom.attach(9);
myservom.write(0);


}

void loop() {
digitalWrite(trig_pin,HIGH);
delayMicroseconds(1000);
digitalWrite(trig_pin,LOW);
sure=pulseIn(echo_pin,HIGH);
mesafe=(sure/2)/28.5;
Serial.println(mesafe);
if(mesafe>0 && mesafe<10) {
  myservom.write(90);
  delay(5000);
}
else{
  myservom.write(0);
}
}