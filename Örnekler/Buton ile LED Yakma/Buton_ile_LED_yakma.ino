#define button 8                            //Defines the button as pin 8
#define led 10                              //Defines the led as pin 10

int button_state = 0;                       //Defines button state as integer 0


void setup() {                              
  pinMode(button,INPUT);                    //Defines the button as input.
  pinMode(led,OUTPUT);                      //Defines the led as output.

}

void loop() {
  button_state = digitalRead(button) ;      //Reads the digital data from the button.
  if(button_state == 1){                    //If button state is 1 (that's mean pressed the button).
    digitalWrite(led,HIGH);                 //The led is on. 
  }
  else{                                     //If button state is 0 (that's mean not pressed the button).
    digitalWrite(led,LOW);                  //The led is off.        
  }                                         

}
