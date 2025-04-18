// 定義引腳
const int potPin = A0; // 電位器接到A0
const int ledPin = 10; // LED接到數位10（PWM輸出）

void setup() {
  pinMode(ledPin, OUTPUT); // 設定LED引腳為輸出
}

void loop() {
  int potValue = analogRead(potPin); // 讀取電位器的類比值（0-1023）
  int ledBrightness = map(potValue, 0, 1023, 0, 255); // 將值映射到PWM範圍（0-255）
  analogWrite(ledPin, ledBrightness); // 調整LED亮度
}