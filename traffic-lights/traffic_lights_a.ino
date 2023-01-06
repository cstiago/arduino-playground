const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;

const int buttonPin = 10;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, OUTPUT);
}

void loop()
{
  digitalWrite(greenPin, HIGH);
  
  delay(5000);
  
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  
  delay(2000);
  
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  
  delay(5000);
  
  digitalWrite(redPin, LOW);
  
  delay(10);
}