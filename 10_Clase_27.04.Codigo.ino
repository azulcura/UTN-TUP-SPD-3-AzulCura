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
int sensorPin = 0;
int sensorPin1 = 0;
// Variables de Temperatura
int readValue = 0;
int lastValue = 1;
int tempPin = A1;
float voltsValue;
float tempValue;
int counter = 0;
int start = 0;
int stop = 0;
int readValue1 = 0;
int lastValue1 = 1;
int tempPin1 = A2;
float voltsValue1;
float tempValue1;
int counter1 = 0;
int start11 = 0;
int stop11 = 0;
// Limites Invierno
int start1 = 18;
int stop1 = 24;
// Limites Verano 
int start2 = 20;
int stop2 = 1;
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
// Lectura Temperatura
readValue = analogRead(sensorPin);
lastValue = readValue;
voltsValue = 5.0 / 1024 * readValue;
tempValue = voltsValue * 100 - 50;
if( tempValue < 20 ){
start = start1;
stop = stop1;
}
else
{
start = start2;
stop = stop2;
}
//
// Lectura Luz
if(counter >= start)
{
// Lectura Analógica
sensorValue = analogRead(Fot_Pin);
if(sensorValue < 500)
{
Serial.println("Led rojo: Encendido");
digitalWrite(Led_Pin0, 1);
} else {
Serial.println("Led rojo: Apagado");
digitalWrite(Led_Pin0, 0);
}
}
else
{
Serial.println("Led rojo: Apagado");
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
Serial.println("Led amarillo: Encendido");
digitalWrite(Led_Pin1, 1);
}
else
{
// Lectura Temperatura
readValue1 = analogRead(sensorPin1);
lastValue1 = readValue1;
voltsValue1 = 5.0 / 1024 * readValue1;
tempValue1 = voltsValue1 * 100 - 50;
if( tempValue1 < 20 ){
start11 = start1;
stop11= stop1;
}
else
{
start11 = start2;
stop11 = stop2;
}
//
// Lectura Luz
if(counter1 >= start11)
{
// Lectura Analógica
sensorValue1 = analogRead(Fot_Pin);
if(sensorValue1 < 500)
{
Serial.println("Led amarillo: Encendido");
digitalWrite(Led_Pin1, 1);
} else {
Serial.println("Led amarillo: Apagado");
digitalWrite(Led_Pin1, 0);
}
}
else
{
Serial.println("Led amarillo: Apagado");
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
