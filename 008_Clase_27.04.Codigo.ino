int Led_Pin0= 3;
int Led_Pin1 = 6;
int Led_Pin2 = 10;
int Fot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
int sensorValue1= 0;
int outputValue1= 0;
int sensorValue2=0;
int outputValue2= 0;

void setup()
{
  Serial.begin(9600);
  pinMode(Led_Pin0,OUTPUT);
  pinMode(Led_Pin1,OUTPUT);
  pinMode(Led_Pin2,OUTPUT);
}

void loop()
{
  digitalWrite(Led_Pin0,HIGH);
  sensorValue = analogRead(Fot_Pin);
  outputValue = map(sensorValue,0, 1023, 0, 255);
  analogWrite(Led_Pin0,outputValue);
 
  delay(500);
  digitalWrite(Led_Pin0,LOW);
  delay(250);
  digitalWrite(Led_Pin1,HIGH);
  sensorValue1= analogRead(Fot_Pin);
  outputValue1= map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin1,outputValue);
  
  delay(500);
  digitalWrite(Led_Pin1,LOW);
  delay(250);
  digitalWrite(Led_Pin2,HIGH);
  sensorValue2= analogRead(Fot_Pin);
  outputValue2= map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_Pin2,outputValue);
  delay(500);
  digitalWrite(Led_Pin2,LOW);
  Serial.print("Lectura: ");
  Serial.println(sensorValue);
  Serial.print("Mapeado: ");
  Serial.println(outputValue);
  Serial.print("Lectura: ");
  Serial.println(sensorValue);
  Serial.print("Mapeado: ");
  Serial.println(outputValue);
  Serial.print("Lectura: ");
  Serial.println(sensorValue);
  Serial.print("Mapeado: ");
  Serial.println(outputValue);
 
}
  