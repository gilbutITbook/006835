void setup() {
}
byte n = 5;
void loop() {
  for (int x =0; x<n; x++) {
    analogWrite(9,x*255/n); // PWM을 사용해서 아날로그 출력
    delay(1000);
  }
}

