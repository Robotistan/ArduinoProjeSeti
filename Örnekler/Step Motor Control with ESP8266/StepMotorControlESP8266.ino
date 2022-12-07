String NetworkName = "Your Wifi Name";                                                                      //Write wifi name to here.    
String NetworkPassword = "Wifi Password";                                                                   //Write wifi password to here.
int motorPin1 = 3, motorPin2 = 4, motorPin3 = 5, motorPin4 = 6;                                             //Defines the step motor pins.

void setup(){ 
  pinMode(motorPin1, OUTPUT);                                                                               //Sets the motor Motor pinleri OUTPUT.
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  Serial.begin(115200);                                                                                     //Starts serial communication.
  Serial.println("AT");                                                                                     //Controls the module by AT command.
  while(!Serial.find("OK")){                                                                                //Getting ready the module.
    Serial.println("AT");
  }
  delay(1000);  
  Serial.println("AT+RST");                                                                                 //Resets ESP8266.
  delay(1000);
  while(!Serial.find("ready"))                                                                              //Resetting is in process.
  delay(1000);
  Serial.println("AT+CWMODE=1");                                                                            //Sets the module as client.
  while(!Serial.find("OK"));                                                                                //Setting is in process.
  Serial.println("AT+CWJAP=\""+NetworkName+"\",\""+NetworkPassword+"\"");                                   //Connects wifi.
  while(!Serial.find("OK"));                                                                                //Connection is in process.
  Serial.print("AT+CIFSR\r\n");                                                                             //Reads IP address and MAC address.
  Serial.print(espRead(1000));                                                                              //Write the IP address and MAC address on the screen.
  serialCleans(2000);                                                                                       //Cleans the data that is not utilized.
  Serial.print("AT+CIPMUX=1\r\n");                                                                          //Setting multi connection.
  serialCleans(2000);   
  Serial.print("AT+CIPSERVER=1,80\r\n");                                                                    //Creats a server.
  serialCleans(2000);
}
void loop(){
  if(Serial.available()){                                                                                   //When getting the data of serial communicatoin, runs the inside of the commands.
    if(Serial.find("+IPD,")){                                                                               //When desired to connect, runs inside of the commands.
      delay(200);
      int connectionId = Serial.read() - 48;                                                                //Reads the connection nummer.
      String command = espRead(1000);                                                                       //Sets the connection nummer.    
      if(command.indexOf("step=forward") != -1){                                                            //When begining the forward command, runs inside of the commands.
        for(int  = 0; pace < 5; pace++){                                                                    //Step motor is acted through to forward 5 times.
          stepForward(50); 
        }
      } 
      else if(command.indexOf("step=backward") != -1){                                                      //When begining the backward command, runs inside of the commands
        for(int pace = 0; pace < 5; pace++){                                                                //Step motor is acted through to backward 5 times.
          stepBackward(50); 
        }
      }
      String page = "<h1>Step Motor Control</h1><br>";                           
      page+="<br><a href=\"?step=forward\"><button><h1>forward</h1></button></a>";
      page+="<br><br><a href=\"?step=backward\"><button><h1>backward</h1></button></a>";
      command = "AT+CIPSEND=";                                                                              //Equalizes length of the page data with command variable.
      command += connectionId;  
      command += ",";
      command +=page.length();
      command +="\r\n";
      Serial.print(command);                                                                                //Sends the command.
      delay(1000);
      Serial.print(page);                                                                                   //Sends the page data.
      delay(1000);
      command = "AT+CIPCLOSE=";                                                                             //Sets command that termination of connection.    
      command+=connectionId;
      command+="\r\n";
      Serial.print(command);                                                                                //Sends command that termination of connection.
    }
  }
}
String espRead(long int timeOut){                                                                           //Reads feedback that came from the ESP.
  long int initial = millis();  
  String incoming;
  while(millis() - initial < timeOut){                   
    if(Serial.available()>0){
        char c = Serial.read(); 
        incoming += c;
    } 
  }
  incoming.replace("AT+","");
  return incoming;
}
void serialCleans(long int timeOut){                                                                         //Cleans byte that is utilized at serial communication. 
  long int initial = millis();
  while(millis() - initial < timeOut){
    if(Serial.available()>0){
        Serial.read(); 
    } 
  }
}
void stepForward(int cooldownTime){                                                                          //Step motor is acted through to forward.
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(cooldownTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(cooldownTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(cooldownTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(cooldownTime);
}
void stepBackward(int cooldownTime){                                                                        //Step motor is acted through to backward.
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(cooldownTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(cooldownTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(cooldownTime);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(cooldownTime);
}
