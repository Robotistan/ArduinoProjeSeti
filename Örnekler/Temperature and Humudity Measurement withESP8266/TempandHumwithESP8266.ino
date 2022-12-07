#include <SoftwareSerial.h>                                                                  //Add SoftwareSerial Library.
#include <dht11.h>                                                                           //Add DHT11 Sensor Library.

String agAdi = "Your Wifi Name";                                                             //Write wifi name to here.    
String agSifresi = "Wifi Password";                                                          //Write wifi password to here.

int rxPin = 10;                                                                              //It's ESP8266 RX Pin
int txPin = 11;                                                                              //It's ESP8266 TX Pin
int dht11Pin = 2;

String ip = "184.106.153.149";                                                                //Thingspeak IP Address
float Temperature, Humidity;

dht11 DHT11;

SoftwareSerial esp(rxPin, txPin);                                                             //Sets serial communication pin.
void setup() {  
  
  Serial.begin(9600);                                                                         //Starts the communication with the serial port.
  Serial.println("Started");
  esp.begin(115200);                                                                          //Starts the serial communication with ESP8266.
  esp.println("AT");                                                                          //Controls the module with AT command.
  while(!esp.find("OK")){                                                                     //Getting ready the module.
    esp.println("AT");
    Serial.println("No ESP8266 Found.");
  }
  
  esp.println("AT+CWMODE=1");                                                                  //Sets ESP8266 module as client.
  while(!esp.find("OK")){                                                                      //Getting ready the settings.
    esp.println("AT+CWMODE=1");
    
  }
  Serial.println("Connecting Wifi...");
  esp.println("AT+CWJAP=\""+WifiName+"\",\""+password+"\"");                                   //Connects the network.
  while(!esp.find("OK"));                                                                      //Getting ready the connection.
  Serial.println("Connected Wifi.");
  delay(1000);
}
void loop() {
  esp.println("AT+CIPSTART=\"TCP\",\""+ip+"\",80");                                            //Connects to Thingspeak.
  if(esp.find("Error")){                                                                       //Checks the connection error.
    Serial.println("AT+CIPSTART Error");
  }
  DHT11.read(dht11Pin);
  Temperature = (float)DHT11.temperature;
  Humidity = (float)DHT11.humidity;
  String data = "GET https://api.thingspeak.com/update?api_key=2F55993RWVDCTSUS";               //Thingspeak command. Writes own IP at the part of key.                                   
  data += "&field1=";
  data += String(Temperature);                                                                  //Temperature variable that is sent.
  data += "&field2=";
  data += String(Humidity);                                                                          //Humidity variable that is sent
  data += "\r\n\r\n"; 
  esp.print("AT+CIPSEND=");                                                                     //Insert length of the data that is sent to ESP
  esp.println(data.length()+2);
  delay(2000);
  if(esp.find(">")){                                                                            //When ESP8266 is ready, runs the inside of the commands..
    esp.print(data);                                                                            //Sending the data 
    Serial.println(data);
    Serial.println("Data Sent.");
    delay(1000);
  }
  Serial.println("Connection closed.");
  esp.println("AT+CIPCLOSE");                                                                    //Cuts down the connection
  delay(1000);                                                                                   //Waiting for 1 minute to send new data.
}
