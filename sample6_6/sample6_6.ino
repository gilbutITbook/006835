void setup() 
{  Serial.begin(9600); }
void loop() {
    Serial.print(" X = "); Serial.print(acc(A0));
    Serial.print(" Y = "); Serial.print(acc(A1));
    Serial.print(" Z = "); Serial.println(acc(A2));
    delay(100);
}
float acc(byte pin) // 가속도 값 변환식
{ return (analogRead(pin)*5.0/1023.0-2.5); }

