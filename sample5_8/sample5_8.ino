#define DX 12
int abc[]={262,294,330,349,392,440,494,523};    // 도레미 설정
// 톤 설정(dx: 핀 번호, hz: 주파수, tm: 밀리초 시간 단위)
void mtone(int dx, int hz, long tm) {
  long t=millis();
  long ns = 10000/hz*50;
  while(millis()-t<tm) {
    digitalWrite(dx,HIGH);
    delayMicroseconds(ns);
    digitalWrite(dx,LOW);
    delayMicroseconds(ns);
  }
}

void setup(){
  pinMode(DX,OUTPUT);    // 스피커 디지털 출력 선언
}
void loop(){
  for (int i=0; i<8; i++){
    mtone(DX,abc[i],500);
    delay(50);
  }
}

