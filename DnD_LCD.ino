// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("LCD Key Shield");
  lcd.setCursor(0,1);
  lcd.print("Press Key:");
}

void loop() {
  int x;
  x = analogRead (0);
  lcd.setCursor(0,0);
  if (x < 60) {
    lcd.print ("HP: 72  HEALTHY");
    lcd.setCursor(0,1);
    lcd.print ("AC:26TO:12FF:25 ");
  }
  else if (x < 200) {
    lcd.print ("KNOWLEDGE (INT) ");
    lcd.setCursor(0,1);
    lcd.print ("RELIGION +21    ");
  }
  else if (x < 400){
    lcd.print ("LEVEL 0 DIVINE  ");
    lcd.setCursor(0,1);
    lcd.print ("NO DOMAIN 6 SLOT");
  }
  else if (x < 600){
    lcd.print ("LEVEL 1 DIVINE  ");
    lcd.setCursor(0,1);
    lcd.print ("D MAGICAL WEAPON");
  }
  else if (x < 800){
    lcd.print ("1 MAGICAL WEAPON");
    lcd.setCursor(0,1);
    lcd.print (" +1 ENCHANTMENT ");
  }
}
