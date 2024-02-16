int control;
int ball = 6;
int ballDirection = 1;
int lose = 0;

//Cветодиодная игра
//Переменный резисторуправляет крайними точками;
//существуют два положения: либо одна, либо другая сторона.
//Остальные точки показывают полёт мяча, как в настольном теннисе.
//Цель игры: отбить мяч ркайней стороной, на которую летит мяч.
//Если мяч пролетит мимо, то загорятся все светодиоды.
//Это значит, что игра окончена.

void setup() {
for (int i = 0; i < 10; ++i)
  pinMode(i + 0, OUTPUT);
}

void loop() {
  if (lose == 0) {
    digitalWrite(control, LOW);
    digitalWrite(ball, LOW);
  }
  int read = analogRead(A0);
  if(read >= 512) control = 0;
  if(read < 512) control = 9;
  digitalWrite (control, HIGH);
  if(ballDirection == 1) ++ball;
  if(ballDirection == 2) --ball;
  if(ball == 1 && control == 0) {
  ballDirection = 1;
  }
  if(ball == 8 && control == 9) {
  ballDirection = 2;
  }
  if (ball == 9 || ball == 0) lose = 1;
  if (lose == 1) {
  for (int i= 0; i < 10; ++i)
  digitalWrite(i + 0, HIGH);
  }
  digitalWrite (ball, HIGH);
  delay (500);
}