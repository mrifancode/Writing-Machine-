void setup() {
  relay1:pinMode (2,OUTPUT);
  relay2:pinMode (3,OUTPUT);

}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);

  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);

  delay(1000);

}
