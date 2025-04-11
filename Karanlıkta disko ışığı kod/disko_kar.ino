const int ldr_sensor = A0;
const int r_led=10;
const int g_led=11;
const int b_led=12;
int ldr_deger;

void setup() {
pinMode(ldr_sensor,INPUT);
pinMode(r_led,OUTPUT);
pinMode(g_led,OUTPUT);
pinMode(b_led,OUTPUT);
Serial.begin(9600);
}

void loop() {
ldr_deger=analogRead(ldr_sensor);
Serial.println(ldr_deger);
if(ldr_deger<5) {
digitalWrite(r_led,HIGH);
digitalWrite(g_led,LOW);
digitalWrite(b_led,LOW);
delay(150);
digitalWrite(r_led,LOW);
digitalWrite(g_led,HIGH);
digitalWrite(b_led,LOW);
delay(150);
digitalWrite(r_led,LOW);
digitalWrite(g_led,LOW);
digitalWrite(b_led,HIGH);
delay(150);
}
else{
digitalWrite(r_led,LOW);
digitalWrite(g_led,LOW);
digitalWrite(b_led,LOW);

}
}