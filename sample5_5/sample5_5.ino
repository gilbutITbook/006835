void setup() {
  pinMode(13, OUTPUT);   // D13을 디지털 출력으로 설정
}		
void loop() {
  digitalWrite(13, HIGH);     // LED를 켬
  delay(8);                   // 8밀리초 대기
  digitalWrite(13, LOW);      // LED를 끔
  delay(2);                   // 2밀리초 대기
}

