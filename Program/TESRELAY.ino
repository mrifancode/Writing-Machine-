void setup() {
  pinMode(2, OUTPUT); // Relay 1
  pinMode(3, OUTPUT); // Relay 2
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2, HIGH);  // Relay 1 ON
  digitalWrite(3, LOW); // Relay 2 OFF
  delay(1000);

  digitalWrite(2, LOW); // Relay 1 OFF
  digitalWrite(3, HIGH);  // Relay 2 ON
  delay(1000);
}
