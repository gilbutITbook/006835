void setup() { }
void loop() {
   for(int i=0; i<256; i += 5) {
     analogWrite(9,255- i);     // PWM을 사용하는 아날로그 출력
     delay(100);
   }
   delay(1000);
}

