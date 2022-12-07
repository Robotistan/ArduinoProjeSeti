#include <math.h>                                                                               //Add the library
  
#define led 2                                                                                   

void setup() {                                                                                  //Defines the led's pin as output
 Serial.begin(9600);
 pinMode(led,OUTPUT);

}
  
double Termistor (int analogread){                                                              //Calculating temperature for celcius
  double temp;
  temp = log(((10240000 / analogread) - 100000));                                               // 0°C equals -273 Kelvin
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * temp * temp)) * temp);
  temp = temp -273.15;
  return temp;
}
void loop() {                                                                                   //The value defines the analog data that reads from A0                                                                                                                                                                 
  int value = analogRead(A0);
  double temp = Termistor(value);s
  Serial.println(temp);
  if(temp > 30){                                                                                //If the temp is bigger than 30, the led is on                                                                          
    digitalWrite(led,HIGH);
  }
  else{                                                                                         //Unless the temp is bigger than 30, the led is off            
    digitalWrite(led,LOW);                                  
  }
  delay(250);                                                                                   //Delay for 250 micro seconds
}
