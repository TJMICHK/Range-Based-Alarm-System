# Range-Based Alarm System
Arduino sketch that turns on a red LED and sounds a piezo buzzer when an object is within a set distance

## Demo
- Find in .media file

## Hardware
- Arduino UNO R3
- HC-SR04 ultrasonic sensor
- Red LED + 220 Ω resistor
- Passive Piezo Buzzer
- Breadboard + jumper wires

## How to Run
1. Open `src/project2_range_based_alarm/project2_range_based_alarm.ino` in the Arduino IDE.
2. Select your board and COM port.
3. Click **Upload**.

## Features
- Adjustable distance threshold to trigger LED and buzzer
- Optional pulsed buzzer/LED pattern (beep, flash, or static)
- Simple pin mapping for easy rewiring
- Serial output for live distance readings

## What I Learned
- Measuring distance with TRIG/ECHO timing on the HC-SR04

## Next Steps
- [ ] Vary tone with distance
- [ ] Add and arm and disarm switch with a button or keypad
- [ ] Build an enclosure for the alarm
