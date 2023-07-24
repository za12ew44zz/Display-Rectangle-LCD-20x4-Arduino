#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x26,20,4);  

void setup()
{
  lcd.init();                      
  lcd.backlight();
  for(int i = 0;i < 20;i++){
    for(int j = 0; j < 4; j++){
      if(j == 0 || j == 3 || i == 0 || i == 19){
        lcd.setCursor(i,j);
        lcd.print("*");
      }
     
    }
 }
   

}


void loop()
{
}
