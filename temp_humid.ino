#include "DHTesp.h"

DHTesp dht;

void setup() {
  Serial.begin(115200);
  dht.setup(2, DHTesp::DHT22);  // Connect DHT sensor to GPIO2
}

void loop() {
  delay(dht.getMinimumSamplingPeriod());

  float humidity = dht.getHumidity();
  float temperature = dht.getTemperature();

  Serial.print("Temperature: ");
  Serial.print(temperature, 1);
  Serial.print(" Â°C, Humidity: ");
  Serial.print(humidity, 1);
  Serial.println(" %");

  delay(2000);
}