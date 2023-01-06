const int buzzerPin = 13;

const int cPin = 12;
const int dPin = 11;
const int ePin = 10;
const int fPin = 9;
const int gPin = 8;
const int aPin = 7;
const int bPin = 6;

byte c, d, e, f, g, a, b;

void setup()
{
  pinMode(buzzerPin, OUTPUT);
  
  pinMode(cPin, INPUT);
  pinMode(dPin, INPUT);
  pinMode(ePin, INPUT);
  pinMode(fPin, INPUT);
  pinMode(gPin, INPUT);
  pinMode(aPin, INPUT);
  pinMode(bPin, INPUT);
}

void loop()
{
  c = digitalRead(cPin);
  d = digitalRead(dPin);
  e = digitalRead(ePin);
  f = digitalRead(fPin);
  g = digitalRead(gPin);
  a = digitalRead(aPin);
  b = digitalRead(bPin);
  
  if (c == HIGH) {
    tone(buzzerPin, 264, 10);
  }
  
  if (d == HIGH) {
    tone(buzzerPin, 297, 10);
  }
  
  if (e == HIGH) {
    tone(buzzerPin, 330, 10);
  }
  
  if (f == HIGH) {
    tone(buzzerPin, 352, 10);
  }
  
  if (g == HIGH) {
    tone(buzzerPin, 396, 10);
  }
  
  if (a == HIGH) {
    tone(buzzerPin, 440, 10);
  }
  
  if (b == HIGH) {
    tone(buzzerPin, 495, 10);
  }
  
  delay(10);
}