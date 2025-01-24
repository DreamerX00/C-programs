// C++ code
//
int green = 5;

void setup()
{
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);
}