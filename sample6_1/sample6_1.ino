void setup() {
  Serial.begin(9600);  
}
void loop() {
  int val = analogRead(A0);
  float cel = (float)val*500.0/1024.0-60.0;  // 온도(섭씨 단위 ℃) 계산
  Serial.print ( "Celsius = "); 
  Serial.print ( cel );  
  Serial.print ( " / Fahrenhit =");
  Serial.println ( (cel * 9)/ 5 + 32 ) ;    // 온도(화씨 단위 °F) 계산
  delay(1000);                   
}

