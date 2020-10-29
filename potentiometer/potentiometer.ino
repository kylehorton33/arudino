int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int brightness = 0;
int outputPin = 9; // Output for LED brightness

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  brightness = sensorValue/4;
  Serial.println(brightness);
  // turn the ledPin on
  analogWrite(outputPin, brightness);
}
