# Engineering Log: Day 2 - Actuation & Perception Validation

## 🗓️ Date: [Insert Date], 2026
## 🛠️ Status: Success - Motors & Sensors Operational

---

## 📋 Objective
To resolve hardware-software communication issues for the drivetrain and calibrate the ultrasonic proximity sensor for distance measurement.

## 🔍 Diagnostic Process
1.  **Motor Driver Troubleshooting**: Identified that the SmartCar-Shield-V1.1 utilizes a **TB6612FNG** driver which requires the **STBY (Standby) Pin 3** to be set to `HIGH` to wake the system.
2.  **Mode Switching**: Configured the physical slider switch on the shield to 'Drive' mode, allowing the MCU to route PWM signals to the H-Bridge.
3.  **Sensor Calibration**: Initialized the **HC-SR04 Ultrasonic Sensor** via the `Trig` and `Echo` pins. Verified that the sensor accurately calculates distance by measuring the time-of-flight of sonic pulses.

## 💡 Technical Breakthroughs
* **The "Standby" Fix**: Discovered that Pin 3 must be energized for any motor movement to occur on the V4.0+ hardware.
* **Distance Logic**: Successfully converted duration (micro-seconds) into distance (centimeters), allowing the robot to "see" obstacles in its path.

## 💻 Working Test Code Snippets
```cpp
// Motor Wake-up
digitalWrite(STBY, HIGH); 

// Sensor Distance Logic (Conceptual)
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
long duration = pulseIn(echoPin, HIGH);
int distance = duration * 0.034 / 2; // Speed of sound calculation
