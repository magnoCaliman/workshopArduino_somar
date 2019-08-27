int pinoColuna = 7;
int tempoDelay = 100;
int durSom = 90;
int randMax = 55;

void setup()
{

}

void loop()
{
  int freqSobe = random(50, randMax);
  
  tone(pinoColuna, freqSobe, durSom);
  delay(tempoDelay);

  randMax = randMax + 5;

  if (randMax > 500)
  {
    randMax = 55;  
  }
}
