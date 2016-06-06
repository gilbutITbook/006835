void setup() { }
void loop() {
   int v = analogRead(A4);      // 가변저항 값을 읽음
   analogWrite(9,v/1023.0*255); // PWM을 사용하는 아날로그 출력
   delay(100);
}

