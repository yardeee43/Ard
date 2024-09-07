int red = 7;
int yellow = 6;
int green = 3;
int ledDelay = 1000;
void setup(){
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);


}
void loop(){
digitalWrite(red,HIGH);
delay(ledDelay);
digitalWrite(red,LOW);
digitalWrite(green,HIGH);
delay(ledDelay);
digitalWrite(yellow,HIGH);
delay(ledDelay);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);




}