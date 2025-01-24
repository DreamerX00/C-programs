// C++ code
//
int red = 10;
int yellow = 9;
int green = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(10000);
  digitalWrite(red, LOW);
  delay(1000);
  
  digitalWrite(yellow, HIGH);
  delay(4000);
  digitalWrite(yellow,LOW);
  
  for(int i = 0; i <= 7;i++){
    digitalWrite(yellow,HIGH);
    delay(500);
    digitalWrite(yellow,LOW);
    delay(500);
  }
  
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green,LOW);
  delay(500);
}