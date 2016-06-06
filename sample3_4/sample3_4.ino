#define LED 13            // 전처리기 #define을 사용하여 변수 LED 설정
void setup() {                
  pinMode(LED, OUTPUT);     
}
void loop() {
  digitalWrite(LED, HIGH);  // LED가 13으로 치환된다.
  delay(1000);
  digitalWrite(LED, LOW);   // LED가 13으로 치환된다.
  delay(1000); 
}


