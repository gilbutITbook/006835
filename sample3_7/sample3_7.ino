void setup() {                
  Serial.begin(9600);       // 시리얼 통신 속도 설정  
  for( int i=0; i<10; i++) {
    Serial.println( i );    // i 값을 표시 후 줄 바꿈
  }
}
void loop() { }






