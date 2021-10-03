#include <M5Stack.h>

int gCnt = 0;

void setup() {
  M5.begin();           // M5Stackの初期化
  M5.Power.begin();     // M5Stackの電源の初期化

  Serial.begin(115200); // シリアルの初期化

  Serial.print("Hello World！\n"); // Hello World！を表示
}

void loop() {
  delay(1000);                // 1秒待つ

  gCnt++;                     // カウントアップ
  Serial.println(gCnt, DEC);  // カウント数をシリアルモニタへ出力
}
