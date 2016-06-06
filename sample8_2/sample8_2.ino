void setup() {
  // A0~A3까지 아날로그 포트를 출력으로 설정
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

void loop() {
  for (int i=0; i<10; i++) {
    // 비트 연산자를 이용해 숫자를 2진수로 표현 후
    // 각 2진수 자릿수에 각 아날로그 포트를 할당
    digitalWrite(A0, i&0x1);
    digitalWrite(A1, i&0x2);
    digitalWrite(A2, i&0x4);
    digitalWrite(A3, i&0x8);
    delay(1000);
}
}
