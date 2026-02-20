# Build Log - Day 1: Mechanical Assembly & Verification
**Date:** February 21, 2026
**Status:** Hardware Build 100% Complete

## 🎯 Objectives
- Perform full inventory audit of the Elegoo Smart Robot Car V4.0 kit.
- Complete mechanical assembly of the 4WD chassis.
- Verify wiring for the TB6612FNG motor driver and expansion shield.

## 🛠️ Progress & Documentation
### 1. Hardware Inventory
- Conducted a "flat-lay" audit of all sensors, motors, and fasteners. 
- **Reference:** `media/assembly-build/inventory-flat-lay.jpg`

### 2. Drivetrain & Chassis Integration
- Mounted four DC gear motors to the lower acrylic plate.
- Confirmed "A-side" orientation to ensure proper sensor clearance.
- **Reference:** `media/assembly-build/motor-chassis-assembly.jpg`

### 3. Control Stack & Wiring
- Integrated the Arduino Uno with the V4.0 Expansion Shield.
- Managed cable routing for the ultrasonic servo and camera module to prevent mechanical interference.
- **Reference:** `media/assembly-build/tb6612fng-wiring-detail.jpg`

### 4. System Verification
- **Software:** Resolved `Missing FQBN` error by manually selecting the Arduino Uno board in the IDE.
- **Connectivity:** Confirmed BLE (Bluetooth Low Energy) pairing and FPV camera feed via the mobile application.

## 🚀 Tomorrow's Mission (Day 2)
- Transition from App-control to autonomous C++ firmware.
- Implement basic movement logic (Forward/Reverse/Pivot).
- Calibrate PWM signals for straight-line tracking.
