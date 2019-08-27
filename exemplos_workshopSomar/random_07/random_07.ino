int pinoColuna = 7;
int tempoDelay = 100;

void setup()
{
  
}

void loop()
{
  tone(pinoColuna, random(100, 500), 90);
  delay(tempoDelay);
}
