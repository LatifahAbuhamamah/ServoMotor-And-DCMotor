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
8. Click on the Arduino component to open the code editor.
9. Replace any existing code in the setup and loop functions with the provided C++ code:
```
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
10. Save the project and click the "Start Simulation" button to run the code and see the servo motor in action.
11. In the simulation, we will observe the servo motor smoothly sweeping back and forth between 0 and 180 degrees, controlled by the code's delay.
- Tinkercad link : https://www.tinkercad.com/things/0mhhh1wDN2w
- Screenshot
![servomotor](https://github.com/LatifahAbuhamamah/ServoMotor_And_DCMotor/blob/main/Servomotor_screenshot.png)
