#include <LiquidCrystal.h>

int button1 = 1;
int button2 = 2;
int button3 = 3;
int button4 = 4;
int button5 = 5;
int punti = 0;
int vite = 3;
int numero = 0;
bool inizio = false;
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
  lcd.begin(16, 2);
  digitalWrite(button1, OUTPUT);
  digitalWrite(button2, OUTPUT);
  digitalWrite(button3, OUTPUT);
  digitalWrite(button4, OUTPUT);
  digitalWrite(button5, OUTPUT);

  StartGame_BA_FR();
  
  lcd.setCursor(0,0);
}

void loop() {
  
  if(digitalRead(bottone[1]) == HIGH){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("1");
    lcd.setCursor(3,0);
    lcd.print("2");
    lcd.setCursor(5,0);
    lcd.print("3");
    lcd.setCursor(7,0);
    lcd.print("4");
    lcd.setCursor(9,0);
    lcd.print("5");
    Gennum_SS_O();
    
    inizio = true;
  }
  
  if(vite != 0 && start){
     if(digitalRead(bottone[2] == HIGH)
     { Check_IA_C(2)}
     if(digitalRead(bottone[3] == HIGH)
     { Check_IA_C(3)}
     if(digitalRead(bottone[4] == HIGH)
     { Check_IA_C(4)}
     if(digitalRead(bottone[5] == HIGH)
     { Check_IA_C(5)}
  }
  else{
    if(!start{
      StartGame_BA_FR();
    }
  }

  // put your main code here, to run repeatedly:

}
void InziodelGioco_BA_FR(){
  lcd.setCursor(0,1);
  lcd.print("Caccia Pigreco");
  lcd.setCursor(0,0);
  lcd.print("Premi start");
}

void GeneraRandom(){
  num = rand(1,6);
  delay(200);
  lcd.setCursor(posPI[num - 1], 1);
  lcd.print("*");
  delay(200);
  lcd.setCursor(posPI[num - 1], 1);
  lcd.print(" ");
}

void Check_IA_C(int num){
  if(num == numero){
    punti++;
    AggiungiPunti();
    if(punti%15 == 0){
      vite++;
    }
    GeneraRandom();
  }else{
    vite--
    if(vite == 0){
      inizio = false;
    }
  }
}

void AggiungiVite(){
  lcd.setCursor(11,0);
  lcd.print("V");
  lcd.setCursor(15,0);
  lcd.print(vite);
}

void AggiungiPunti(){
  lcd.setCursor(11,1);
  lcd.print("P");
  lcd.setCursor(15,1);
  lcd.print(punti);
}
