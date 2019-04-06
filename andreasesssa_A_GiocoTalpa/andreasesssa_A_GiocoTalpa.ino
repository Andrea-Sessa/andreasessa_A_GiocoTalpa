#include <LiquidCrystal.h>

int button1 = 1;
int button2 = 2;
int button3 = 3;
int button4 = 4;
int button5 = 5;
int a = 8, b = 9, c = 10, d = 11, d = 12, e = 13;
LiquidCrystal lcd = (a,b,c,d,e);
char Cuore = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(button3, OUTPUT);
  pinMode(button4, OUTPUT);
  pinMode(button5, OUTPUT);
  lcd.createChar(0, Cuore);
  lcd.begin(16,2);
  lcd.write(byte(0));
}

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
 



void loop() {
  // put your main code here, to run repeatedly:

}
