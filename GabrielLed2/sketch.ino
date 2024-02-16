void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  //лампочка горит полсекунды, не горит секунду
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(1000);
}
