#define I2Cadr 0x3e  // 고정 i2C용 주소
byte contrast = 30;   // 대비(0~63)
// ***** i2C_LCD 초기화 함수(필수)
void lcd_init(void) {   // I2C_LCD 초기화
   Wire.begin();
  lcd_cmd(0x38); lcd_cmd(0x39); lcd_cmd(0x4); lcd_cmd(0x14);
  lcd_cmd(0x70 | (contrast & 0xF)); lcd_cmd(0x5C | ((contrast>>4) &0x3));
  lcd_cmd(0x6C); delay(200); lcd_cmd(0x38); lcd_cmd(0x0C); lcd_cmd(0x01);
  delay(2);
}
// ***** I2C_LCD에 업로드
void lcd_cmd(byte x) {  // I2C_LCD에 업로드
  Wire.beginTransmission(I2Cadr);
  Wire.write(0x00);     // C0 = 0, RS = 0
  Wire.write(x);
  Wire.endTransmission();
}
// ***** 화면 클리어 함수
void lcd_clear(void) {  lcd_cmd(0x01); } 
// ***** 화면 표시 Off 함수
void lcd_DisplayOff() {  lcd_cmd(0x08); }
// ***** 화면 표시 On 함수
void lcd_DisplayOn() { lcd_cmd(0x0C);  }
// ***** 서브 함수 1
void lcd_contdata(byte x) {
Wire.write(0xC0); // CO = 1, RS = 1
  Wire.write(x);
}
// ***** 서브 함수 2
void lcd_lastdata(byte x) {
  Wire.write(0x40); // CO = 0, RS = 1
  Wire.write(x);
}
// ***** 문자 표시 함수
void lcd_printStr(const char *s) {
  Wire.beginTransmission(I2Cadr);
  while (*s) {
    if (*(s + 1)) {
      lcd_contdata(*s);
    } else {
      lcd_lastdata(*s);
    }
    s++;
  }
  Wire.endTransmission();
}
 
// ***** 표시 위치 지정 함수 x: 자리(0~7), y: 줄(0, 1)
void lcd_setCursor(byte x, byte y) {
  lcd_cmd(0x80 | (y * 0x40 + x));
}

