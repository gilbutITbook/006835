float Vcc = 5.0; // 전압(5V)
float dist;

void setup()	
{
  Serial.begin(9600);
}
void loop()
{  dist = Vcc*analogRead(A0)/1023;
   dist = 26.549*pow(dist,-1.2091);     // 거리 계산식 두 줄
   Serial.print( " Dist = ");
   Serial.print(dist ); 
 Serial.println(" cm ");
 delay(300);
}

