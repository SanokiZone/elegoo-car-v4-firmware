// Pin Definitions for Elegoo V4
const int ENA = 5;    // Left Motor Speed
const int ENB = 6;    // Right Motor Speed
const int IN1 = 7;    // Left Motor Direction 1
const int IN2 = 8;    // Left Motor Direction 2
const int IN3 = 9;    // Right Motor Direction 1
const int IN4 = 11;   // Right Motor Direction 2
const int STBY = 3;   // Standby Pin (Crucial for V4)

void setup() {
  // Set all motor pins as outputs
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(STBY, OUTPUT);

  // Wake up the motor driver
  digitalWrite(STBY, HIGH); 
}

void moveForward(int speed) {
  // Left Motor Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, speed);

  // Right Motor Forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, speed);
}

void stopMotors() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void loop() {
  moveForward(150); // Move at medium speed
  delay(2000);      // Wait 2 seconds
  
  stopMotors();
  delay(2000);      // Wait 2 seconds
}