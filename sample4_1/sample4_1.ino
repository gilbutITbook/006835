void setup(){
  Serial.begin(9600);
  pinMode(8,INPUT); // INPUT을 INPUT_PULLUP으로 변경
}
void loop(){
  Serial.println(digitalRead(8)); // 디지털 D8 값 표시
  delay(1000);
}

