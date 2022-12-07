
void setup() {                //Sets pin 8 as output
  pinMode(8,OUTPUT);
}
  
void loop() {                 
  digitalWrite(8,HIGH);       //The led is on 
  delay(500);                 //Delay for 500 micro seconds
  digitalWrite(8,LOW);        //The led is off
  delay(500);                 //Delay for 500 micro seconds
}
