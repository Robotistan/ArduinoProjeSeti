#define SensorPin 3                          //Sensor pin is defined as 3th pin
#define MotorPin 5                           //Motor pin is defined as 5th pin
int MotorStatus = LOW;                       //Defines the motor status 

void setup() {
 
  pinMode(SensorPin, INPUT);                 //Sets the sensor pin as input
  pinMode(MotorPin, OUTPUT);                 //Sets the motor pin as output
}

void loop() {
  

  if( digitalRead(SensorPin) ){              //Reads the digital value from sensor pin    

    if(MotorStatus == LOW){                  //If the motor on LOW state

      MotorStatus = HIGH;                    //The motor starts 
    }
    else{
  
      MotorStatus = LOW;                      //If the motor on HIGH state, the motor does not start
    }

    digitalWrite(MotorPin, MotorStatus);      //Sets the motor pin as motor state

  }
  delay(50);                                  // Delay for 50 micro second
  

}
