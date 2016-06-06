void setup(){
  Serial.begin(9600); // Arduino No2와의 통신 속도 설정
  pinMode(A0, OUTPUT); // A0에 온도 센서 GND 핀 설정
  digitalWrite(A0,LOW);
  pinMode(A2, OUTPUT); // A2에 온도 센서 5V 핀 설정
  digitalWrite(A2,HIGH);
}
void loop() {
  float cel = ((float)analogRead(A1)/1023.0)*487.0-60.0;  // A1에서 온도 센서 값 얻음
  char sc[25];
  sprintf(sc, "Arduino No1 : %d.%d C", (int)cel, (int)(cel*10)%10);
  Serial.println(sc);   // 온도 센서를 포함한 문자열을 시리얼 통신으로 송신
  delay(500);
}

