int pinoLed = 5;

void setup()
{
  pinMode(pinoLed, OUTPUT);
}

void loop()
{
  digitalWrite(pinoLed, HIGH);
  delay(500);
  
  digitalWrite(pinoLed, LOW);
  delay(500);  
}
