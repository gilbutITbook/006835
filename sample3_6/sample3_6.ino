void setup() {                
  Serial.begin(9600); // 시리얼 통신 속도 설정   
}
void loop() {
  char ch = Serial.read(); // 키보드에서 읽어 들임
  switch( ch ) { 
  case 'a': 
    Serial.print('A');  // 소문자 a를 대문자로 바꾸어 표시
    break;
  case 'b':
    Serial.print('B');  // 소문자 b를 대문자로 바꾸어 표시
    break;
  }
}


