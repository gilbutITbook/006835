void setup()
{
  pinMode(A0, OUTPUT);  // A0(LM61BIZ - GND)
  digitalWrite(A0, LOW);
  pinMode(A2, OUTPUT);  // A2(LM61BIZ - VSS+)
  digitalWrite(A2, HIGH);
  Serial.begin(9600);
}
int getTemp(void) // 온도 센서 값을 읽어서 변환
{
  int mV = analogRead(A1) * 4.88;
  return (mV - 600);  
}
void loop()
{
  int temp = getTemp();
  char body[20];
  sprintf(body, "temp= %d.%d C", temp/10, temp%10);   // 문자열 연결 함수
  Serial.println(body);
  delay(1000);  // 대기 시간
}

