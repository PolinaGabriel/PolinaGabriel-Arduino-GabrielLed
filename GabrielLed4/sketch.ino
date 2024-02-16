int ledPin = 7;
int dotDelay =200;

void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  //сигнал SOS
  
  // == Буква S ==
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
 
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);

  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  //Окончание буквы
  delay(3*dotDelay);

  // == Буква O ==
  //Тире
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  //Тире
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  //Тире
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  
  //Окончание буквы
  delay(3*dotDelay);

  // == Буква S ==
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
 
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  //Точка
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  //Окончание буквы
  delay(3*dotDelay);
}