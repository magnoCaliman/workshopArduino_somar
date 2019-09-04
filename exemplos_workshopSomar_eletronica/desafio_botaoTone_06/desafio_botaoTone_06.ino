int pinoBotao = 5;
int pinoColuna = 3;
int freqBase = 100;
int durSom = 90;
int tempoDelay = 100;

void setup()
{
  pinMode(pinoBotao, INPUT);
}

void loop()
{
  int estadoBotao = digitalRead(pinoBotao);

  tone(pinoColuna, freqBase, durSom);
  delay(tempoDelay);
  tone(pinoColuna, freqBase + 100, durSom);
  delay(tempoDelay);
  tone(pinoColuna, freqBase + 200, durSom);
  delay(tempoDelay);
  tone(pinoColuna, freqBase + 300, durSom);
  delay(tempoDelay);

  if (estadoBotao == HIGH)
  {
    freqBase = random(100, 800);
  }
}
