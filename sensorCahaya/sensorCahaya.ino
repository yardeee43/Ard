  int buzzer = 2;
  int red = 8;
  int yellow = 11;
  int green = 10;

  void setup() {
    Serial.begin(9600);
    pinMode(red,OUTPUT);
    pinMode(yellow,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(A5,INPUT);
    pinMode(buzzer, OUTPUT);
  }

  void led(int speed ){
    digitalWrite(red,HIGH);
    delay(speed);
    digitalWrite(red,LOW);
      digitalWrite(yellow,HIGH);
    delay(speed);
    digitalWrite(yellow,LOW);
      digitalWrite(green,HIGH);
    delay(speed);
    digitalWrite(green,LOW);
  }

  void suara (int speed, int freq){
    tone(buzzer,freq);
    delay(speed);
    noTone(buzzer);
  }

  void loop() {
    int sensor_V = analogRead(A5);
    Serial.println(sensor_V);

    if(sensor_V < 700){
        led(200);
        suara(2000, 6000);
    }
    else if(sensor_V < 800){
      led(200);
      suara(1000,6500);
    }
  }
