int pinoLED = 5;
int numAleatorio;

void setup()
{
  Serial.begin(9600);
  pinMode(pinoLED, OUTPUT);  
}

void loop()
{
  numAleatorio = random(100, 1000);
  
  digitalWrite(pinoLED, HIGH);
  delay(numAleatorio);
  digitalWrite(pinoLED, LOW);
  delay(numAleatorio);  

  Serial.println(numAleatorio); //onde o número está sendo gerado?
}
