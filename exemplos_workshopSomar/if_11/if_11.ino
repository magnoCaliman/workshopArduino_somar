int pinoColuna = 7;
int tempoDelay = 180;
int dur;

void setup()
{

}

void loop()
{
  int dado = random(0, 2);

  if (dado == 0)
  {
    dur = 40;
  }

  if (dado == 1)
  {
    dur = 180;  
  }
  
  tone(pinoColuna,65, dur);
  delay(tempoDelay);
  tone(pinoColuna,82, dur);
  delay(tempoDelay);
  tone(pinoColuna,98, dur);
  delay(tempoDelay);
  tone(pinoColuna,123, dur);
  delay(tempoDelay);
  tone(pinoColuna,130, dur);
  delay(tempoDelay);
  tone(pinoColuna,123, dur);
  delay(tempoDelay);
  tone(pinoColuna,98, dur);
  delay(tempoDelay);
  tone(pinoColuna,82, dur);
  delay(tempoDelay);
}
