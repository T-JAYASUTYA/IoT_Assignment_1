#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.begin();
}

void loop()
{

lcd.setCursor(2,0);
lcd.print("I'm powered by");
lcd.setCursor(0,1);
lcd.print("Arduino!");

}
