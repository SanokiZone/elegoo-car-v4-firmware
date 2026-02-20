# Build Log - Day 0: Preparation
**Date:** February 20, 2026
**Status:** Hardware arriving tomorrow.

## 🎯 Objectives
- Initialize version control and repository structure.
- Verify software environment (Arduino IDE).
- Research the Elegoo V4.0 pin mapping and TB6612FNG motor driver.

## 🛠️ Progress
- [x] Created GitHub repository with `src`, `docs`, and `media` directories.
- [x] Configured `README.md` with project objectives.
- [x] Successfully verified "Blink" sketch in Arduino IDE.

## 🐞 Troubleshooting: "Missing FQBN" Error
While verifying the `Blink.ino` sketch, I encountered a `Compilation error: Missing FQBN (Fully Qualified Board Name)`.
* **Cause:** The IDE did not have a target hardware board selected.
* **Resolution:** Navigated to **Tools > Board > Arduino AVR Boards** and selected **Arduino Uno**.
* **Result:** Sketch compiled successfully ("Done compiling"). Software is now ready for hardware integration.

Before

<img width="920" height="464" alt="image" src="https://github.com/user-attachments/assets/ff59fc2c-2119-45f3-8080-b9b18a3529cd" />

After

<img width="922" height="414" alt="image" src="https://github.com/user-attachments/assets/fc13100b-cabc-4c57-98fe-c1ec8a422c57" />

## Troubleshooting: CI/CD Notification Bridge (Discord Webhook)
- **Cause:** Initial webhook delivery failed with a `400 Invalid HTTP Response`.
- **Resolution:** Adjusted the Payload URL to include the `/github` suffix and switched the Content-Type to `application/json`.
- **Result:** Real-time push notifications are now successfully broadcasting to the "Oxford Lab" Discord server.

Before

<img width="439" height="188" alt="image" src="https://github.com/user-attachments/assets/cc7c2c9d-28a3-4b25-b854-f9a254642364" />

After

<img width="395" height="526" alt="image" src="https://github.com/user-attachments/assets/0d1f227d-ca65-4c9f-93ea-af9307c2ae12" />

## 💡 Notes & Research
The V4.0 kit uses a different motor driver than previous versions. I need to ensure that the libraries I use tomorrow are compatible with the specific pinout of the V4.0 expansion board.
