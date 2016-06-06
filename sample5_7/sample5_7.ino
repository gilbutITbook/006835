#define DX 12           // D12를 스피커로 설정
void setup()
{ pinMode(DX,OUTPUT);}  // 디지털 출력 정의
void loop()
{ 
  spkAlarm();           // 알람 함수를 호출
  delay(500);
}
void spkAlarm() {       // 알람 함수
  for(int i=0; i<10; i++) {
    digitalWrite(DX,HIGH);
    delay(2);
    digitalWrite(DX,LOW);
    delay(2);
  }
}



