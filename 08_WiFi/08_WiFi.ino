#include <M5Stack.h>
#include <WiFi.h>

const char ssid[] = "****";       // ルーターのSSID
const char password[] = "****";   // ルーターのパスワード

void setup() {
  M5.begin();           // M5Stackの初期化
  M5.Power.begin();     // M5Stackの電源の初期化

  Serial.begin(115200); // シリアルの初期化

  WiFi.begin(ssid, password);   // WiFiの初期化と接続
  
  while(WiFi.status() != WL_CONNECTED) {  // WiFi接続状態を取得し、接続するまで待つ
    delay(500); 
    Serial.print("."); 
  }  
  Serial.println("");
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());         // 自身のIPアドレスを表示 
}

void loop() {
}
