byte a = 6;
byte b = 11;
byte c = 9;
byte d = 8;
byte e = 7;
byte f = 5;
byte g = 3;
byte dp = 10;
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}
void loop() {
  for (int i = 0; i <= 9; i++) {
    contador(i);
    delay(500);
  }
}
void contador(int num) {
  switch (num) {
    case 0:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      digitalWrite(dp, 1);
      break;
    case 1:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(dp, 1);
      break;
    case 2:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
    case 3:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
    case 4:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
    case 5:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
    case 6:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
    case 7:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      digitalWrite(dp, 1);
      break;
    case 8:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
    case 9:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      digitalWrite(dp, 1);
      break;
  }
}
