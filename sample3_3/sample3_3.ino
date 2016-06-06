int led = 13;
int mtime = 500;   // 변수 mtime의 초깃값을 500으로 설정
void setup() {                
  pinMode(led, OUTPUT);     
}
void loop() {
  if( mtime <= 0 ) { 
    mtime = 500; 
  }  // mtime이 0 이하일 때는 다시 500으로 설정
  else { 
    mtime -= 50; 
  }   // mtime이 0 이하가 아닐 때는 50을 뺌
  digitalWrite(led, HIGH);           // LED가 켜짐
  delay(500 - mtime);                // LED가 켜져 있는 시간
  digitalWrite(led, LOW);            // LED가 꺼짐
  delay(mtime);                      // LED가 꺼져 있는 시간
}




