
int Led_Pin1= 3;
int Led_Pin2= 5;
int Pot_Pin1 =  A5;
int Int_Pin = 2;
int Int_Pin1 = 11;
int inputValue= 0;
int sensorValue = 0;
int inputValue1= 0;
int sensorValue1 = 0;
void setup()
{
  pinMode(Led_Pin1, OUTPUT);
  pinMode(Int_Pin, INPUT);
  pinMode(Led_Pin2, OUTPUT);
  pinMode(Int_Pin1, INPUT);
}
void loop()
{
  inputValue = digitalRead(Int_Pin);
  if (inputValue == HIGH){
    digitalWrite(Led_Pin1, 1);}
  else
  { 
    sensorValue= analogRead(Pot_Pin1);
    if(sensorValue < 800) {
      digitalWrite(Led_Pin1, 1);
    } else {
        digitalWrite(Led_Pin1, 0);
    }
  }
   inputValue1 = digitalRead(Int_Pin1);
  if (inputValue1 == HIGH){
    digitalWrite(Led_Pin2, 1);}
  else
  { 
    sensorValue1= analogRead(Pot_Pin1);
    if(sensorValue1 <500){
      digitalWrite(Led_Pin2, 1);
   } else {
        digitalWrite(Led_Pin2, 0);
    }
  }
 }
  
     
