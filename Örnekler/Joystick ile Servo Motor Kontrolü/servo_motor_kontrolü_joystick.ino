#include <Servo.h>                        // Add the servo library.

Servo motor;                              // Variable of Servo motor.

int value;                                // Value and degree determine integer. 
int degree;

void setup() {                            // Defines the motor
  motor.attach(3);

}

void loop() {

  value = analogRead(A0);                  // The value defines the analog data that reads from A0
  degree = map(value, 0,1023,0,180);       // Provides data from 0 to 1023 via analog reading pins
  motor.write(degree);                     // The servo motor can move between 0 and 180 degrees.

}
