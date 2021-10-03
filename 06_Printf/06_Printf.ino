#include <M5Stack.h>

#define MONTH "Month:"

void setup() {
  M5.begin();           // M5Stackの初期化
  M5.Power.begin();     // M5Stackの電源の初期化

  int monthVal = 9;                         // 変数に9を設定
  M5.Lcd.setTextSize(3);                    // 文字サイズを設定
  M5.Lcd.printf("%s%02d", MONTH, monthVal); // 月を表示
}

void loop() {
}
