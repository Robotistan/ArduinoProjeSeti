int pot_pin = A0;                                   //defines the pot pin as an analog pin (A0)
int pot_value = 0;                                  //defines the pot value as 0

int red_pin = 9;                                    //defines red led's pin as 9
int green_pin = 10;                                 //defines green led's pin as 10
int blue_pin = 11;                                  //defines blue led's pin as 11

int red_value = 0;                                  //defines red led's value as 0
int green_value = 0;                                //defines green led's value as 0
int blue_value = 0;                                 //defines blue led's value as 0


void setup() {                                      //sets the led pins as output .                
  pinMode(red_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);

}

void loop() {
  pot_value = analogRead(pot_pin);                  //Reads analog data from the pot pin to determine the pot value.

  if(pot_value < 341) {
    pot_value = (pot_value*3)/4;

    red_value = 255- pot_value;
    green_value = pot_value;
    blue_value = 0;
  }
  else if(pot_value < 682){
     pot_value = (pot_value-341)*3/4;

     red_value = 0;
     green_value = 255- pot_value;
     blue_value = pot_value;
  }
  else{
    pot_value = (pot_value-683)*3/4;

     red_value = pot_value;
     green_value = 0;
     blue_value = 255-pot_value;
  }
  analogWrite(red_pin, 255-red_value);
  analogWrite(green_pin, 255-green_value);
  analogWrite(blue_pin, 255-blue_value);

}
