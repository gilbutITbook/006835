void setup(){
  Serial.begin(9600); 
}
void loop() {
 Serial.println(analogRead(A0)); // 아날로그 A0 값 표시
 delay(1000);
}


