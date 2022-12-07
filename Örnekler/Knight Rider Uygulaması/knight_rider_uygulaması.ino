int leds[] = {2,3,4,5,6,7};             //Defines led's pins.

void setup() {
  for(int i=0; i<6; i++){
    pinMode(leds[i], OUTPUT);           //Sets the each leds as output.
  }
}

void loop() {                           

  for(int j=0; j<6; j--){               //Each led starts to turn on one by one. 
    digitalWrite(leds[j],HIGH);             
    delay(80);                          //Delay for 80 micro seconds between every turned on. 
    digitalWrite(leds[j],LOW);
  }
  

}
