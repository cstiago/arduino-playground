const int analogRPin = A0;
const int analogGPin = A1;
const int analogBPin = A2;

const int digitalRPin = 11;
const int digitalGPin = 10;
const int digitalBPin = 9;

int RPotentiometer = 0;
int GPotentiometer = 0;
int BPotentiometer = 0;

void setup()
{
  pinMode(analogRPin, INPUT);
  pinMode(analogGPin, INPUT);
  pinMode(analogBPin, INPUT);
  
  pinMode(digitalRPin, OUTPUT);
  pinMode(digitalGPin, OUTPUT);
  pinMode(digitalBPin, OUTPUT);
}

void loop()
{
  RPotentiometer = map(analogRead(analogRPin), 0, 1023, 0, 255);
  GPotentiometer = map(analogRead(analogGPin), 0, 1023, 0, 255);
  BPotentiometer = map(analogRead(analogBPin), 0, 1023, 0, 255);
  
  analogWrite(digitalRPin, RPotentiometer);
  analogWrite(digitalGPin, GPotentiometer);
  analogWrite(digitalBPin, BPotentiometer);
  
  delay(10);
}