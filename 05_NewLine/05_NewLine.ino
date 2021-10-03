#include <M5Stack.h>

void setup() {
  M5.begin();           // M5Stackの初期化
  M5.Power.begin();       // M5Stackの電源の初期化

  M5.Lcd.setCursor(50, 100);      // カーソル位置を設定
  M5.Lcd.setTextSize(2);          // 文字サイズを設定
  M5.Lcd.println("Hello World");  // Hello Worldを表示
  M5.Lcd.print("hogehoge\n");     // hogehogeを表示
  M5.Lcd.print("1-2-3");          // 1-2-3を表示
}

void loop() {
}
