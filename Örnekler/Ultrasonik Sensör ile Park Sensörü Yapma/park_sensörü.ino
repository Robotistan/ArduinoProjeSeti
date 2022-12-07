#define echoPin 6                                             //Defines pins numbers
#define trigPin 7
#define buzzerPin 8

int maximumRange = 50;                                        // Sets maximum range and minimum range for the range
int minimumRange = 0;



void setup() {                                                
  pinMode(trigPin, OUTPUT);                                   // Sets the trigpin as output  
  pinMode(echoPin, INPUT);                                    // Sets the echopin as input
  pinMode(buzzerPin, OUTPUT);                                 // Sets the buzzerpin as output

}

void loop() {

  int measurement = distance(maximumRange, minimumRange);     // Defines the measurement by maximum range and minimum range
  melodi(measurement*10);

}

int distance(int maxrange, int minrange)                      // Defines the distance as max range and min range
{
  long duration, distance;

  digitalWrite(trigPin,LOW);                                  // Sets the trigPin on LOW state for 2 micro seconds
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);                                // Sets the trigPing on HIGH state for 10 micro seconds
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);                          // Reads the echoPin, returns the sound wave travel time in micro seconds
  distance = duration / 58.2;                                 // Calculating the distance
  delay(50);                                                  // Delay for 50 micro seconds

  if(distance >= maxrange || distance <= minrange)            // If maxrange equals minrange, the loop continues
  return 0;
  return distance;
}

int melody(int dly)
{
  tone(buzzerPin, 440);                                       // Makes tone at 440 Herz
  noTone(buzzerPin);                                          // Stops tone 
  delay(dly);                                                 // Delay for dly
  
}
