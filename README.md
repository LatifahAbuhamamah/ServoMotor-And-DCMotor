# ServoMotor-And-DCMotor
## Servo Motor 
Steps to control a servo motor using an Arduino in Tinkercad:
1. Open Tinkercad.
1. Click on "Create new circuit" to start a new project.
3. In the components panel, search for "Arduino" and drag it onto the workspace.
4. Search for "Servo" and drag it onto the workspace.
5. Connect the GND (Ground) pin of the Arduino to the GND pin of the Servo.
6. Connect the 5V pin of the Arduino to the VCC (power) pin of the Servo.
7. Connect Pin 8 of the Arduino to the Signal (SIG) pin of the Servo.
8. Write the following C++ code:
```cpp
#include <Servo.h>

Servo servoMotor;
int pos = 0;

void setup() {
  servoMotor.attach(8);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    servoMotor.write(pos);
    delay(15);
  }

  for (pos = 180; pos >= 0; pos -= 1) {
    servoMotor.write(pos);
    delay(15);
  }
}
```
9. Save the project and click the "Start Simulation" button to run the code and see the servo motor in action.
10. In the simulation, we will observe the servo motor smoothly sweeping back and forth between 0 and 180 degrees, controlled by the code's delay.
- Tinkercad link : https://www.tinkercad.com/things/0mhhh1wDN2w
- Screenshot
![servomotor](https://github.com/LatifahAbuhamamah/ServoMotor_And_DCMotor/blob/main/Servomotor_screenshot.png)


## DC Motor
To control a DC motor using an L293D motor driver and a battery on Tinkercad, follow these steps:

1. Open Tinkercad.
2. Click on "Create new circuit" to start a new project.
3. In the components panel, search for "Arduino" and drag it onto the workspace.
4. Now, search for the other components and drag them onto the workspace one by one:
   - L293D motor driver: Search for "L293D" and add it to the workspace.
   - DC motor: Search for "DC motor" and add it to the workspace.
   - Battery: Search for "Battery" and add it to the workspace.
  
5. Connect the components as follows:
   - Connect the DC motor's positive terminal to pin 8 (Output 1) of the L293D.
   - Connect the DC motor's negative terminal to pin 9 (Output 2) of the L293D.
   - Connect pin 1 of the L293D to pin 13 (PWM) of the Arduino.
   - Connect pin 2 of the L293D to pin 10 of the Arduino.
   - Connect pin 7 of the L293D to pin 9 of the Arduino.
   - Connect the battery to the breadboard.
   
6. Write the following C++ code:
```cpp
#include <Arduino.h>

void setup()
{
  pinMode(13, OUTPUT); // Setting pin 13 as OUTPUT to control the motor
  pinMode(9, OUTPUT);  // Setting pin 9 as OUTPUT to control motor direction
  pinMode(10, OUTPUT); // Setting pin 10 as OUTPUT to control motor direction
}

void loop()
{
  // Rotate the DC motor in one direction (clockwise)
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(100);           // Brief delay to allow a motor driver to process direction change
  analogWrite(13, 255);
  delay(5000);

  // Stop the motor for 1 second
  analogWrite(13, 0);
  delay(1000);

  // Rotate the DC motor in the opposite direction (counter-clockwise)
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(100);           // Brief delay to allow a motor driver to process direction change
  analogWrite(13, 255);
  delay(5000);

  // Stop the motor for 1 second
  analogWrite(13, 0);
  delay(1000);
}
```
7. Run the simulation, With this code and the connections described above, the DC motor should rotate in one direction for 5 seconds, then stop for 1 second, then rotate in the opposite direction for 5 seconds, and stop again for 1 second, and the cycle repeats.

- Tinkercad link : https://www.tinkercad.com/things/00wSrV6L0lU
- Screenshot
![imaggge](https://github.com/LatifahAbuhamamah/ServoMotor-And-DCMotor/blob/main/DCmotor-Screenshot.png)
  




