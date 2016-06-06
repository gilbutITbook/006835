#define PIN A0  // 송수신 핀
#define CTM 10  // HIGH인 시간(μ초)
void setup() {
  Serial.begin (9600);
  pinMode(A1,OUTPUT);     // A1 핀을 전원(5V)으로 설정
  digitalWrite(A1,HIGH);
  pinMode(A2,OUTPUT);     // A2 핀을 GND로 설정
  digitalWrite(A2,LOW);
}
void loop() {
  int dur;    // 시간 차(μ초)
  float dis;  // 거리(cm)
  pinMode(PIN,OUTPUT);
  digitalWrite(PIN, HIGH);
  delayMicroseconds(CTM);
  digitalWrite(PIN, LOW);
  pinMode(PIN,INPUT);
  dur = pulseIn(PIN, HIGH); // HIGH가 되기까지 걸리는 시간을 측정
  dis  = (float)dur*0.017;
  Serial.print(dis);
  Serial.println(" cm");
  delay(200);
}

