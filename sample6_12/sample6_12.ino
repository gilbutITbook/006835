#include <Wire.h> // I2C-LCD에서 사용하는 라이브러리(필수)
void setup() { 
  pinMode(A2,OUTPUT);   // Vdd 핀
  digitalWrite(A2,HIGH);
  pinMode(A3,OUTPUT);   // GND 핀
  digitalWrite(A3,LOW);
  delay(100);   // 대기 시간 (필수)
  lcd_init();   // I2C LCD 초기화
  lcd_setCursor(0,0);       // 타이틀 문자 커서 위치 설정
  lcd_printStr("** Count"); // 첫 번째 줄 타이틀 문자열 표시
  delay(1000);
}
void loop() {
  static int i=0;       // 카운트 수
  char pr[8];           // 카운트 수를 표시할 문자열 버퍼
  lcd_setCursor(0,1);   // 카운트 수를 표시할 커서 위치 설정
  sprintf(pr," No.%4d",i++); // 카운트 수 문자열화
  lcd_printStr(pr);          // 카운트 수 표시
  delay(100);
}


