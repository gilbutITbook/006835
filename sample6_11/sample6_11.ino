#define DUR 200   // 소리의 길이 

float Vcc=5.0;    // 거리 센서 외부 전원
// 음계 주파수(Hz) 도레미...
int fq[]={262,294,330,349,392,440,494,523}; 

void telmin(int dist) {     // 테르민
  int i=dist/10; if(i>7) i=7;
  tone(12,fq[i],DUR);  // D12와 GND에 꽂은 압전 스피커
  delay(DUR);
}

void setup() { }

void loop() {
 float Vout = Vcc*analogRead(0)/1023; // A0에서 출력되는 전압
 float cm = 26.549*pow(Vout,-1.2091);
 telmin((int)cm);
}

