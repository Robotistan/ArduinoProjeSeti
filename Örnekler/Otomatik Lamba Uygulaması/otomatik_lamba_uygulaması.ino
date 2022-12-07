#define led 3                               //Define the led as pin 3
            
void setup() {
  pinMode(led,OUTPUT);                      //Sets pin mode of the led as output
  Serial.begin(9600);                       //Open the serial port at 9600 bps
}

void loop() {                       
  int light_value = analogRead(A0);          //Reads the analog data from A0 
  Serial.println(light_value);               //Print it out
  delay(50);                                 //Delay for 50 micro seconds
  if(light_value > 900){                     //If quantity of the light value is more than 900, 
    digitalWrite(led,LOW);                     //The led is off 
  }
  if(light_value < 850){                     //If quantity of the light value is less than 850,
    digitalWrite(led,HIGH);                    //The led is on
  }

}
