int pinoColuna = 5;
int tempoDelay = 10;

void setup()
{
  pinMode(pinoColuna, OUTPUT);  
}

void loop()
{
  digitalWrite(pinoColuna, HIGH);
  delay(tempoDelay);

  digitalWrite(pinoColuna, LOW);
  delay(tempoDelay);

//  tempoDelay = tempoDelay + 1;
//
//  if(tempoDelay > 30)
//  {
//    tempoDelay = 10;  
//  }
}
