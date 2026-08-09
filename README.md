# 8-Bit Binary Counter with the 74HC595 Shift Register

An Arduino project that counts in binary (to 255) using a **74HC595 shift register** to control 8 LEDs (1 byte).

## 🚀 How It Works
The sketch uses three primary pins (Latch, Clock, and Data) on the 74HC595 to shift an 8-bit byte out to the register. The byte automatically increments (`LEDs++`) on every cycle, visualizing a binary count from `00000000` to `11111111` with LEDs.

* **Development Board:** Arduino Uno R3
* **Software:** Arduino IDE
* **Timing:** User-defined by typing it in the Serial Monitor and sending it to the Arduino. Can be re-defined every full LED cycle (256).

## 📊 Schematic
Below is the wiring diagram used to hook up the circuit made on Tinkercad:

![Project Wiring Diagram](Shift%20Register%20Binary%20Counter%20Wiring%20Diagram.png)

## 🎥 Video Demonstration
Click the image preview below to watch the binary counter take a full-cycle in real-time:

[![Watch the video](https://youtube.com)](https://youtube.com)
