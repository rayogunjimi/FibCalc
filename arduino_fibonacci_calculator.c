#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 8, 9, 10, 11, 12);

void setup() {}

int x;
int y;

int z = 1;
int w = 0;

void loop()
{

	x = z + w;

	lcd.begin(16, 2);
	lcd.clear();
	lcd.setCursor(5, 0);
	lcd.print(x, DEC);
	delay(1000);

	y = x + w;

	lcd.begin(16, 2);
	lcd.clear();
	lcd.setCursor(5, 0);
	lcd.print(y, DEC);
	delay(1000);

	z = y + x;

	lcd.begin(16, 2);
	lcd.clear();
	lcd.setCursor(5, 0);
	lcd.print(z, DEC);
	delay(1000);

	w = z + y;

	lcd.begin(16, 2);
	lcd.clear();
	lcd.setCursor(5, 0);
	lcd.print(w, DEC);
	delay(1000);

}
