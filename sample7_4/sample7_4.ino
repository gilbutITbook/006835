#include <EEPROM.h> // EEPROM.h를 불러오는 선언
void setup(){
  Serial.begin(9600);
  byte val = EEPROM.read(0); // EEPROM에서 읽기
  Serial.print("Memory value: ");
  Serial.println(val);
  EEPROM.write(0,++val); // EEPROM에 쓰기
}
void loop(){}


