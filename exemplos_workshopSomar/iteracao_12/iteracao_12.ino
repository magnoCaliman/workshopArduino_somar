int pinoColuna = 7;
int freq = 31;

void setup()
{

}

void loop()
{
  tone(pinoColuna, freq);

  freq = freq + 1;

  delay(500);
}
