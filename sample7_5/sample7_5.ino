void setup(){
  pinMode(2,INPUT_PULLUP); // 인터럽트 핀(택트 스위치)
  pinMode(13,OUTPUT); // 아두이노의 LED
  attachInterrupt(0,buzzer,CHANGE); // 인터럽트 처리 함수
}
void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
void buzzer(){
  pinMode(9,OUTPUT);
  tone(9,255,1000);
}

