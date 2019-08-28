int pinoBotao = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(pinoBotao, INPUT);
}

void loop()
{
  int estadoBotao = digitalRead(pinoBotao);
  
  Serial.println(estadoBotao);
}
