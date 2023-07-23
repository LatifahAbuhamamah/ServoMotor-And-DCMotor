# ServoMotor_And_DCMotor
## 1. Servo Motor 
```
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
```
This C++ code controls a servo motor, a type of motor commonly used for precise rotational movements, using an Arduino microcontroller. The code uses the `Servo` library to interact with the servo motor.
When the code runs, it first connects the servo motor to Pin 8 of the Arduino. Then, it enters into a continuous loop where it performs a back-and-forth sweeping motion with the servo motor.
In the loop, the servo motor is commanded to move from 0 to 180 degrees and back again from 180 to 0 degrees. This creates a sweeping effect as the motor rotates. The speed of the sweep is controlled by the `delay(15)` statement, which introduces a 15-millisecond pause between each movement. A smaller delay makes the sweep faster, and a larger delay makes it slower.
The loop will keep repeating, continuously sweeping the servo motor back and forth until the Arduino is powered off or the code is interrupted. This type of code could be used for various applications, such as controlling robot arms, or any other task that requires precise and controlled rotational movement.

![servomotor](https://github.com/LatifahAbuhamamah/ServoMotor_And_DCMotor/blob/main/Servomotor_screenshot.png)


https://github.com/LatifahAbuhamamah/ServoMotor_And_DCMotor/assets/139233344/4cd49e5d-656c-44ac-90f6-d028de68b527


