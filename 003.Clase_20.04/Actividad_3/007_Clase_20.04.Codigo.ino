
int Led_Pin1= 3;
int Led_Pin2= 5;
int Pot_Pin1 =  A5;
int Int_Pin = 2;
int Int_Pin1 = 11;
int inputValue= 0;
int inputValue1= 0;
int sensorValue = 0;
int sensorValue1 = 0;
int outputValue = 0;
int outputValue1 = 0;

void setup()
{
  pinMode(Led_Pin1, OUTPUT);
  pinMode(Int_Pin, INPUT);
  pinMode(Led_Pin2, OUTPUT);
  pinMode(Int_Pin1, INPUT);
  Test_Led();
}
void loop()
{
  inputValue = digitalRead(Int_Pin);
 if (inputValue == HIGH)
 { for(int fadeValue=0; fadeValue <=255; fadeValue +=5){
    analogWrite(Led_Pin1, fadeValue);
    delay(20);
   }
   for(int fadeValue=255; fadeValue <=0; fadeValue -=5){
    analogWrite(Led_Pin1, fadeValue);
    delay(20);
   }
 }
  else
  {
    sensorValue = analogRead(Pot_Pin1);
    outputValue = map(sensorValue,0,1023,0,255);
    analogWrite(Led_Pin1, outputValue);
  }
 
  inputValue1 = digitalRead(Int_Pin1);
  if (inputValue1 == HIGH)
 { for(int fadeValue=0; fadeValue <=255; fadeValue +=5){
    analogWrite(Led_Pin2, fadeValue);
    delay(20);
   }
 
   for(int fadeValue=255; fadeValue <=0; fadeValue -=5){
    analogWrite(Led_Pin2, fadeValue);
    delay(20);
   }
 }
   else
  {
    sensorValue1 = analogRead(Pot_Pin1);
    outputValue1 = map(sensorValue,0,1023,0,255);
    analogWrite(Led_Pin2, outputValue);
  }
 }
  void Test_Led()
{
  digitalWrite(Led_Pin1, HIGH); 
  delay(1000);
  digitalWrite(Led_Pin1, LOW);
  delay(1000); 
  digitalWrite(Led_Pin2, HIGH); 
  delay(1000);
  digitalWrite(Led_Pin2, LOW);
  delay(1000); 
  digitalWrite(Led_Pin1, HIGH);
  delay(1000); 
  digitalWrite(Led_Pin1, LOW); 
  delay(1000); 
  digitalWrite(Led_Pin2, HIGH); 
  delay(1000);
  digitalWrite(Led_Pin2, LOW);
  delay(1000); 
  digitalWrite(Led_Pin1, HIGH);
  delay(1000);
  digitalWrite(Led_Pin1, LOW); 
  digitalWrite(Led_Pin2, HIGH); 
  delay(1000);
  digitalWrite(Led_Pin2, LOW);
  delay(1000); 
  }

  
  
   
    

  
     
