void setup(){
  pinMode(2, INPUT_PULLUP);  // 기울기 센서를 D2에 연결
  pinMode(13,OUTPUT);        // 아두이노에 달린 LED(D13) 설정
}
void loop(){
  boolean sw=digitalRead(2);   // 기울기 센서 초기 설정
  while(sw == digitalRead(2)); // 기울기 센서 값이 바뀔 때까지 대기
  digitalWrite(13,HIGH);
  delay(3000);
  digitalWrite(13,LOW);
}

