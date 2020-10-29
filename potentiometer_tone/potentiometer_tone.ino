int buzzerPin = 8;
int levelInput = A0;

int level = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  

}

void loop() {
  // put your main code here, to run repeatedly:
  level = analogRead(levelInput);
  int pitch = map(level, 0, 1024, 500, 1000);
  tone(buzzerPin, pitch, 10);
  Serial.print("Sensor Level: ");
  Serial.print(level);
  Serial.print("  Pitch: ");
  Serial.print(pitch);
  Serial.println(" Hz");
  delay(1);

}
