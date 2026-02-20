# Autonomous Mobile Robot - Foundation Project (V4.0)

## 🎯 Project Vision
This project serves as a technical foundation in mobile robotics, focusing on the **Sense-Think-Act cycle**. By utilizing the Elegoo Smart Robot Car V4.0 platform, I am developing a system capable of autonomous navigation, environmental perception, and reactive control. 

This repository documents my transition from basic firmware implementation to advanced autonomous behaviors as part of my long-term goal to study Autonomous Systems at the Master's level.

---

## 🛠️ Technical Specifications
### Hardware Architecture
* **Microcontroller:** Arduino UNO (Atmega328P)
* **Motor Driver:** TB6612FNG Dual-Channel Driver
* **Actuators:** 4x DC Geared Motors (1:48 gear ratio)
* **Perception Suite:** * HC-SR04 Ultrasonic Sensor (Distance measurement)
    * 3-Channel Infrared Line-Tracking Module
    * ESP32-CAM (WiFi/FPV Video Transmission)
* **Power:** 2x 18650 Lithium Batteries (2000mAh)

### Software & Tools
* **Language:** C++ / Arduino Wire
* **Environment:** Arduino IDE 2.3.2
* **Version Control:** Git / GitHub

---

## 📈 Development Roadmap
- [x] **Phase 0: Environment Setup** (Initialization of repository and IDE configuration)
- [ ] **Phase 1: Mechanical Assembly** (Chassis build and hardware validation)
- [ ] **Phase 2: Reactive Navigation** (Obstacle avoidance and line-following logic)
- [ ] **Phase 3: Perception Integration** (Processing FPV camera data via WiFi)
- [ ] **Phase 4: Optimization** (Implementing PID control for smoother motion)

---

## 📂 Repository Structure
* `src/`: Primary Arduino source code and firmware.
* `docs/`: Daily build logs, research notes, and pin mapping diagrams.
* `media/`: Visual documentation of assembly and performance tests.

---

## 📚 Academic Context
**Author:** First Year Computer Science Student  
**Objective:** Building a research-grade portfolio for future specialization in Robotics and AI.

