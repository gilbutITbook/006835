// 핀 할당
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 8;
int G = 7;
int led[7] = {A, B, C, D, E, F, G};
// 진리표
int digit[10][7] = {{1, 1, 1, 1, 1, 1, 0}, // 0
                    {0, 1, 1, 0, 0, 0, 0}, // 1
                    {1, 1, 0, 1, 1, 0, 1}, // 2
                    {1, 1, 1, 1, 0, 0, 1}, // 3
                    {0, 1, 1, 0, 0, 1, 1}, // 4
                    {1, 0, 1, 1, 0, 1, 1}, // 5
                    {0, 0, 1, 1, 1, 1, 1}, // 6
                    {1, 1, 1, 0, 0, 1, 0}, // 7
                    {1, 1, 1, 1, 1, 1, 1}, // 8
                    {1, 1, 1, 0, 0, 1, 1}}; // 9

void setup()
{
  // 각 포트를 출력 모드로 설정한다.
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}
void loop()
{
  for (int i=0; i<10; i++) { // 0부터 9까지 숫자를 표시한다
    for (int j=0; j<7; j++) { // LED 7개를 조작
       digitalWrite(led[j], digit[i][j]); // 진리표에 맞게 LED를 켜고 끈다
    }
    delay(1000); // 1초간 대기
  }
}
