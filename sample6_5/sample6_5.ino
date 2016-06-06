#define LedPin 13 
void setup() 
{  pinMode(LedPin, OUTPUT); }
void loop()
{  if ( analogRead(A0)<50) digitalWrite(LedPin,HIGH);  // 어두우면 LED를 켠다.
   else digitalWrite(LedPin,LOW);                      // 밝으면 LED를 끈다.
}

