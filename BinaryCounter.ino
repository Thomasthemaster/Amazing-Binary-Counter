int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int delayTime;

byte LEDs = 0x00;

void prompt() {
  Serial.println("Please type in the delay time you want.");
  while (Serial.available() == 0) {}
  delayTime = Serial.parseInt();
  if (delayTime < 1) {
    delayTime = 1;
  }
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  prompt();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("LEDs = ");
  Serial.println(LEDs, BIN);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  digitalWrite(latchPin, HIGH);
  if (LEDs == 0xFF) {
    prompt();
  }
  LEDs++;
  delay(delayTime);
}
