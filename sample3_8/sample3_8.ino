
void setup() {                
  Serial.begin(9600); // 시리얼 통신 속도 설정     
  int i=2;
  do { Serial.println(i--); // do-while 안에서 1 감소
  } while(i>0);
  Serial.println("--------");
  while(i<0) {
    Serial.println(i++);    // while 안에서 1 증가
  }
  Serial.println("--end--");
}
void loop() { }


