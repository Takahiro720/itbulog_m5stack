#include <M5Stack.h>
#include <WiFi.h>

void setup() {
  M5.begin();           // M5Stackの初期化
  M5.Power.begin();     // M5Stackの電源の初期化

  Serial.begin(115200); // シリアルの初期化

  WiFi.mode(WIFI_STA);  // STAモードに設定
  WiFi.begin();         // WiFiの接続 

  int i;
  for (i = 0; i < 10; i++) {
    if (WiFi.status() == WL_CONNECTED) break;
    Serial.print('.');
    delay(500);
  }

  // 接続失敗したら、SmartConfigを実行
  if (i == 10) {
    WiFi.mode(WIFI_AP_STA);     // AP+STAモードに設定
    WiFi.beginSmartConfig();    // SmartConfigをスタート
  
    // スマホからのアクセスを待つ
    Serial.println("");
    Serial.println("Waiting for SmartConfig.");
    while (!WiFi.smartConfigDone()) {
      delay(500);
      Serial.print(".");
    }
    // スマホからSSIDとパスワードが送られてきた
    Serial.println("");
    Serial.println("SmartConfig received.");

    while(WiFi.status() != WL_CONNECTED) {  // WiFi接続状態を取得し、接続するまで待つ
      delay(500); 
      Serial.print("."); 
    }  
  }

  Serial.println("");
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());         // 自身のIPアドレスを表示 
}

void loop() {
}
