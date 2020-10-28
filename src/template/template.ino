#define lamp 4
#define ldr A0
int valor = 0;
int interruptor = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(lamp, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(6,INPUT);
}

void loop()
{
  valor = analogRead(ldr);
  interruptor=digitalRead(6);
  if(valor > 350 && interruptor == LOW)
  {
  	digitalWrite(lamp,HIGH);
  }
  if(valor <= 350)
  {
  	digitalWrite(lamp,LOW);
  }
  Serial.println(valor);
}