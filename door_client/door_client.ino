#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    lcd.init();
    lcd.backlight();

    lcd.clear();
}

void loop() {
    lcd.setCursor(3, 0);
    lcd.print("Tim Wende");
}
