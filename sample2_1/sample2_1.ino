/*
  Blink
  LED를 1초 동안 켜고, 1초 동안 끄는 동작을 반복한다.
 
  이 예제 코드는 누구나 사용할 수 있다.
 */
 
// 아두이노 보드 대부분은 13번 핀에 LED가 장착되어 있다.
// 핀에 이름을 붙인다.
int led = 13;

// setup 함수는 전원을 켜거나 reset 스위치를 눌렀을 때 딱 한 번만 실행된다.
void setup() {                
  // 디지털 핀을 출력 모드로 초기화한다.
  pinMode(led, OUTPUT);     
}

// loop 함수는 계속 반복해서 실행된다.
void loop() {
  digitalWrite(led, HIGH);   // LED를 켠다(HIGH는 전압의 높낮이).
  delay(1000);               // 1초 동안 기다린다.
  digitalWrite(led, LOW);    // 전압을 LOW로 바꿔 LED를 끈다.
  delay(1000);               // 1초 동안 기다린다.
}
