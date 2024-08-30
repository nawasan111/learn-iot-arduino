void setup() {
  pinMode(A2, INPUT);
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  Serial.begin(9600);
}

void loop() {
  long int cen = analogRead(A2);
  int tem = (cen * 255) / 876;
  for (int i = 2; i < 10; i++) {
    digitalWrite(i, (tem >> (i - 2)) & 1);
  }
  delay(1000);  // Wait for 1000 millisecond(s)
}
