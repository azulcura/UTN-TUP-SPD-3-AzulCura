const int DO = 261;
const int RE = 294;
const int MI = 329;
const int FA = 349; 
const int SOL = 391;
const int SOL_SOSTENIDO = 415;
const int LA = 440;
const int LA_SOSTENIDO = 455;
const int SI = 466;
const int DO_ALTO = 523;
const int DO_SOSTENIDO_ALTO = 622;
const int RE_ALTO = 587;
const int RE_SOSTENIDO_ALTO = 622;
const int MI_ALTO = 659;
const int FA_ALTO = 698;
const int FA_SOSTENIDO_ALTO = 740;
const int SOL_ALTO = 784;
const int SOL_SOSTENIDO_ALTO = 830;
const int LA_ALTO = 880;

const int buzzerPin = 4;


void setup()
{
  //setup pin modes
  pinMode (buzzerPin, OUTPUT);
}
  
void loop()
{

  //Play first section
  firstSection();
  
  //Play second section
  secondSection();
  
  //Variant 1
  beep(FA, 250);
  beep(SOL_SOSTENIDO, 500);
  beep(FA, 350);
  beep(LA, 125);
  beep(DO_ALTO, 500);
  beep(DO, 375);
  beep(DO_ALTO, 125);
  beep(MI_ALTO, 650);
  
  delay(500);
  
  //Repeat Second section 
  secondSection();
  
  //Variant  2
  beep(FA, 250);
  beep(SOL_SOSTENIDO, 500);
  beep(FA, 375);
  beep(DO_ALTO, 125);
  beep(LA, 500);
  beep(FA, 375);
  beep(DO_ALTO, 125);
  beep(LA, 650);
  
  delay(650);
}
 
void beep(int note, int duration)
{
  tone(buzzerPin, note, duration);
  delay(duration);
  //Stop tone on buzzerPin
  noTone(buzzerPin);
  delay(50);
  
}
  
void firstSection()
{
  beep(LA, 500);
  beep(LA, 500);
  beep(LA, 500);
  beep(FA, 350);
  beep(DO_ALTO, 150);
  beep(LA, 500);
  beep(FA, 350);
  beep(DO_ALTO, 150);
  beep(LA, 650);
  
  delay(500);
  
  beep(MI_ALTO, 500);
  beep(MI_ALTO, 500);
  beep(MI_ALTO, 500);
  beep(FA_ALTO, 350);
  beep(DO_ALTO, 150);
  beep(SOL_SOSTENIDO, 500);
  beep(FA, 350);
  beep(DO_ALTO,150);
  beep(LA, 650);

  delay(500);
}
  
void secondSection()
{
  beep(LA_ALTO, 500);
  beep(LA,300);
  beep(LA, 150);
  beep(LA_ALTO, 500);
  beep(SOL_SOSTENIDO_ALTO, 325);
  beep(SOL_ALTO, 175);
  beep(FA_SOSTENIDO_ALTO, 125);
  beep(FA_ALTO, 125);
  beep(FA_SOSTENIDO_ALTO, 250);
  
  delay(325);
  
  beep(LA_SOSTENIDO, 250);
  beep(RE_SOSTENIDO_ALTO, 500);
  beep(RE_ALTO, 325);
  beep(DO_SOSTENIDO_ALTO, 175);
  beep(DO_ALTO, 125);
  beep(SI, 125);
  beep(DO_ALTO, 250);
  
  delay(350);
} 
 