int pinoBotao = 5;
int pinoColuna = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(pinoBotao, INPUT);
}

void loop()
{
  int estadoBotao = digitalRead(pinoBotao);

  if (estadoBotao == HIGH)
  {
    tone(pinoColuna, 100);
  }
  else
  {
    noTone(pinoColuna);    
  }
  
  Serial.println(estadoBotao);
}
