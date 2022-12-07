#include <LiquidCrystal.h>                              //Running the library
int trigPin = 7;                                        //Ultrasonic sensor trig pin on 7
int echoPin = 6;                                        //Ultrasonic sensor echo pin on 6
int period;                                             //The echo time of the sound wave 
int distance;                                           //The measured distance 
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;   //Defining pin variables of the LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);              //Setting pin connections of the LCD

void setup() {
  pinMode(trigPin, OUTPUT);                             //Sets the trig pin as OUTPUT 
  pinMode(echoPin,INPUT);                               //Sets the echo pin as INPUT 
  lcd.begin(16, 2);                                     //Sets aspect ratio of the LCD                               
}
void loop() {
  digitalWrite(trigPin, LOW);                           //Starts the stage of measurement by ultrasonic sensor
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  period = pulseIn(echoPin, HIGH, 11600);               //Measuring the echo time of sound wave 
  distance= period*0.0345/2;                            //Calculating the distance by measured time 
  lcd.clear();                                          //Cleaning the LCD
  lcd.setCursor(0, 0);                                  //Starts to write at first row and first column.      
  lcd.print("Distance:");                                
  lcd.setCursor(0, 1);                                  //Starts to write at second row and first column
  lcd.print(distance);                                  //Display the distance unit on the LCD
  lcd.print("cm");
}
