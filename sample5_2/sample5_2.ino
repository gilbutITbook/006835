void setup() {
}
void loop() {
  for (int x =0; x<256; x++) {
    analogWrite(9,x); // PWM을 사용해서 아날로그 출력
    delay(10);
  }
  for(int x=255; x>=0; x--) {
    analogWrite(9,x); // PWM을 사용해서 아날로그 출력
    delay(10);
  }
}

