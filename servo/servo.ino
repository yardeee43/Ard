#include <Servo.h>
int pos =0;
Servo s1 ;
void setup() {
  s1.attach(1);

}

void loop() {
  // put your main code here, to run repeatedly:
   for (pos = 0; pos <= 180; pos += 1) { 
    s1.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    s1.write(pos);              
    delay(15);                    
  }
}
