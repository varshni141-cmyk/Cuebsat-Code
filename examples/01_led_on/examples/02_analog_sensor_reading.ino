int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  Serial.print("Sensor Reading: ");
  Serial.println(reading);
  delay(1000);
}
