const int latchPin = 11;
const int clockPin = 9;
const int dataPin = 12;
int delayTime;

byte LEDs = 0x00;

void prompt() {
  Serial.println("Please type in the delay time you want. (in milliseconds)");
  while (Serial.available() == 0) {} // Do nothing while waiting for the user to enter the delay time
  delayTime = Serial.parseInt(); // By using Serial.parseInt(), we only read the integer part of the answer
  if (delayTime < 1) {
    delayTime = 1; // Ensures that delay time is at least 1 millisecond
  }
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  prompt(); // Prompt first for the delay time
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("LEDs = ");
  Serial.println(LEDs, BIN); // Prints LED Sequence in Binary to the Serial Monitor
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  digitalWrite(latchPin, HIGH);
  if (LEDs == 0xFF) {
    prompt(); // Re-prompt if LED Cycle is finished (11111111)
  }
  LEDs++;
  delay(delayTime);
}
