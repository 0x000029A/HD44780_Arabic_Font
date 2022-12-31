#include "ArabicFont.h"

void printAR(String arword) {
  for (int i = 0; i < arword.length(); i++) {
    for (int j = 0; j < 55; j++) {
      if (int(arword[i]) == arFontMapping[j][0]) {
        lcd.createChar(i, arFont[arFontMapping[j][1]]);
        lcd.setCursor(19 - i, 0);
        lcd.print(char(i));
      }
    }
  }
}
