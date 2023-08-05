//C++ code

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
  delay(100);           // Brief delay to allow motor driver to process direction change
  analogWrite(13, 255);
  delay(5000);

  // Stop the motor for 1 second
  analogWrite(13, 0);
  delay(1000);

  // Rotate the DC motor in the opposite direction (counter-clockwise)
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(100);           // Brief delay to allow motor driver to process direction change
  analogWrite(13, 255);
  delay(5000);

  // Stop the motor for 1 second
  analogWrite(13, 0);
  delay(1000);
}
