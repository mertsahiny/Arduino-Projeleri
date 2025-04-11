#include <IRremote.h>
#include <IRremoteInt.h>
const int sensorpin=7;
const int ledpin=3;

IRrecv kumanda(sensorpin);
decode_results sonuclar;
void setup() {
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
kumanda.enableIRIn();

}

void loop() {
  // put your main code here, to run repeatedly:
if (kumanda.decode(&sonuclar)){
  Serial.print("Tuş Kodu:");
  Serial.println(sonuclar.value,HEX);
  kumanda.resume();
}
if(sonuclar.value==0xFFA25D) {
  digitalWrite(ledpin,HIGH);
}
if( sonuclar.value==0xFF38C7)  {
  digitalWrite(ledpin,LOW);
}


delay(150);
}