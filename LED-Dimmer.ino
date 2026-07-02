const int potPin = A0;    // Pin connected to potentiometer
const int ledPin = 9;     // Pin connected to LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the potentiometer (0 to 1023)
  int sensorValue = analogRead(potPin);

  // Map the value to LED brightness range (0 to 255)
  int brightness = map(sensorValue, 0, 1023, 0, 255);

  // Set the LED brightness
  analogWrite(ledPin, brightness);
}