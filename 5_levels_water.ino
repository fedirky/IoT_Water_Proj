
#define SENSOR_PIN_1 D1
#define SENSOR_PIN_2 D2
#define SENSOR_PIN_3 D3
#define SENSOR_PIN_4 D4
#define SENSOR_PIN_5 D5

void setup() {
  Serial.begin(115200);

  pinMode(SENSOR_PIN_1, INPUT_PULLUP);
  pinMode(SENSOR_PIN_2, INPUT_PULLUP);
  pinMode(SENSOR_PIN_3, INPUT_PULLUP);
  pinMode(SENSOR_PIN_4, INPUT_PULLUP);
  pinMode(SENSOR_PIN_5, INPUT_PULLUP);
}

void loop() {
  int sensorValue1 = digitalRead(SENSOR_PIN_1);
  int sensorValue2 = digitalRead(SENSOR_PIN_2);
  int sensorValue3 = digitalRead(SENSOR_PIN_3);
  int sensorValue4 = digitalRead(SENSOR_PIN_4);
  int sensorValue5 = digitalRead(SENSOR_PIN_5);

  Serial.print("Sensor 1: ");
  Serial.println(sensorValue1 == LOW ? "Water detected" : "No water detected");

  Serial.print("Sensor 2: ");
  Serial.println(sensorValue2 == LOW ? "Water detected" : "No water detected");

  Serial.print("Sensor 3: ");
  Serial.println(sensorValue3 == LOW ? "Water detected" : "No water detected");

  Serial.print("Sensor 4: ");
  Serial.println(sensorValue4 == LOW ? "Water detected" : "No water detected");

  Serial.print("Sensor 5: ");
  Serial.println(sensorValue5 == LOW ? "Water detected" : "No water detected");

  delay(10000);
}