# Build Log - Day 2: Firmware Integration & Perception Logic
**Date:** February 22, 2026
**Status:** Drivetrain & Sensor Logic 100% Operational

## 🎯 Objectives
- Transition from mobile app control to autonomous C++ firmware.
- Resolve "No Movement" hardware state via low-level logic debugging.
- Calibrate the HC-SR04 ultrasonic sensor for real-time distance mapping.

## 🛠️ Progress & Documentation
### 1. Motor Driver Logic Debugging
- Identified a hardware "Sleep" state inhibiting motor torque.
- **Breakthrough:** Discovered that the **STBY (Standby)** pin on the TB6612FNG driver must be set to `HIGH` (Digital Pin 3) to enable the H-Bridge.
- Verified that the physical **Upload/Drive** slider switch must be set to 'Drive' to bridge the UART-to-Motor signal path.

### 2. Drivetrain Actuation
- Successfully implemented 4WD movement using PWM (Pulse Width Modulation) for speed control.
- Validated a 2000ms "Pulse" test to confirm wiring integrity for all four gear motors.

### 3. Perception & Sensor Calibration
- Initialized the ultrasonic "eyes" by triggering 10μs sonic bursts.
- Developed a conversion formula to translate "time-of-flight" duration into centimeter-based distance data.
- Confirmed stable distance readings, providing the foundation for autonomous collision avoidance.

### 4. System Verification
- **Software:** Deployed custom firmware bypassing the default Elegoo libraries to confirm pin-to

### 🔧 Manual Hardware Debugging: UART Conflict
While flashing the Day 2 firmware, I encountered a persistent Serial communication conflict. Because the Arduino Uno uses the same RX/TX pins (0 and 1) for both USB programming and peripheral communication, the Bluetooth/Camera module was creating signal interference on the bus.

**Solution:** I performed a **manual hardware bypass** by physically unplugging the UART interface from the expansion shield. This isolated the microcontroller's receive/transmit lines, allowing for a clean data transfer from the IDE. After the firmware was successfully flashed, the UART link was re-established to enable integrated system testing.

I spent three hours wondering why the motors wouldn't turn before realizing the STBY pin was the culprit. This taught me that hardware often requires a specific logic 'wake-up' signal that isn't always obvious in the high-level code.
