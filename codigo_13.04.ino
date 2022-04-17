
int buttonState = 0;
int buttonState2 = 0;
void setup()
{
  pinMode(4, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(4);
  buttonState2 = digitalRead(7);
  if (buttonState == HIGH && buttonState2 == HIGH){
    digitalWrite(8, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);  
    delay(1000); 
    digitalWrite(8, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(1000); 
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(1000);}
  if (buttonState2 == HIGH && buttonState == LOW){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);}
  if (buttonState == HIGH && buttonState2 == LOW){ 
    digitalWrite(8, HIGH);
    digitalWrite(12, LOW);
    delay(250);
    digitalWrite(8, LOW);
    digitalWrite(12, HIGH);
    delay(1000);}
   else {digitalWrite(8, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);}
    
 }
