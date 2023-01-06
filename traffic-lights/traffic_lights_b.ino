const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;
const int buttonPin = 10;

byte state;
int option = 0;
int before = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, OUTPUT);
}

void loop()
{
  state = digitalRead(buttonPin);

  if (state == HIGH && option == before) {
    if (option < 2)
      option++;
    else
    option = 0;
  }
  else if (state == LOW && option != before)
    before = option;
  
  switch (option) {
    case 0:
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      break;
    case 1:
      digitalWrite(greenPin, LOW);
      digitalWrite(yellowPin, HIGH);
      break;
    case 2:
      digitalWrite(yellowPin, LOW);
      digitalWrite(redPin, HIGH);
      break;
  }
  
  delay(10);
}