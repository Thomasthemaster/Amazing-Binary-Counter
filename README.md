# Amazing Binary Counter

An Arduino project that counts in binary (to 255) using a **74HC595 shift register** to control 8 LEDs (1 byte).

## 🚀 How It Works
The sketch uses three primary pins (Latch, Clock, and Data) on the 74HC595 to shift an 8-bit byte from the Arduino to the register. The Arduino sends a new incremented byte to the register, which the register then displays. The amount of time in between the Arduino sending the byte and then another byte is defined by the user at the start in the Serial Monitor. This visualizes a binary count from 00000000 (all off) to 11111111 (all on).

* **Development Board:** ELEGOO UNO R3
* **Software:** Arduino IDE
* **Timing:** User-defined by typing it in the Serial Monitor and sending it to the Arduino. Can be re-defined every full LED cycle (256).

## 📊 Circuit Layouts

### Wiring Diagram
Below is the wiring diagram for the project:
![Project Wiring Diagram](Shift%20Register%20Binary%20Counter%20Wiring%20Diagram.png)

### Schematic
Below is the schematic generated in Tinkercad:
[![Project Schematic](Shift%20Register%20Binary%20Counter%20Schematic.png)](Shift%20Register%20Binary%20Counter%20Schematic.png)

## 🎥 Video Demonstration
Click the link below to watch the binary counter complete a full cycle in real-time:

[Click here to watch the video](https://www.youtube.com/watch?v=4sl_HAsPrdA)
