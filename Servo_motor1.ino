// C++ code
#include <Servo.h>

Servo servoMotor;
int pos = 0; // variable to store the servo position

void setup() {
  servoMotor.attach(8); // Connect the servo to Pin 8
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    servoMotor.write(pos);
    delay(15); // Adjust the delay for desired sweep speed
  }

  // Sweep back from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    servoMotor.write(pos);
    delay(15); // Adjust the delay for desired sweep speed 
  }
}
