
#include <LiquidCrystal.h> 
LiquidCrystal lcd(7,6,5,4,3,2);
 
void setup(){
  lcd.begin (16,2);
}
 
void loop(){
  lcd.home();
  lcd.print ("AZUL CURA"); 
  lcd.setCursor (0,1);
  lcd.print ("          UTN ROSARIO           ");
  delay (500);
  
  for(int cont=0; cont <23; cont++){
    lcd.scrollDisplayLeft();
    delay (200); 
  }
  
  for(int cont=0; cont <23; cont++){
    lcd.scrollDisplayRight();
    delay (200); 
  }
  
}






