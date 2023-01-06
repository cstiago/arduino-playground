const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

const int min = 0;
const int max = 255;
const int interval = 10; // Interval time (milliseconds)

int i = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  digitalWrite(redPin, HIGH);
  
  for (i = min; i <= max; i += 1)
  {
    analogWrite(greenPin, i);
    delay(interval);
  }
  
  for (i = max; i >= min; i -= 1)
  { 
    analogWrite(redPin, i);
    delay(interval);
  }
  
  for (i = min; i <= max; i += 1)
  {
    analogWrite(bluePin, i);
    delay(interval);
  }
  
  for (i = max; i >= min; i -= 1)
  {
    analogWrite(greenPin, i);
    delay(interval);
  }
  
  for (i = min; i <= max; i += 1)
  { 
    analogWrite(redPin, i);
    delay(interval);
  }
  
  for (i = max; i >= min; i -= 1)
  {
    analogWrite(bluePin, i);
  }
  
  delay(10);
}