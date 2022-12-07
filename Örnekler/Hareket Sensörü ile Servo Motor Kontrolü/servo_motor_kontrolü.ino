#include <Servo.h>                //Add servo library
int pirPin = 8;                   //Defines sensor's pin as 8
int servoPin = 9;                 //Defines servo' pin as 9
int action;                       //Receives data from sensor
Servo motor;                      //Variable of Servo motor 


void setup() {
  motor.attach(servoPin);         //The servo motor associate with the 9th pin.
  pinMode(pirPin, INPUT);         //Set the sensor as input.

}

void loop() {
  action = digitalRead(pirPin);  //Reads digital data from the sensor.
  
  if(action == HIGH){            //If action state is high, apply command at below.
    motor.write(150);
    delay(250);
    motor.write(30);
    delay(250);
    motor.write(150);
    delay(250);
    motor.write(30);
    delay(250);
    motor.write(150);
    delay(250);
    motor.write(30);
    delay(250);
    motor.write(90);
  }
  else{                           //Unless action state is high, apply command at below.
    motor.write(90);
    
  }
}
