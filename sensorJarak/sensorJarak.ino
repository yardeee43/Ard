long durasi;       // Waktu yang diambil oleh sinyal untuk perjalanan pergi-pulang
int distance;      // Jarak yang dihitung

const int trigPin = 10;
const int echoPin = 11;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  // Memulai pengukuran
  digitalWrite(trigPin, LOW);  // Pastikan trigPin LOW
  delayMicroseconds(2);        // Tunggu sebentar

  digitalWrite(trigPin, HIGH); // Mengirimkan pulsa trigger
  delayMicroseconds(10);       // Pulsa harus bertahan selama 10 µs
  digitalWrite(trigPin, LOW);  // Akhiri pulsa trigger

  // Mengukur durasi pulsa dari echoPin
  durasi = pulseIn(echoPin, HIGH);

  // Menghitung jarak
  distance = durasi * 0.034 / 2;

  // Menampilkan hasil
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance<10){
digitalWrite(LED_BUILTIN,HIGH);
// delay(50);
// digitalWrite(LED_BUILTIN, LOW);
// delay(50);
  }else{
    
digitalWrite(LED_BUILTIN,LOW);
  }

  delay(500);
}
