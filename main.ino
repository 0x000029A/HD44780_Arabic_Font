#include <LiquidCrystal.h>
#include "ArabicFont.h"

LiquidCrystal lcd(2, 8, 3, 4, 5, 6, 7);

void printAR(String arword);

void setup() {
  lcd.begin(20, 4);
  lcd.home();
  printAR("mRhbA");
}

void loop() {}

void printAR(String arword) {
  for(int i = 0; i < arword.length(); i++) {
    for (int j = 0; j < 55; j++) {
      if (int(arword[i]) == arFontMapping[j][0]) {
        lcd.createChar(i, arFont[arFontMapping[j][1]]);
        lcd.setCursor(19 - i, 0);
        lcd.print(char(i));
      }
    }
  }
}
