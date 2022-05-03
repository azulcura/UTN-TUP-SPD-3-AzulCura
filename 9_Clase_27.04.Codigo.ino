int Led_Pin0= 3;
int Led_Pin1 = 6;
int Fot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
int sensorValue1= 0;
int outputValue1= 0;
int inputValue = 0;
int inputValue1 = 0;
int Int_Pin = 2;
int Int_Pin1 = 10;
int counter = 0;
int counter1 = 0;
// Limites Invierno para el led rojo
int start1 = 18;
int stop1 = 24;
// Limites Verano para el led rojo
int start2 = 20;
int stop2 = 1;
// Limites Invierno para el led verde
int start11 = 15;
int stop11 = 22;
// Limites Verano para el led verde 
int start22 = 21;
int stop22 = 3;
void setup()
{
  Serial.begin(9600);
  pinMode(Led_Pin0,OUTPUT);
  pinMode(Led_Pin1,OUTPUT);
  pinMode(Int_Pin,OUTPUT);
  pinMode(Int_Pin1,OUTPUT);
}

void loop()
{
// Lectura Digital
inputValue = digitalRead(Int_Pin);
if (inputValue == HIGH)
{
Serial.println("Led Rojo: Encendido");
digitalWrite(Led_Pin0, 1);
}
else
{
if(counter >= start1)
{
// Lectura Analógica
sensorValue = analogRead(Fot_Pin);
if(sensorValue < 500)
{
Serial.println("Led Rojo: Encendido");
digitalWrite(Led_Pin0, 1);
} else {
Serial.println("Led Rojo: Apagado");
digitalWrite(Led_Pin0, 0);
}
}
else
{
Serial.println("Led Rojo: Apagado");
digitalWrite(Led_Pin0, 0);
}
}
counter++;
Serial.print("Hora: ");
Serial.println(counter);
if (counter == 24)
{
counter =0;
}
delay(1000);
// Lectura Digital
inputValue1 = digitalRead(Int_Pin1);
if (inputValue1 == HIGH)
{
Serial.println("Led Verde: Encendido");
digitalWrite(Led_Pin1, 1);
}
else
{
if(counter1 >= start11)
{
// Lectura Analógica
sensorValue1 = analogRead(Fot_Pin);
if(sensorValue1 < 500)
{
Serial.println("Led Verde: Encendido");
digitalWrite(Led_Pin1, 1);
} else {
Serial.println("Led Verde: Apagado");
digitalWrite(Led_Pin1, 0);
}
}
else
{
Serial.println("Led Verde: Apagado");
digitalWrite(Led_Pin1, 0);
}
}
counter1++;
Serial.print("Hora: ");
Serial.println(counter1);
if (counter1 == 24)
{
counter1 =0;
}
delay(1000);
}


