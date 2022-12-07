int sensorPin = A0;                // Sensor Pin is on A0
int threshold_value = 100;         // Threshold value for amount of water
int buzzerPin = 8;                 // Buzzer Pin is on 8
int data;                          // The value that reads from the sensor

void setup() {
  pinMode(buzzerPin, OUTPUT);      // Sets the buzzerPin(pin 8) as output  
}
void loop() {
  data = analogRead(sensorPin);    // Reads analog data from the sensor
  if(data > threshold_value){      // If the data is more than the threshold value 
    digitalWrite(buzzerPin, HIGH); // Sets the buzzerPin's state as HIGH
    delay(100);                    // Delay for 100 micro seconds
    digitalWrite(buzzerPin, LOW);  // Sets the buzzerPin's state as LOW
    delay(100);                    // Delay for 100 micro seconds
  }
  else{                            // If the data is less than the threshold value
    digitalWrite(buzzerPin, LOW);  // Sets the buzzerPin's state as LOW
  }
}
