int pinoColuna = 7;

void setup()
{
  
}

void loop()
{
  tone(pinoColuna, 100, 90);
  delay(random(100, 1000));
  tone(pinoColuna, 200, 90);
  delay(random(100, 1000));
  tone(pinoColuna, 300, 90);
  delay(random(100, 1000));
  tone(pinoColuna, 400, 90);
  delay(random(100, 1000));
}
