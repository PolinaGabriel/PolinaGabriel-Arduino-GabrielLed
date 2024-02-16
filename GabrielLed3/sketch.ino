void setup() {
  //лампочка горит 3 секунды после начала работы
  pinMode(7, OUTPUT);
  digitalWrite(7, HIGH);
  delay(3000);
  digitalWrite(7, LOW);
  delay(1000);
}

void loop() {
  //далее горит полсеунды, не горит секунду
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(1000);
}
