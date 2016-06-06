char pr[30];
void setup()      // sprintf 함수 예제 출력 테스트
{  Serial.begin(9600);
   sprintf(pr,"%c,%s,'%5x',%2d.%2d",'A',"BCDE",2013,15,21);
   Serial.print(pr); }
void loop() {}

