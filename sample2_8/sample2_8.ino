
void loop() {
  digitalWrite(led, HIGH);   // LED를 켠다(HIGH는 전압의 높낮이).
  delay(1);                  // 1밀리초 동안 기다린다.
  digitalWrite(led, LOW);    // 전압을 LOW로 바꿔 LED를 끈다.
  delay(5);                  // 5밀리초 동안 기다린다.
}

