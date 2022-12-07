#include <SPI.h>                                   //Defines SPI Librart
#include <MFRC522.h>                               //Defines MFRC522 Library 
#include <Servo.h>                                 //Defines Servo Library

int RST_PIN = 9;                                   //Defines reset pin of RC522 module
int SS_PIN = 10;                                   //Defines chip select pin of RC522 module 
int servoPin = 8;                                  //Defines Servo motor pin.

Servo motor;                                        //Creats variables for Servo motor.
MFRC522 rfid(SS_PIN, RST_PIN);                      //Settings RC522 module.
byte ID[4] = {97, 76, 67, 9};                       //Defines ID for authorized card. 

void setup() {  
  motor.attach(servoPin);                           //Servo motor pin associate with motor variables.
  Serial.begin(9600);                               //Starts serial communication.
  SPI.begin();                                      //Starts SPI communication.
  rfid.PCD_Init();                                  //Starts RC522 module.
}
 
void loop() {

  if ( ! rfid.PICC_IsNewCardPresent())              //If the new card is recognized. 
    return;
 
  if ( ! rfid.PICC_ReadCardSerial())                //If the new card is not recognized.
    return; 

  if (rfid.uid.uidByte[0] == ID[0] &&               //Compares ID of read cart with ID variable.
    rfid.uid.uidByte[1] == ID[1] &&   
    rfid.uid.uidByte[2] == ID[2] && 
    rfid.uid.uidByte[3] == ID[3] ) {
        Serial.println("Door is OPEN");
        printscreen();
        motor.write(180);                           //Brings the Servo motor 180 degrees.
        delay(3000);
        motor.write(0);                             //Brings the Servo motor 0 degrees.
        delay(1000);
    }
    else{                                           //If Unauthorized entry, apply command at below.
      Serial.println("Unauthorized Card");
      printscreen();
    }
  rfid.PICC_HaltA();
}
void printscreen(){
  Serial.print("ID Number: ");
  for(int counter = 0; counter < 4; counter++){
    Serial.print(rfid.uid.uidByte[counter]);
    Serial.print(" ");
  }
  Serial.println("");
}
