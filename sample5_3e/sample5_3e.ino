// 같은 소리 3개의 발생 구조
void mtone(byte dx, int hz, unsigned long tm=1000) {
   unsigned long t=millis();
   unsigned long ns=(long)500000/hz; // 10000*50
   while(millis()-t<tm) {
     digitalWrite(dx,HIGH);
     delayMicroseconds(ns);
     digitalWrite(dx,LOW);
     delayMicroseconds(ns);
   }
}

void setup(){
  unsigned long tm=millis();
  analogWrite(9,255/2); // D9번에 핀 연결한 후 PWM으로 아날로그 출력
  while(millis()-tm<1000);
  analogWrite(9,0);
  delay(1000);
  tone(9,490,1000); //D9번에 핀 연결한 후 tone 함수로 아날로그 출력
  delay(1000);
  noTone(9);
  delay(1000);
  mtone(9,490,1000);
}
void loop(){}


