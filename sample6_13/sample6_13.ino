#include <Wire.h> // I2C-LCD에서 사용하는 라이브러리
#define SIGPin 8  // 초음파 거리 센서 송수신 핀
#define VCCPin 9  // 초음파 거리 센서 전원 핀
#define GNDPin 10 // 초음파 거리 센서 GND 핀
#define CTM 10    // HIGH 시간(μ초)
void setup() {
  pinMode(VCCPin,OUTPUT);     // 초음파 거리 센서 전원 설정
  digitalWrite(VCCPin,HIGH);
  pinMode(GNDPin,OUTPUT);     // 초음파 거리 센서 GND 설정
  digitalWrite(GNDPin,LOW);
  pinMode(A2,OUTPUT);         // I2C-LCD 전원 설정
  digitalWrite(A2,HIGH);
  pinMode(A3,OUTPUT);          // I2C-LCD GND 설정
  digitalWrite(A3,LOW);
  delay(100); // 대기 시간(필수)
  pinMode(13,OUTPUT); // LED 설정
  pinMode(12,OUTPUT); // 버저 설정
  lcd_init(); // I2C-LCD 초기화
  lcd_setCursor(0,0);
  lcd_printStr(" Dist ");
  delay(1000);  
}

void loop() {
  int dur;   // 시간차(μ초)
  int dis;   // 거리(cm)
  pinMode(SIGPin,OUTPUT);
  digitalWrite(SIGPin, HIGH);
  delayMicroseconds(CTM);
  digitalWrite(SIGPin, LOW);
  pinMode(SIGPin,INPUT);
  dur = pulseIn(SIGPin, HIGH); // 돌아오는 시간 계산
  dis  = (int)dur*0.017;
  char pr[8];
  sprintf(pr,"%4d cm", dis);
  lcd_setCursor(0,1);
  lcd_printStr(pr);
  if (dis<10) { tone(12,500,50); digitalWrite(13,HIGH); } // 10cm 임곗값 안에서 버저와 LED를 켬
  else { noTone(12); digitalWrite(13,LOW); }              // 그 외에는 끔
  delay(50);
}

