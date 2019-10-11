#include <M5Stack.h>

// the setup routine runs once when M5Stack starts up
void setup() {
  
  // initialize the M5Stack object
  M5.begin();

  /*
    Power chip connected to gpio21, gpio22, I2C device
    Set battery charging voltage and current
    If used battery, please call this function in your project
  */
  M5.Power.begin();
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setCursor(0, 10);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setTextSize(3);
  M5.Lcd.printf("Happy Halloween");

  
  M5.Lcd.fillEllipse(100, 130, 15, 40, RED);
  M5.Lcd.fillEllipse(120, 130, 15, 50, RED);
  M5.Lcd.fillEllipse(140, 130, 15, 55, RED);
  M5.Lcd.fillEllipse(160, 130, 20, 60, RED);
  M5.Lcd.fillEllipse(180, 130, 15, 55, RED);
  M5.Lcd.fillEllipse(200, 130, 15, 50, RED);
  M5.Lcd.fillEllipse(220, 130, 15, 40, RED);
  M5.Lcd.fillTriangle(125, 120, 145, 120, 135, 100, BLACK);
  M5.Lcd.fillTriangle(175, 120, 195, 120, 185, 100, BLACK);
  M5.Lcd.fillTriangle(150, 140, 170, 140, 160, 120, BLACK);
  M5.Lcd.fillTriangle(150, 55, 170, 58, 155, 80, DARKGREEN);
  M5.Lcd.drawLine(130,155,190,155,BLACK);

}

// the loop routine runs over and over again forever
void loop(){
  M5.update();
}
