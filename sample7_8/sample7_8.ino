int dn; // LED 깜빡임 대기 시간

void setup() {
  Serial.begin(115200);
  Serial.print(" delay msec=");
  dn= readKeybord().toInt(); // 키보드 입력 값(정수) 설정
  Serial.println(dn);
  pinMode(13,OUTPUT);
}
void loop() {
  digitalWrite(13,HIGH);
  delay(dn);            // 키보드로 입력한 대기 시간
  digitalWrite(13,LOW);
  delay(dn);            // 키보드로 입력한 대기 시간
}
// 키보드 입력을 설정하는 함수
String readKeybord() {
  char str[100];
  char ch;
  int i=0;
  boolean sw=true;
  long tms;
  while( sw ) {
    ch = Serial.read(); 
    if(ch>=0 && ch<=127)
    { 
      tms=millis();
      str[i]=ch;
      i++;
    }
    else if ((millis()-tms>300) && (i> 0 ))
    { 
      str[i]=0; 
      sw =false;
    }
  }
  return String(str);
}

