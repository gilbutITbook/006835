void setup(){
  pinMode(2, INPUT_PULLUP);  // 택트 스위치 설정 D2
  pinMode(13,OUTPUT);        // 아두이노에 있는 LED(D13) 설정
}
void loop(){
  if( digitalRead(2)==HIGH)  digitalWrite(13,LOW); // 택트 스위치 OFF
  else digitalWrite(13,HIGH);                      // 택트 스위치 ON
}


