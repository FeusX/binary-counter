int countbinary = 0;

void setup() {

  Serial.begin(9600);

  pinMode(D8, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D6, OUTPUT); // buzzer
}

void loop() {

  digitalWrite(D8, (countbinary & 0x01) ? HIGH : LOW);
  digitalWrite(D7, (countbinary & 0x02) ? HIGH : LOW);
  digitalWrite(D1, (countbinary & 0x04) ? HIGH : LOW);
  digitalWrite(D5, (countbinary & 0x08) ? HIGH : LOW);
  digitalWrite(D2, (countbinary & 0x10) ? HIGH : LOW);
  digitalWrite(D0, (countbinary & 0x20) ? HIGH : LOW);

  countbinary++;
  if (countbinary > 63) {countbinary = 0;}
  tone(D6, 2000, 50); // you can change frequency (hertz) by changing 2000 value

  delay(500);
}
