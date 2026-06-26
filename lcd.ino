#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("RAILWAY INFO");

  lcd.setCursor(0, 1);
  lcd.print("WELCOME");

  delay(5000);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("PLATFORM NO:7");

  lcd.setCursor(0, 1);
  lcd.print("TRAIN ARRIVAL");
}

void loop()
{
}