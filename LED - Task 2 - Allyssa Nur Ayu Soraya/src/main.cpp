#include <Arduino.h>

int Merah = 17;
int Kuning = 18;
int Hijau = 19;

void setup() {
  Serial.begin(115200);
  pinMode(Merah, OUTPUT);
  pinMode(Kuning, OUTPUT);
  pinMode(Hijau, OUTPUT);
}

void loop() {
digitalWrite(Merah, HIGH);
digitalWrite(Kuning, LOW);
digitalWrite(Hijau, LOW);
Serial.println("Merah Menyala");
delay(30000);
digitalWrite(Merah, LOW);
digitalWrite(Kuning, HIGH);
digitalWrite(Hijau, LOW);
Serial.println("Kuning Menyala");
delay(5000);
digitalWrite(Merah, LOW);
digitalWrite(Kuning, LOW);
digitalWrite(Hijau, HIGH);
Serial.println("Hijau Menyala");
delay(20000);
}
