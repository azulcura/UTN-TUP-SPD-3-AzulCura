
#include <IRremote.h>
int RECV_PIN = 11;
int IRData = 0;
int Led_Pin = 4;
int Led_Pin1 = 5;
int Led_Pin2 = 8;
int Led_Status = 0;
int Rel_Pin = 2;
int Rel_Status = 0;
bool test_mode = true;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
Serial.begin(9600);
pinMode(Led_Pin, OUTPUT);
pinMode(Led_Pin1, OUTPUT);
pinMode(Led_Pin2, OUTPUT);
irrecv.enableIRIn();
}
void loop()
{
if (irrecv.decode(&results))
{
// Mostrar Lectura
IRData = results.value;
irrecv.resume();
// Ver Valores
if (test_mode == true)
{
Serial.print("Datos: ");
Serial.print(IRData, HEX);
Serial.print(" {");
Serial.print(IRData);
Serial.println("}");
}
switch (IRData)
{
case 2295:
if (Led_Status == 0)
{
Serial.println("LedS Encendidos");
digitalWrite(Led_Pin, 1);
digitalWrite(Led_Pin1, 1);
digitalWrite(Led_Pin2, 1);
Led_Status = 1;
}
else
{
Serial.println("Leds Apagados");
digitalWrite(Led_Pin, 0);
digitalWrite(Led_Pin1, 0);
digitalWrite(Led_Pin2, 0);
Led_Status = 0;
}
break;
case -30601:
if (Rel_Status == 0)
{
Serial.println("Motor Encendido");
digitalWrite(Rel_Pin, 1);
Rel_Status = 1;
}
else
{
Serial.println("Motor Apagado");
digitalWrite(Rel_Pin, 0);
Rel_Status = 0;
}
break;
case 18615:
Serial.println("Boton3");
break;
default:
Serial.println("Boton No Permitido");
}
}
}