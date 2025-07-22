#define BLYNK_TEMPLATE_ID "****"
#define BLYNK_TEMPLATE_NAME "****"
#define BLYNK_AUTH_TOKEN "****"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

#define DHTPIN D4
#define DHTTYPE DHT11
#define RELAY_PIN D2

char auth[] = "****";
char ssid[] = "****";
char pass[] = "****";

DHT dht(DHTPIN, DHTTYPE);

BlynkTimer timer;

void sendSensorData() {
  int soil = analogRead(A0);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  int soilPercent = map(soil, 1023, 0, 0, 100);

  Blynk.virtualWrite(V0, soilPercent);
  Blynk.virtualWrite(V1, t);
  Blynk.virtualWrite(V2, h);
  
  if (soilPercent < 30) {
    digitalWrite(RELAY_PIN, LOW);  
    Blynk.virtualWrite(V3, "Pump ON");
  } else {
    digitalWrite(RELAY_PIN, HIGH); 
    Blynk.virtualWrite(V3, "Pump OFF");
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); 

  dht.begin();
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(2000L, sendSensorData);
}

void loop() {
  Blynk.run();
  timer.run();
}
