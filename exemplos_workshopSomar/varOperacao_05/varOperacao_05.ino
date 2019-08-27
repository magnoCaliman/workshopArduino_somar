int pinoColuna = 7;
int freqBase = 100;
int tempoDelay = 800;

void setup()
{
  
}

void loop()
{
  tone(pinoColuna, freqBase, 90);
  delay(tempoDelay);
  tone(pinoColuna, freqBase + 100, 90);
  delay(tempoDelay);
  tone(pinoColuna, freqBase + 200, 90);
  delay(tempoDelay);
  tone(pinoColuna, freqBase + 150, 90);
  delay(tempoDelay);
}
