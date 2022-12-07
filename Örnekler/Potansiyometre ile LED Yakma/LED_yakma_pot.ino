#define pot_pin A0                      //Defines the Potantiometer's pin as pin A0
#define led 3                           //Defines the led as pin 3


void setup() {                          //Sets the led as output.
  pinMode(led,OUTPUT);

}

void loop() {
  int value = analogRead(pot_pin);       //Reads the analog data from the potantiometer pin.      
  value = map(value,0,1023,0,255)        //Provides data from 0 to 1023 via analog reading pins.
  analogWrite(led,value);                //The led gets a value that between 0 and 255.      
  

}
