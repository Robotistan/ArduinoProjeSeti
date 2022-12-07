int received_data;                                    
int red_pin = 9;                                    //defines red led's pin as pin 9
int green_pin = 10 ;                                //defines green led's pin as pin 10
int blue_pin = 11;                                  //defines green led's pin as pin 11
void setup() {
  Serial.begin(9600);                               //Starts serial communication.
  pinMode(red_pin,OUTPUT);                          //sets led's pins as output.
  pinMode(green_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);

}

void loop() {
  if(Serial.available()>0){                         
    received_data = Serial.read();                    //Receiving the data
  }
  if(received_data == 'r'){                          //If the received data is red, the red led is on        
    digitalWrite(red_pin,HIGH);
    digitalWrite(green_pin,LOW);
    digitalWrite(blue_pin,LOW);
  }
  else if(received_data == 'g'){                      //If the received data is green, the green led is on
    digitalWrite(red_pin,LOW);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,LOW);
}
  else if(received_data == 'b'){                      //If the received data is blue, the blue led is on                         
    digitalWrite(red_pin,LOW);
    digitalWrite(green_pin,LOW);
    digitalWrite(blue_pin,HIGH);
}
  else if(received_data == 'w'){                      //If the received data white, all led is on
    digitalWrite(red_pin,HIGH);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,HIGH);
}
  else{                                               //Unless the received data is read, all led is off 
    digitalWrite(red_pin,LOW);
    digitalWrite(green_pin,LOW);
    digitalWrite(blue_pin,LOW);
  }
}
