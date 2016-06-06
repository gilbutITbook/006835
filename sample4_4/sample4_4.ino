void setup(){
  Serial.begin(9600); 
}
void loop() {
  float vt = (float)analogRead(A0) / 1023.0 * 5.0; // 5V를 사용하는 아두이노일 때
  Serial.println(vt);
  delay(1000);
}

