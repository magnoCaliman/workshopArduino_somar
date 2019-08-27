int pinoColuna = 7;
int tempoDelay = 100;
int durSomLongo = 150;
int durSomCurto = 40;

void setup()
{

}

void loop()
{
  int dado = random(0, 10);

  if (dado < 5)
  {
    tone(pinoColuna, 100, durSomLongo);
    delay(tempoDelay);
    tone(pinoColuna, 150, durSomLongo);
    delay(tempoDelay);
    tone(pinoColuna, 180, durSomLongo);
    delay(tempoDelay);
    tone(pinoColuna, 120, durSomLongo);
    delay(tempoDelay);
  }

  if (dado > 5)
  {
    tone(pinoColuna, 300, durSomCurto);
    delay(tempoDelay);
    tone(pinoColuna, 350, durSomCurto);
    delay(tempoDelay);
    tone(pinoColuna, 480, durSomCurto);
    delay(tempoDelay);
    tone(pinoColuna, 450, durSomCurto);
    delay(tempoDelay);
  }
}
