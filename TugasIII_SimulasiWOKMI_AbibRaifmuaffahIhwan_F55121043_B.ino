// Abib Raifmuaffah Ihwan
// F55121043
// Kelas B

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(100, 5);
  String a;
  a = "    Hi Abib";
  lcd.print(a);
}


void loop() {
  
}