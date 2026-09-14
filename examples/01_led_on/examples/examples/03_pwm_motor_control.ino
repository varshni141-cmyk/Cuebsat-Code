int motorPin = 9;    // Choose a PWM-enabled pin
int speed = 0;       // Speed variable (0 to 255)

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {

  // Increase speed
  for (speed = 0; speed <= 255; speed++) {
    analogWrite(motorPin, speed);
    delay(10);
  }

  // Decrease speed
  for (speed = 255; speed >= 0; speed--) {
    analogWrite(motorPin, speed);
    delay(10);
  }
}
