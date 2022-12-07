#include <IRremote.h>                                     //Includes the library 

int RECV_PIN = 2;                                         //Defines the IR
IRrecv irrecv(RECV_PIN);
decode_results results;
                                                          // Defining the hexadecimal codes for each keys
#define CH1 0xFFA25D
#define CH 0xFF629D
#define CH2 0xFFE21D
#define PREV 0xFF22DD
#define NEXT 0xFF02FD
#define PLAYPAUSE 0xFFC23D
#define VOL1 0xFFE01F
#define VOL2 0xFFA857
#define EQ 0xFF906F
#define BUTTON0 0xFF6897
#define BUTTON100 0xFF9867
#define BUTTON200 0xFFB04F
#define BUTTON1 0xFF30CF
#define BUTTON2 0xFF18E7
#define BUTTON3 0xFF7A85
#define BUTTON4 0xFF10EF
#define BUTTON5 0xFF38C7
#define BUTTON6 0xFF5AA5
#define BUTTON7 0xFF42BD
#define BUTTON8 0xFF4AB5
#define BUTTON9 0xFF52AD
                                                           //Defines the leds to the pins
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;  
                                                           
void setup()                                               //Sets the leds as output  
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);                                     //Sets communication
  irrecv.enableIRIn();
}
void loop() {

  if (irrecv.decode(&results))                            //If it receives data
  {
    if (results.value == BUTTON1)                         //If the result value define the button 1, led1 is on
    {
      digitalWrite(led1, !digitalRead(led1));
      if (digitalRead(led1) == HIGH)
      {
        Serial.println("LED 1 ON");
      }                                                     
      else                                                //Unless the result value define the button 1, led1 is on
      {
        Serial.println("LED 1 OFF");
      }
    }
    if (results.value == BUTTON2)                          //the result value define the button2, led2 is on
    {
      digitalWrite(led2, !digitalRead(led2));
      if (digitalRead(led2) == HIGH)
      {
        Serial.println("LED 2 ON");
      }
      else                                                 //Unless the result value define the button2, led2 is on
      {
        Serial.println("LED 2 OFF");
      }
    }
    if (results.value == BUTTON3)                            //If the result value define the button3, led3 is on
    {
      digitalWrite(led3, !digitalRead(led3));
      if (digitalRead(led3) == HIGH)
      {
        Serial.println("LED 3 ON");
      }
      else                                                  //Unless the result value define the button3, led3 is on
      {
        Serial.println("LED 3 OFF");
      }
    }
    if (results.value == BUTTON4)                            //If the result value define the button4, led4 is on
    {
      digitalWrite(led4, !digitalRead(led4));
      if (digitalRead(led4) == HIGH)
      {
        Serial.println("LED 4 ON");
      }
      else                                                  //Unless the result value define the button4, led4 is on
      {
        Serial.println("LED 4 OFF");
      }
    }
    if (results.value == BUTTON0)                            //If the result value define the button0, All led is off
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      Serial.println("All LED's OFF");
    }
    if (results.value == BUTTON5)                           //If the result value define the button5, All led is on
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      Serial.println("All LED's ON");
    }
    irrecv.resume();                                        //The loop continues
  }
}
