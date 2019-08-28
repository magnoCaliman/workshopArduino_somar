int tempoDelay = 180;
int canalTone = 7

void setup()
{

}

void loop()
{
  tone(canalTone, 65);
  delay(tempoDelay);
  tone(5, 82);
  delay(tempoDelay);
  tone(5, 98);
  delay(tempoDelay);
  tone(5, 123);
  delay(tempoDelay);
  tone(5, 130);
  delay(tempoDelay);
  tone(5, 123);
  delay(tempoDelay);
  tone(5, 98);
  delay(tempoDelay);
  tone(5, 82);
  delay(tempoDelay);
}
