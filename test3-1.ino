#define LED 16
#define BUTTON 4

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  int btnState = digitalRead(BUTTON);
  Serial.println(btnState);
  if (btnState == LOW) {
    digitalWrite(LED, HIGH);   // 버튼 눌림 → LED ON
  } else {
    digitalWrite(LED, LOW);    // 버튼 안눌림 → LED OFF
  }
}
