float lectura;
float frecuencia;
int Frecmin=300;
int FrecMax =1200;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode (A0, INPUT);
}

void loop()
{
  lectura = analogRead(A0);
  frecuencia= map(lectura,0,1023,Frecmin,FrecMax);
  tone(0, frecuencia);
   // delay(300); // Wait for 1000 millisecond(s)
}