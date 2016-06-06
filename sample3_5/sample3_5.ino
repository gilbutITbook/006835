void setup() {                
  Serial.begin(9600); // 시리얼 통신 속도 설정     
}
void loop() {
  static int i=0;       // 고정형 i 선언 (초깃값 = 0)
  Serial.println(i++); // i 출력 후 1 증가
  delay(1000);
}


