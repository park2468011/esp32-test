#define LED_PIN1 16
#define LED_PIN2 17
#define LED_PIN3 18
 
void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
}
 
void loop() {
  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN3, HIGH);
  //delay(1000);
  //digitalWrite(LED_PIN2, HIGH);
  //digitalWrite(LED_PIN1, LOW);
  //digitalWrite(LED_PIN3, LOW);
  //delay(1000);
  //digitalWrite(LED_PIN3, HIGH);
  //digitalWrite(LED_PIN1, LOW);
  //digitalWrite(LED_PIN2, LOW);
  //delay(1000);
}
