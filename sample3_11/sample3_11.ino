void setup(){
  Serial.begin(9600);  // 시리얼 통신 속도 설정
  int f;    // 화씨온도 변수 정의
  float c;  // 섭씨온도 변수 정의
  for( int f=0; f<100; f+=10 ) {// 화씨온도 0부터 100까지 10단위로 증가
    c = ctemp((float)f);        // 화씨온도에서 섭씨온도로 바꾸는 함수 사용
    Serial.print( f ); Serial.print(" F : ");      // 화씨온도 표시
    Serial.print( c ); Serial.println(" C");       // 섭씨온도 표시
  }
}
void loop() { }
float ctemp(int ft) {      // 화씨온도에서 섭씨온도로 바꾸는 함수
  return ( 5.0/9.0*(ft-32.0));
}



