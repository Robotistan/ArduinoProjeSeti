int sensorPin = 9;                  //Defines sensor's pin as pin 9.  
int buzzerPin = 8;                  //Defines buzzer'pin as pin 8.
int data;                           //Sensörden okunan verinin tutulacağı değişken

void setup() {
  pinMode(sensorPin, INPUT);        //Sets the sensor pin as input.
  pinMode(buzzerPin, OUTPUT);       //Sets the buzzer pin as output.
}
void loop() {
  data = digitalRead(sensorPin);    //Readout of digital from the sensor.
  if(data == true){                 //If the sensor's data is more than threshold value, applies the command of under the if code block.
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                             //If the sensor's data is less than threshold value, buzzer pin is low state.
    digitalWrite(buzzerPin, LOW);
  }
}
