// 앞부분은 생략했다. 이 코드만으로는 동작하지 않는다.

long tm = millis();  // millis() 함수는 아두이노가 켜졌을 때부터 흐른 밀리초를 반환한다.
while( 60<analogRead(A0) )
  { if( millis() - tm > 30000 ) break;




