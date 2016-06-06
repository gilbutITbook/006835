void setup() {
  pinMode(13, OUTPUT);   // D13을 디지털 출력으로 설정
}	

void loop() {
  for(int x=0; x<10; x++) {
    for(int i=0; i<10; i++) {
      digitalWrite(13, HIGH);     // LED를 켬
      delay(x);                   // 서서히 길게
      digitalWrite(13, LOW);      // LED를 끔
      delay(9-x);                 // 서서히 짧게
    }
  } 
}

