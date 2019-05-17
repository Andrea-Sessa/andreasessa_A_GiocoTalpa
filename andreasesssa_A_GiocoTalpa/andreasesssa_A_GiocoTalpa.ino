#include <LiquidCrystal.h>

int button1 = 1;
int button2 = 2;
int button3 = 3;
int button4 = 4;
int button5 = 5;
int vite = 1;
int premuto;
int lasciato;
 int a = 8, b = 9, c = 10, d = 11, e = 12, f = 13;
LiquidCrystal lcd(a,b,c,d,e,f);


byte Cuore[8] = {
       B00000,
        B01010,
        B11111,
        B11111,
        B11111,
        B01110,
        B00100,
        B00000
};
 

void setup() {
  digitalWrite(button1, OUTPUT);
  digitalWrite(button2, OUTPUT);
  digitalWrite(button3, OUTPUT);
  digitalWrite(button4, OUTPUT);
  digitalWrite(button5, OUTPUT);

  lcd.begin(16, 2);

  lcd.setCursor(0,0);
  lcd.print("Quante vite? ");
  while(digitalRead(button3) == LOW)
  {
    
   ViteUtente();
   lcd.setCursor(0,1);
   lcd.print(vite);
   }
   
  // put your setup code here, to run once:
 lcd.clear();
 lcd.setCursor(0,1);
  lcd.print(vite);
lcd.createChar(0, Cuore);
lcd.setCursor(15,0);  //Cuore
  lcd.write(byte(0));
}

void ViteUtente(){
  
  if(digitalRead(button1) == HIGH){
     premuto = millis();
  if( digitalRead(button1) == LOW){
     lasciato = millis();
  }
  if(lasciato- premuto< 1000)
  {
    vite++;
    }
    else
    {
      
    }
  }
   if(digitalRead(button2) == HIGH){
  vite--;
  if(vite < 1){
    vite = 1;
  }
  lcd.setCursor(0,1);
  lcd.print(vite);
 }
}

void loop() {
  
  // put your main code here, to run repeatedly:

}
