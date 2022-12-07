int threshold_value = 400;               //Determining the threshold value of Gas    
int buzzerPin = 9;                       //The buzzer pin on 9
int value;                               //Reads value from the buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);            //Sets the buzzer pin as output
}

void loop() {
  value = analogRead(A0);                //Reads the analog value from sensor
  if(value > threshold_value){           //If the read value from sensor is bigger than the threshold value, it runs.
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                                  //If the read value from sensor is smaller than the threshold value it runs. 
    digitalWrite(buzzerPin, LOW);
  }
}
