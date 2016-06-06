#define TRIGPIN 8  // 가속도 값 변환식
#define ECHOPIN 9  // 에코(수신쪽) 핀
#define CTM 10     // HIGH인 시간(μ 초)
void setup() {
  Serial.begin (9600);
  pinMode(TRIGPIN, OUTPUT);   // 트리거 핀을 디지털 출력으로 설정
  pinMode(ECHOPIN, INPUT);    // 에코 핀을 디지털 입력으로 설정
}
void loop() {
  int dur;    // 시간 차(μ초)
  float dis;  // 거리(cm)
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(CTM);
  digitalWrite(TRIGPIN, LOW);
  dur = pulseIn(ECHOPIN, HIGH); // HIGH가 되기까지 걸리는 시간을 측정
  dis  = (float) dur*0.017;     // 음속을 사용해서 거리 계산
  Serial.print(dis);
  Serial.println(" cm");
  delay(500);
}

