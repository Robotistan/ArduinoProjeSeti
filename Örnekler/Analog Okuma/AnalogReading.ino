  #define pot_pin A0                             //Define pot pin as A0.

int value = 0;                                  //Variable to hold the value.

void setup() {
  Serial.begin(9600);                           //Open the serial port at 9600 bps.
  Serial.println("Reading Pot Value");          

}

void loop() {                                   
  value = analogRead(pot_pin);                  //Read the analog input on pot pin.
  Serial.println(value);                        //Print it out.
  delay(300);                                   //Delay for 300 micro seconds.
 
}
