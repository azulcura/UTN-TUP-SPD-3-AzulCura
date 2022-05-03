int Led_Pin = 2;
int Led_Pin1= 3;
int Pot_Pin = A0;
int Pot_Pin1 =  A5;
int sensorValue = 0;
int sensorValue1 = 0; 
int outputValue = 0;
int outputValue1 = 0;
void setup()
{
  pinMode(Led_Pin, OUTPUT);
  pinMode(Led_Pin1, OUTPUT);
  Test_Led();
}
void loop()
{
  sensorValue = analogRead(Pot_Pin);
  sensorValue1 = analogRead(Pot_Pin1);
  outputValue=map(sensorValue,0,1023,255,0);
  outputValue1=map(sensorValue1,0, 1023, 0, 255);
  analogWrite(Led_Pin,outputValue);
  analogWrite(Led_Pin1, outputValue1);
}
void Test_Led()
{
  digitalWrite(Led_Pin, HIGH);
  delay(1000);
  digitalWrite(Led_Pin, LOW);
  delay(1000);
  digitalWrite(Led_Pin1,HIGH);
  delay(1000);
  digitalWrite(Led_Pin1,LOW);
  delay(1000);
  digitalWrite(Led_Pin, HIGH);
  delay(1000);
  digitalWrite(Led_Pin, LOW);
  delay(1000);
  digitalWrite(Led_Pin1,HIGH);
  delay(1000);
  digitalWrite(Led_Pin1,LOW);
  delay(1000);
  digitalWrite(Led_Pin,HIGH);
  delay(1000);
  digitalWrite(Led_Pin1,LOW);
}
  