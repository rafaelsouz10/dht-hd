#include <DHT.h>  //https://github.com/adafruit/DHT-sensor-library

const int pinDatos = 12;
DHT dht(pinDatos, DHT22);


void setup() {
  Serial.begin(9600);
  dht.begin(); // Inicia o sensor DHT22
}

void loop() {
  float temp = dht.readTemperature();
  float umidade = dht.readHumidity();
    Serial.print("Temperatura DHT: ");
  Serial.print(temp);
  Serial.println(" ºC");
  Serial.print("Umidade DHT: ");
  Serial.print(umidade);
  Serial.println(" %");
  delay(2000);
}