int led = 13;
int mtime = 1000;
void setup() {                
  pinMode(led, OUTPUT);     
}
void loop() {
  digitalWrite(led, HIGH);
  delay(mtime);
  digitalWrite(led, LOW);
  delay(mtime); 
}



