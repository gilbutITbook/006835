void setup() {
  pinMode(13,OUTPUT);
}
void loop() {
  static long tm=millis();    // 시각 초기화
  digitalWrite(13,HIGH);      // LED 켬
  while(tm+1000>millis());    // 1초 이내
  digitalWrite(13,LOW);       // LED 끔
  while(tm+2000>millis());    // 1초 이내
  tm=tm+2000;                 // 시각 재설정
}


