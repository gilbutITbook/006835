#include <SoftwareSerial.h>        // 소프트웨어 시리얼 통신 라이브러리 설정
SoftwareSerial No2Arduino (2, 3);  // 수신 RX: D2, 송신 TX: D3 설정

void setup(){
  No2Arduino.begin(9600);               // 아두이노 No1과의 통신 속도 설정
  Serial.begin(9600);                  // 시리얼 모니터에 표시할 통신 속도 설정
  Serial.println("Arduino No2 print"); // 아두이노 No2에서 온 송신 표기 문자
}
void loop(){
  if(No2Arduino.available()) 
    Serial.write(No2Arduino.read()); // 아두이노 No2에서 수신한 문자를 시리얼 모니터에 표시
}



