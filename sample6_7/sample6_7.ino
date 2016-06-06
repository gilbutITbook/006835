void setup()
{ Serial.begin(9600);}
void loop() {
  acc_print('x',A0);
  acc_print('Y',A1);
  acc_print('Z',A2);
  Serial.println();
  delay(100);
}
void acc_print(char d, byte pin) {
  Serial.print(d); 
  Serial.print(" = ");
  Serial.print(analogRead(pin)*5.0/1023.0-2.5);
  Serial.print(" ");
}


