// Day 2: Ultrasonic Sensor Calibration
// Purpose: Verify the "eyes" of the robot work before driving.

#define TRIG_PIN 13 
#define ECHO_PIN 12 

void setup() {
  Serial.begin(9600); // Opens the connection to your computer
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.println("--- Day 2: Sensor Test Started ---");
}

void loop() {
  long duration, distance;
  
  // Send a pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Measure the bounce back
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate distance in cm (Speed of sound is ~343m/s)
  distance = (duration / 2) / 29.1; 
  
  // Print results to the Serial Monitor
  Serial.print("Distance to object: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(200); // 5 readings per second
}
