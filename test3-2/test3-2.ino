const int ldrPin = 33;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  Serial.println(ldrValue);
  delay(500);
  }
