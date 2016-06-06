void setup(){
  pinMode(2, INPUT_PULLUP);  // 택트 스위치를 D2에 연결
  pinMode(13,OUTPUT);        // 아두이노의 LED(D13) 설정
}
boolean sw=false;

void loop(){
  while( !chtsw(2) ) { // 스위치가 눌린 상태 확인
    if( sw ) digitalWrite(13,LOW);
    else digitalWrite(13,HIGH);
    sw = !sw;          // LED의 상태를 바꿈
  }
  while( chtsw(2) );  // 스위치가 떨어진 상태
}

boolean chtsw(byte dx) {  // 채터링을 고려한 택트 스위치 함수
  boolean tsw = digitalRead(dx);
  while( tsw == digitalRead(dx) ) ;
  delay(300); 
  return !tsw;  // 눌린 상태는 false(LOW), 떨어진 상태는 true(HIGH)
}

