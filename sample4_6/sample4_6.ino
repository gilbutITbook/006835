void setup(){
  pinMode(2, INPUT_PULLUP); // 택트 스위치를 D2에 연결
  pinMode(13,OUTPUT);
}
boolean sw=false;    // LED를 켜고 끄는 스위치(초깃값: 끔)
void loop(){
  while(digitalRead(2)==LOW) {   // 택트 스위치가 눌렸는지 판단
    if( sw ) digitalWrite(13,LOW);
    else digitalWrite(13,HIGH);
    sw = !sw;
  }
}


